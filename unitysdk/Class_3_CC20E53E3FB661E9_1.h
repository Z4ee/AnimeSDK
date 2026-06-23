#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB0C166B76D82BF6.h"

class Class_1_83665B095F1535B5;
namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }
namespace System { class Action; }

#define CLASS_3_CC20E53E3FB661E9_1_METHOD_3_5C4F0CFD80C9D41E_OFFSET UNITYSDK_OFFSET(0x12CAA680)
#define CLASS_3_CC20E53E3FB661E9_1_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0x12CAA5E0)
#define CLASS_3_CC20E53E3FB661E9_1_METHOD_3_6B8FFBE98D81BE92_OFFSET UNITYSDK_OFFSET(0x12CAA3C0)
#define CLASS_3_CC20E53E3FB661E9_1_METHOD_3_D50AF1243ABB56F5_OFFSET UNITYSDK_OFFSET(0x12CAA4C0)
#define CLASS_3_CC20E53E3FB661E9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12CAA3B0)

inline static constexpr unsigned int Class_3_CC20E53E3FB661E9_1_TypeDefinitionIndex = 45342;

class Class_3_CC20E53E3FB661E9_1 : public ::Class_2_AB0C166B76D82BF6
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_CC20E53E3FB661E9_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_6B8FFBE98D81BE92(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CC20E53E3FB661E9_1_METHOD_3_6B8FFBE98D81BE92_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D50AF1243ABB56F5(::MoleMole::SystemSettingContextBase* a1, ::System::Action* a2, ::System::Action* a3, ::Class_1_83665B095F1535B5* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Action*, ::System::Action*, ::Class_1_83665B095F1535B5*))((::PBYTE)hIl2Cpp + CLASS_3_CC20E53E3FB661E9_1_METHOD_3_D50AF1243ABB56F5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CC20E53E3FB661E9_1_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5C4F0CFD80C9D41E(::MoleMole::SystemSettingContextBase* a1, ::System::Action* a2, ::System::Action* a3, ::Class_1_83665B095F1535B5* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Action*, ::System::Action*, ::Class_1_83665B095F1535B5*))((::PBYTE)hIl2Cpp + CLASS_3_CC20E53E3FB661E9_1_METHOD_3_5C4F0CFD80C9D41E_OFFSET))(this, a1, a2, a3, a4);
	}
};
