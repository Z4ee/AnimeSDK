#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_481;
class Class_2_A944C35C433158AC;
namespace System { template <typename T> class Func_1; }

#define CLASS_2_B89683A15B3B0C43_CLASS_1_991A266FEC18DD9F_METHOD_1_16A7A838275A61AE_OFFSET UNITYSDK_OFFSET(0x141721D0)
#define CLASS_2_B89683A15B3B0C43_CLASS_1_991A266FEC18DD9F_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x14172790)
#define CLASS_2_B89683A15B3B0C43_CLASS_1_991A266FEC18DD9F__CTOR_OFFSET UNITYSDK_OFFSET(0x14171D80)

inline static constexpr unsigned int Class_2_B89683A15B3B0C43_Class_1_991A266FEC18DD9F_TypeDefinitionIndex = 58986;

class Class_2_B89683A15B3B0C43_Class_1_991A266FEC18DD9F : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_481* Field_1_5; // 0x10
	::System::Func_1<::System::Single>* Field_1_1; // 0x18
	::Class_2_A944C35C433158AC* Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x28
	::System::Boolean Field_1_0; // 0x2C
	::UnityEngine::Vector3 Field_1_7; // 0x30
	::UnityEngine::Quaternion Field_1_8; // 0x3C
	::System::Single Field_1_4; // 0x4C
	::System::Single Field_1_6; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B89683A15B3B0C43_CLASS_1_991A266FEC18DD9F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_16A7A838275A61AE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B89683A15B3B0C43_CLASS_1_991A266FEC18DD9F_METHOD_1_16A7A838275A61AE_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B89683A15B3B0C43_CLASS_1_991A266FEC18DD9F_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
