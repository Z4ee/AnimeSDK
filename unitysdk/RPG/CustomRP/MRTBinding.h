#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferLoadAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferStoreAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetBinding.h"

namespace RPG::CustomRP { class PassRTRes; }

#define RPG_CUSTOMRP_MRTBINDING_INIT_OFFSET UNITYSDK_OFFSET(0x20E7710)
#define RPG_CUSTOMRP_MRTBINDING_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x20E7850)
#define RPG_CUSTOMRP_MRTBINDING_SETLOADACTION_OFFSET UNITYSDK_OFFSET(0x20E77C0)
#define RPG_CUSTOMRP_MRTBINDING_SETRT_1_OFFSET UNITYSDK_OFFSET(0x20E7730)
#define RPG_CUSTOMRP_MRTBINDING_SETRT_OFFSET UNITYSDK_OFFSET(0x20E7720)
#define RPG_CUSTOMRP_MRTBINDING_SETSTOREACTION_OFFSET UNITYSDK_OFFSET(0x20E7800)
#define RPG_CUSTOMRP_MRTBINDING_SETTMPRT_OFFSET UNITYSDK_OFFSET(0x20E7740)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MRTBinding_TypeDefinitionIndex = 29488;

	struct alignas(8) MRTBinding
	{
		::UnityEngine::Rendering::RenderTargetBinding rtBinding; // 0x10
		::Il2CppArray<::System::Int32>* colors; // 0x58
		::System::Int32 depth; // 0x60

		::System::Void Init(::System::Int32 count, ::System::Int32 depthID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MRTBINDING_INIT_OFFSET))(this, count, depthID);
		}

		::System::Void SetRT(::System::Int32 index, ::System::Int32 rtID, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MRTBINDING_SETRT_OFFSET))(this, index, rtID, force);
		}

		::System::Void SetRT_1(::System::Int32 index, ::RPG::CustomRP::PassRTRes* rt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::CustomRP::PassRTRes*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MRTBINDING_SETRT_1_OFFSET))(this, index, rt);
		}

		/*
		::System::Void SetTmpRT(::System::Int32 index, ::RPG::CustomRP::RTIDHandle& rtid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::CustomRP::RTIDHandle&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MRTBINDING_SETTMPRT_OFFSET))(this, index, rtid);
		}
		*/

		::System::Void SetLoadAction(::System::Int32 index, ::UnityEngine::Rendering::RenderBufferLoadAction action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderBufferLoadAction))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MRTBINDING_SETLOADACTION_OFFSET))(this, index, action);
		}

		::System::Void SetStoreAction(::System::Int32 index, ::UnityEngine::Rendering::RenderBufferStoreAction action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MRTBINDING_SETSTOREACTION_OFFSET))(this, index, action);
		}

		::System::Boolean IsChanged(::System::Int32 count)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MRTBINDING_ISCHANGED_OFFSET))(this, count);
		}
	};
}
