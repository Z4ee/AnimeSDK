#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_2_31C88AF1FF67094B_CLASS_1_DCFAECE867B6648C__CTOR_OFFSET UNITYSDK_OFFSET(0x123A8000)

inline static constexpr unsigned int Class_2_31C88AF1FF67094B_Class_1_DCFAECE867B6648C_TypeDefinitionIndex = 66162;

class Class_2_31C88AF1FF67094B_Class_1_DCFAECE867B6648C : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::UnityEngine::Animator* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C88AF1FF67094B_CLASS_1_DCFAECE867B6648C__CTOR_OFFSET))(this);
	}
};
