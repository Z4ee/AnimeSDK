#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LOOPGENERATOR_SLIDERTEMPLATE_GET_TARGETGO_OFFSET UNITYSDK_OFFSET(0x676BA0)
#define RPG_CLIENT_LOOPGENERATOR_SLIDERTEMPLATE_SET_TARGETGO_OFFSET UNITYSDK_OFFSET(0xA4B360)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerator_SliderTemplate_TypeDefinitionIndex = 69649;

	struct alignas(8) LoopGenerator_SliderTemplate
	{
		::System::String* NickName; // 0x10
		::System::String* TargetGoPath; // 0x18
		::UnityEngine::GameObject* _TargetGo_k__BackingField; // 0x20
		::UnityEngine::Bounds RendererBounds; // 0x28
		::System::Int32 Index; // 0x40

		::UnityEngine::GameObject* get_TargetGo()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_SLIDERTEMPLATE_GET_TARGETGO_OFFSET))(this);
		}

		::System::Void set_TargetGo(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_SLIDERTEMPLATE_SET_TARGETGO_OFFSET))(this, a1);
		}
	};
}
