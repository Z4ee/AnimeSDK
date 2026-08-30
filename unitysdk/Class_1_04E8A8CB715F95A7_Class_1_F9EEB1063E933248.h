#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_04E8A8CB715F95A7_CLASS_1_F9EEB1063E933248_CLEAR_OFFSET UNITYSDK_OFFSET(0x19A95210)
#define CLASS_1_04E8A8CB715F95A7_CLASS_1_F9EEB1063E933248__CTOR_OFFSET UNITYSDK_OFFSET(0x19A95260)

inline static constexpr unsigned int Class_1_04E8A8CB715F95A7_Class_1_F9EEB1063E933248_TypeDefinitionIndex = 57602;

class Class_1_04E8A8CB715F95A7_Class_1_F9EEB1063E933248 : public ::System::Object
{
public:
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x10
	::UnityEngine::Quaternion NMELCPIOKNO; // 0x1C
	::System::Single NONAGBGPMKF; // 0x2C
	::System::Single MMNELBFMJOF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_CLASS_1_F9EEB1063E933248__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_CLASS_1_F9EEB1063E933248_CLEAR_OFFSET))(this);
	}
};
