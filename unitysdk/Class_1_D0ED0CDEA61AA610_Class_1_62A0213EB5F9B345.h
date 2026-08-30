#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D0ED0CDEA61AA610_Class_1_99864A5AECFC1D07;

#define CLASS_1_D0ED0CDEA61AA610_CLASS_1_62A0213EB5F9B345_EQUALS_OFFSET UNITYSDK_OFFSET(0x16361890)
#define CLASS_1_D0ED0CDEA61AA610_CLASS_1_62A0213EB5F9B345_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x163619A0)
#define CLASS_1_D0ED0CDEA61AA610_CLASS_1_62A0213EB5F9B345__CTOR_OFFSET UNITYSDK_OFFSET(0x163619F0)

inline static constexpr unsigned int Class_1_D0ED0CDEA61AA610_Class_1_62A0213EB5F9B345_TypeDefinitionIndex = 70648;

class Class_1_D0ED0CDEA61AA610_Class_1_62A0213EB5F9B345 : public ::System::Object
{
public:
	::Class_1_D0ED0CDEA61AA610_Class_1_99864A5AECFC1D07* KMMCOHGOHOB; // 0x10
	::Class_1_D0ED0CDEA61AA610_Class_1_62A0213EB5F9B345* PBJELCENFHF; // 0x18
	::Class_1_D0ED0CDEA61AA610_Class_1_62A0213EB5F9B345* FGEIIMDCHPF; // 0x20
	::System::Int32 DLGIKPLGHGL; // 0x28
	::UnityEngine::Vector3 CDLEHPFGKHC; // 0x2C
	::UnityEngine::Vector3 NGEHNIIOACO; // 0x38
	::UnityEngine::Vector3 NPHAFNPMMDF; // 0x44
	::UnityEngine::Vector2 HMAGPLNGNMP; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_CLASS_1_62A0213EB5F9B345__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_CLASS_1_62A0213EB5F9B345_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_CLASS_1_62A0213EB5F9B345_GETHASHCODE_OFFSET))(this);
	}
};
