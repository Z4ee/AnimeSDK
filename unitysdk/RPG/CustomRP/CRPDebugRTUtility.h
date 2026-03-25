#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/EDebugChanelMask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/EDebugRT.h"

namespace RPG::CustomRP { class CRPRendererData; }
namespace System { class String; }

#define RPG_CUSTOMRP_CRPDEBUGRTUTILITY_GETDEBUGINFO_1_OFFSET UNITYSDK_OFFSET(0x16A6F960)
#define RPG_CUSTOMRP_CRPDEBUGRTUTILITY_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x16A6F950)
#define RPG_CUSTOMRP_CRPDEBUGRTUTILITY_GETDEBUGSUBINFO_OFFSET UNITYSDK_OFFSET(0x16A6F970)
#define RPG_CUSTOMRP_CRPDEBUGRTUTILITY_INITDEBUGRT_OFFSET UNITYSDK_OFFSET(0x16A6F930)
#define RPG_CUSTOMRP_CRPDEBUGRTUTILITY_SETDEBUG_OFFSET UNITYSDK_OFFSET(0x16A6F940)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPDebugRTUtility_TypeDefinitionIndex = 29480;

	class CRPDebugRTUtility : public ::System::Object
	{
	public:
		static ::System::Void InitDebugRT(::RPG::CustomRP::CRPRendererData* renderData)
		{
			return ((::System::Void(*)(::RPG::CustomRP::CRPRendererData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPDEBUGRTUTILITY_INITDEBUGRT_OFFSET))(renderData);
		}

		static ::System::Void SetDebug(::UnityEngine::Rendering::EDebugRT debugID, ::System::Int32 subID, ::RPG::CustomRP::EDebugChanelMask chanelMask, ::System::Single colorScale, ::System::Single alphaScale)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::EDebugRT, ::System::Int32, ::RPG::CustomRP::EDebugChanelMask, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPDEBUGRTUTILITY_SETDEBUG_OFFSET))(debugID, subID, chanelMask, colorScale, alphaScale);
		}

		static ::System::Void GetDebugInfo(::System::Int32& debugID, ::System::Int32& subID)
		{
			return ((::System::Void(*)(::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPDEBUGRTUTILITY_GETDEBUGINFO_OFFSET))(debugID, subID);
		}

		static ::System::Void GetDebugInfo_1(::Il2CppArray<::System::String*>*& names)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPDEBUGRTUTILITY_GETDEBUGINFO_1_OFFSET))(names);
		}

		static ::System::Void GetDebugSubInfo(::Il2CppArray<::System::String*>*& names)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPDEBUGRTUTILITY_GETDEBUGSUBINFO_OFFSET))(names);
		}
	};
}
