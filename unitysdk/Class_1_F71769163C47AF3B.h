#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_287;
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_F71769163C47AF3B_METHOD_1_8A8D877360106A4F_OFFSET UNITYSDK_OFFSET(0x14FFE670)
#define CLASS_1_F71769163C47AF3B__CTOR_OFFSET UNITYSDK_OFFSET(0x14FFE7D0)

inline static constexpr unsigned int Class_1_F71769163C47AF3B_TypeDefinitionIndex = 59736;

class Class_1_F71769163C47AF3B : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_4; // 0x10
	::UnityEngine::AnimationCurve* Field_1_2; // 0x18
	::System::Single Field_1_3; // 0x20
	::UnityEngine::Vector2 Field_1_0; // 0x24
	::System::Single Field_1_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F71769163C47AF3B__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_287* Method_1_8A8D877360106A4F()
	{
		return ((::Class_0_16E4307DCC419505_287*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F71769163C47AF3B_METHOD_1_8A8D877360106A4F_OFFSET))(this);
	}
};
