#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_04E8A8CB715F95A7_CLASS_1_F9EEB1063E933248_CLEAR_OFFSET UNITYSDK_OFFSET(0xBA84E40)
#define CLASS_1_04E8A8CB715F95A7_CLASS_1_F9EEB1063E933248__CTOR_OFFSET UNITYSDK_OFFSET(0xBA84E90)

inline static constexpr unsigned int Class_1_04E8A8CB715F95A7_Class_1_F9EEB1063E933248_TypeDefinitionIndex = 57602;

class Class_1_04E8A8CB715F95A7_Class_1_F9EEB1063E933248 : public ::System::Object
{
public:
	::System::Single MMNELBFMJOF; // 0x10
	::System::Single NONAGBGPMKF; // 0x14
	::UnityEngine::Quaternion NMELCPIOKNO; // 0x18
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_CLASS_1_F9EEB1063E933248__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_CLASS_1_F9EEB1063E933248_CLEAR_OFFSET))(this);
	}
};
