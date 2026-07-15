#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferLoadAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferStoreAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetBinding.h"

namespace RPG::CustomRP { class PassRTRes; }

#define RPG_CUSTOMRP_MRTBINDING_INIT_OFFSET UNITYSDK_OFFSET(0x3946910)
#define RPG_CUSTOMRP_MRTBINDING_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x3946A30)
#define RPG_CUSTOMRP_MRTBINDING_SETLOADACTION_OFFSET UNITYSDK_OFFSET(0x39469B0)
#define RPG_CUSTOMRP_MRTBINDING_SETRT_1_OFFSET UNITYSDK_OFFSET(0x3946930)
#define RPG_CUSTOMRP_MRTBINDING_SETRT_OFFSET UNITYSDK_OFFSET(0x3946920)
#define RPG_CUSTOMRP_MRTBINDING_SETSTOREACTION_OFFSET UNITYSDK_OFFSET(0x39469F0)
#define RPG_CUSTOMRP_MRTBINDING_SETTMPRT_OFFSET UNITYSDK_OFFSET(0x3946940)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MRTBinding_TypeDefinitionIndex = 36337;

	struct alignas(8) MRTBinding
	{
		::UnityEngine::Rendering::RenderTargetBinding rtBinding; // 0x10
		::Il2CppArray<::System::Int32>* colors; // 0x58
		::System::Int32 depth; // 0x60

		::System::Void Init(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MRTBINDING_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void SetRT(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MRTBINDING_SETRT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetRT_1(::System::Int32 a1, ::RPG::CustomRP::PassRTRes* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::CustomRP::PassRTRes*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MRTBINDING_SETRT_1_OFFSET))(this, a1, a2);
		}

		/*
		::System::Void SetTmpRT(::System::Int32 a1, ::RPG::CustomRP::RTIDHandle& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::CustomRP::RTIDHandle&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MRTBINDING_SETTMPRT_OFFSET))(this, a1, a2);
		}
		*/

		::System::Void SetLoadAction(::System::Int32 a1, ::UnityEngine::Rendering::RenderBufferLoadAction a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderBufferLoadAction))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MRTBINDING_SETLOADACTION_OFFSET))(this, a1, a2);
		}

		::System::Void SetStoreAction(::System::Int32 a1, ::UnityEngine::Rendering::RenderBufferStoreAction a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MRTBINDING_SETSTOREACTION_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsChanged(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MRTBINDING_ISCHANGED_OFFSET))(this, a1);
		}
	};
}
