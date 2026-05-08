#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A5C63A7A740BFBD0.h"
#include "unitysdk/MoleMole/Battle/MonsterAlertInitParams.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_07AAFA6F7F79BEB3;

#define CLASS_2_080A5B2F32D63C7F_METHOD_2_03E1F9C5B660FAB7_OFFSET UNITYSDK_OFFSET(0x1131DD60)
#define CLASS_2_080A5B2F32D63C7F_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1131E6D0)
#define CLASS_2_080A5B2F32D63C7F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1131E770)
#define CLASS_2_080A5B2F32D63C7F__CTOR_OFFSET UNITYSDK_OFFSET(0x1131E760)

inline static constexpr unsigned int Class_2_080A5B2F32D63C7F_TypeDefinitionIndex = 65019;

class Class_2_080A5B2F32D63C7F : public ::Class_1_A5C63A7A740BFBD0
{
public:
	::Class_3_07AAFA6F7F79BEB3* Field_2_8; // 0x20
	::MoleMole::Battle::MonsterAlertInitParams Field_2_7; // 0x28
	::System::Boolean Field_2_3; // 0x48
	::System::Boolean Field_2_4; // 0x49
	::System::Boolean Field_2_5; // 0x4A
	::System::Int32 Field_2_2; // 0x4C
	::System::Single Field_2_1; // 0x50
	::UnityEngine::Vector3 Field_2_6; // 0x54
	::System::UInt32 Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_080A5B2F32D63C7F__CTOR_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_2_03E1F9C5B660FAB7()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_080A5B2F32D63C7F_METHOD_2_03E1F9C5B660FAB7_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_080A5B2F32D63C7F_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_080A5B2F32D63C7F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
