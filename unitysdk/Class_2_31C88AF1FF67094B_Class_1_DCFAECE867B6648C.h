#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_2_31C88AF1FF67094B_CLASS_1_DCFAECE867B6648C__CTOR_OFFSET UNITYSDK_OFFSET(0xAA0C210)

inline static constexpr unsigned int Class_2_31C88AF1FF67094B_Class_1_DCFAECE867B6648C_TypeDefinitionIndex = 67100;

class Class_2_31C88AF1FF67094B_Class_1_DCFAECE867B6648C : public ::System::Object
{
public:
	::UnityEngine::Animator* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C88AF1FF67094B_CLASS_1_DCFAECE867B6648C__CTOR_OFFSET))(this);
	}
};
