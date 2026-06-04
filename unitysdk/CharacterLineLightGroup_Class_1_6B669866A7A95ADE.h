#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CHARACTERLINELIGHTGROUP_CLASS_1_6B669866A7A95ADE__CTOR_OFFSET UNITYSDK_OFFSET(0xC73E500)

inline static constexpr unsigned int CharacterLineLightGroup_Class_1_6B669866A7A95ADE_TypeDefinitionIndex = 44758;

class CharacterLineLightGroup_Class_1_6B669866A7A95ADE : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x24
	::UnityEngine::Color Field_1_3; // 0x30
	::System::Int32 Field_1_4; // 0x40
	::System::Single Field_1_5; // 0x44
	::UnityEngine::Vector3 Field_1_6; // 0x48
	::UnityEngine::Vector3 Field_1_7; // 0x54
	::System::Int32 Field_1_8; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_CLASS_1_6B669866A7A95ADE__CTOR_OFFSET))(this);
	}
};
