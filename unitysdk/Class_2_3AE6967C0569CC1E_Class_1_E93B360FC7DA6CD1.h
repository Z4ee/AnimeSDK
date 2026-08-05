#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_30.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_2_3AE6967C0569CC1E;
namespace MoleMole { class UserLocalDataItem; }
namespace System { class Action; }

#define CLASS_2_3AE6967C0569CC1E_CLASS_1_E93B360FC7DA6CD1_METHOD_1_D2DD6AE28AAF69CC_OFFSET UNITYSDK_OFFSET(0x1019D5E0)
#define CLASS_2_3AE6967C0569CC1E_CLASS_1_E93B360FC7DA6CD1_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x1019D5F0)
#define CLASS_2_3AE6967C0569CC1E_CLASS_1_E93B360FC7DA6CD1__CTOR_OFFSET UNITYSDK_OFFSET(0x1019D5D0)

inline static constexpr unsigned int Class_2_3AE6967C0569CC1E_Class_1_E93B360FC7DA6CD1_TypeDefinitionIndex = 66923;

class Class_2_3AE6967C0569CC1E_Class_1_E93B360FC7DA6CD1 : public ::System::Object
{
public:
	::System::Action* Field_1_4; // 0x10
	::Class_2_3AE6967C0569CC1E* Field_1_5; // 0x18
	::MoleMole::UserLocalDataItem* Field_1_0; // 0x20
	::System::UInt32 Field_1_7; // 0x28
	::Enum_3_0A3761FE34514D6C_30 Field_1_6; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AE6967C0569CC1E_CLASS_1_E93B360FC7DA6CD1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D2DD6AE28AAF69CC(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_3AE6967C0569CC1E_CLASS_1_E93B360FC7DA6CD1_METHOD_1_D2DD6AE28AAF69CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AE6967C0569CC1E_CLASS_1_E93B360FC7DA6CD1_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}
};
