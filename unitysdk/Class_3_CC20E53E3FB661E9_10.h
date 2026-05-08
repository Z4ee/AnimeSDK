#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB0C166B76D82BF6.h"

class Class_1_83665B095F1535B5_1;
namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }
namespace System { class Action; }

#define CLASS_3_CC20E53E3FB661E9_10_METHOD_3_5C4F0CFD80C9D41E_OFFSET UNITYSDK_OFFSET(0x10C0FDF0)
#define CLASS_3_CC20E53E3FB661E9_10_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0x10C0FEC0)
#define CLASS_3_CC20E53E3FB661E9_10_METHOD_3_87D72823F12D9D80_OFFSET UNITYSDK_OFFSET(0x10C0FA60)
#define CLASS_3_CC20E53E3FB661E9_10_METHOD_3_B5C3FEFD7DA82C08_OFFSET UNITYSDK_OFFSET(0x10C0F8D0)
#define CLASS_3_CC20E53E3FB661E9_10__CTOR_OFFSET UNITYSDK_OFFSET(0x10C0F8C0)

inline static constexpr unsigned int Class_3_CC20E53E3FB661E9_10_TypeDefinitionIndex = 80088;

class Class_3_CC20E53E3FB661E9_10 : public ::Class_2_AB0C166B76D82BF6
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_CC20E53E3FB661E9_10__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_B5C3FEFD7DA82C08(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CC20E53E3FB661E9_10_METHOD_3_B5C3FEFD7DA82C08_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_87D72823F12D9D80(::MoleMole::SystemSettingContextBase* a1, ::System::Action* a2, ::System::Action* a3, ::Class_1_83665B095F1535B5_1* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Action*, ::System::Action*, ::Class_1_83665B095F1535B5_1*))((::PBYTE)hIl2Cpp + CLASS_3_CC20E53E3FB661E9_10_METHOD_3_87D72823F12D9D80_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_5C4F0CFD80C9D41E(::MoleMole::SystemSettingContextBase* a1, ::System::Action* a2, ::System::Action* a3, ::Class_1_83665B095F1535B5_1* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Action*, ::System::Action*, ::Class_1_83665B095F1535B5_1*))((::PBYTE)hIl2Cpp + CLASS_3_CC20E53E3FB661E9_10_METHOD_3_5C4F0CFD80C9D41E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CC20E53E3FB661E9_10_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}
};
