#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/EDebugChanelMask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/EDebugRT.h"

namespace RPG::CustomRP { class CRPRendererData; }
namespace System { class String; }

#define RPG_CUSTOMRP_CRPDEBUGRTUTILITY_GETDEBUGINFO_1_OFFSET UNITYSDK_OFFSET(0x1780E550)
#define RPG_CUSTOMRP_CRPDEBUGRTUTILITY_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x1780E540)
#define RPG_CUSTOMRP_CRPDEBUGRTUTILITY_GETDEBUGSUBINFO_OFFSET UNITYSDK_OFFSET(0x1780E560)
#define RPG_CUSTOMRP_CRPDEBUGRTUTILITY_INITDEBUGRT_OFFSET UNITYSDK_OFFSET(0x1780E520)
#define RPG_CUSTOMRP_CRPDEBUGRTUTILITY_SETDEBUG_OFFSET UNITYSDK_OFFSET(0x1780E530)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPDebugRTUtility_TypeDefinitionIndex = 36329;

	class CRPDebugRTUtility : public ::System::Object
	{
	public:
		static ::System::Void InitDebugRT(::RPG::CustomRP::CRPRendererData* a1)
		{
			return ((::System::Void(*)(::RPG::CustomRP::CRPRendererData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPDEBUGRTUTILITY_INITDEBUGRT_OFFSET))(a1);
		}

		static ::System::Void SetDebug(::UnityEngine::Rendering::EDebugRT a1, ::System::Int32 a2, ::RPG::CustomRP::EDebugChanelMask a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::EDebugRT, ::System::Int32, ::RPG::CustomRP::EDebugChanelMask, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPDEBUGRTUTILITY_SETDEBUG_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void GetDebugInfo(::System::Int32& a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPDEBUGRTUTILITY_GETDEBUGINFO_OFFSET))(a1, a2);
		}

		static ::System::Void GetDebugInfo_1(::Il2CppArray<::System::String*>*& a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPDEBUGRTUTILITY_GETDEBUGINFO_1_OFFSET))(a1);
		}

		static ::System::Void GetDebugSubInfo(::Il2CppArray<::System::String*>*& a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPDEBUGRTUTILITY_GETDEBUGSUBINFO_OFFSET))(a1);
		}
	};
}
