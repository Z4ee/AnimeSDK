#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_6DE8726ADEF173A7_6_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C54B490)
#define CLASS_1_6DE8726ADEF173A7_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1C54B500)

inline static constexpr unsigned int Class_1_6DE8726ADEF173A7_6_TypeDefinitionIndex = 41644;

class Class_1_6DE8726ADEF173A7_6 : public ::System::Object
{
public:
	::System::Single PKNDGLDHMKK; // 0x10
	::UnityEngine::Vector3 OHLPJGIECPF; // 0x14
	::System::Single IDFBFGKPCHF; // 0x20
	::System::Single MLKAGGJKCGN; // 0x24
	::System::Single PMKKIEEPHEL; // 0x28
	::System::Single JMEFHJGLHHA; // 0x2C
	::System::Single AHBJOGJADMN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7_6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7_6_CLEAR_OFFSET))(this);
	}
};
