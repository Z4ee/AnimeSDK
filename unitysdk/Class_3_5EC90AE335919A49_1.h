#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_76B74AA768347996.h"

class Class_1_83665B095F1535B5_1;
namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }
namespace System { class Action; }

#define CLASS_3_5EC90AE335919A49_1_METHOD_3_37902608E072B994_OFFSET UNITYSDK_OFFSET(0x16155480)
#define CLASS_3_5EC90AE335919A49_1_METHOD_3_544ED7EC5458A014_OFFSET UNITYSDK_OFFSET(0x16155C70)
#define CLASS_3_5EC90AE335919A49_1_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0x16155BD0)
#define CLASS_3_5EC90AE335919A49_1_METHOD_3_D50AF1243ABB56F5_OFFSET UNITYSDK_OFFSET(0x16155940)
#define CLASS_3_5EC90AE335919A49_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16155470)

inline static constexpr unsigned int Class_3_5EC90AE335919A49_1_TypeDefinitionIndex = 48765;

class Class_3_5EC90AE335919A49_1 : public ::Class_2_76B74AA768347996
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_5EC90AE335919A49_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_37902608E072B994(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_5EC90AE335919A49_1_METHOD_3_37902608E072B994_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D50AF1243ABB56F5(::MoleMole::SystemSettingContextBase* a1, ::System::Action* a2, ::System::Action* a3, ::Class_1_83665B095F1535B5_1* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Action*, ::System::Action*, ::Class_1_83665B095F1535B5_1*))((::PBYTE)hIl2Cpp + CLASS_3_5EC90AE335919A49_1_METHOD_3_D50AF1243ABB56F5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_5EC90AE335919A49_1_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_544ED7EC5458A014(::MoleMole::SystemSettingContextBase* a1, ::System::Action* a2, ::System::Action* a3, ::Class_1_83665B095F1535B5_1* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Action*, ::System::Action*, ::Class_1_83665B095F1535B5_1*))((::PBYTE)hIl2Cpp + CLASS_3_5EC90AE335919A49_1_METHOD_3_544ED7EC5458A014_OFFSET))(this, a1, a2, a3, a4);
	}
};
