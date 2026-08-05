#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MONOANIMATIONCONTROLRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x19DCE9E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoAnimationControlRenderer_TypeDefinitionIndex = 52160;

	class MonoAnimationControlRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Renderer*>* targetRenderers; // 0x18
		::System::String* vectorPropertyKey; // 0x20
		::UnityEngine::Vector4 keyedVector; // 0x28
		::System::Int32 Field_5_6; // 0x38
		::System::String* vectorPropertyKey2; // 0x40
		::UnityEngine::Vector4 keyedVector2; // 0x48
		::System::Int32 Field_5_11; // 0x58
		::System::String* floatPropertyKey; // 0x60
		::System::Single keyedFloat; // 0x68
		::System::Int32 Field_5_8; // 0x6C
		::System::String* floatPropertyKey2; // 0x70
		::System::Single keyedFloat2; // 0x78
		::System::Int32 Field_5_13; // 0x7C
		::System::String* floatPropertyKey3; // 0x80
		::System::Single keyedFloat3; // 0x88
		::System::Int32 Field_5_18; // 0x8C
		::System::String* floatPropertyKey4; // 0x90
		::System::Single keyedFloat4; // 0x98
		::System::Int32 Field_5_23; // 0x9C
		::System::String* colorPropertyKey; // 0xA0
		::UnityEngine::Color keyedColor; // 0xA8
		::System::Int32 Field_5_20; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONCONTROLRENDERER__CTOR_OFFSET))(this);
		}
	};
}
