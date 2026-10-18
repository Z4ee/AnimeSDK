#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_87FFAE4B2950E6A5;
namespace System { class String; }

#define CLASS_1_3497D086B05ACE3A_METHOD_1_1FF59A52EE8D2650_OFFSET UNITYSDK_OFFSET(0x1651E3E0)
#define CLASS_1_3497D086B05ACE3A__CTOR_OFFSET UNITYSDK_OFFSET(0x1651E530)

inline static constexpr unsigned int Class_1_3497D086B05ACE3A_TypeDefinitionIndex = 68007;

class Class_1_3497D086B05ACE3A : public ::System::Object
{
public:
	::System::String* EBCFEAHLKPM; // 0x10
	::System::UInt32 MEPFOEEGBEA; // 0x18
	::UnityEngine::Quaternion NMELCPIOKNO; // 0x1C
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3497D086B05ACE3A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1FF59A52EE8D2650(::Class_1_87FFAE4B2950E6A5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87FFAE4B2950E6A5*))((::PBYTE)hIl2Cpp + CLASS_1_3497D086B05ACE3A_METHOD_1_1FF59A52EE8D2650_OFFSET))(this, a1);
	}
};
