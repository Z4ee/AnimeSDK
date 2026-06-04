#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_E9F8FB76DA71A219;
namespace System { class String; }

#define CLASS_1_3497D086B05ACE3A_METHOD_1_1FF59A52EE8D2650_OFFSET UNITYSDK_OFFSET(0x1422A2E0)
#define CLASS_1_3497D086B05ACE3A__CTOR_OFFSET UNITYSDK_OFFSET(0x1422A430)

inline static constexpr unsigned int Class_1_3497D086B05ACE3A_TypeDefinitionIndex = 63628;

class Class_1_3497D086B05ACE3A : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x24
	::UnityEngine::Quaternion Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3497D086B05ACE3A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1FF59A52EE8D2650(::Class_1_E9F8FB76DA71A219* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E9F8FB76DA71A219*))((::PBYTE)hIl2Cpp + CLASS_1_3497D086B05ACE3A_METHOD_1_1FF59A52EE8D2650_OFFSET))(this, a1);
	}
};
