#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_16.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_2_3AE6967C0569CC1E;
namespace MoleMole { class UserLocalDataItem; }
namespace System { class Action; }

#define CLASS_2_3AE6967C0569CC1E_CLASS_1_7F09399883248FE1_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x109185C0)
#define CLASS_2_3AE6967C0569CC1E_CLASS_1_7F09399883248FE1_METHOD_1_EC073B6268163ED6_OFFSET UNITYSDK_OFFSET(0x109185B0)
#define CLASS_2_3AE6967C0569CC1E_CLASS_1_7F09399883248FE1__CTOR_OFFSET UNITYSDK_OFFSET(0x109185A0)

inline static constexpr unsigned int Class_2_3AE6967C0569CC1E_Class_1_7F09399883248FE1_TypeDefinitionIndex = 75433;

class Class_2_3AE6967C0569CC1E_Class_1_7F09399883248FE1 : public ::System::Object
{
public:
	::MoleMole::UserLocalDataItem* Field_1_0; // 0x10
	::System::Action* Field_1_4; // 0x18
	::Class_2_3AE6967C0569CC1E* Field_1_3; // 0x20
	::System::UInt32 Field_1_1; // 0x28
	::Enum_3_0A3761FE34514D6C_16 Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AE6967C0569CC1E_CLASS_1_7F09399883248FE1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EC073B6268163ED6(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_3AE6967C0569CC1E_CLASS_1_7F09399883248FE1_METHOD_1_EC073B6268163ED6_OFFSET))(this, a1);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AE6967C0569CC1E_CLASS_1_7F09399883248FE1_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}
};
