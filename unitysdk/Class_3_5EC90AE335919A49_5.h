#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_76B74AA768347996.h"

class Class_1_83665B095F1535B5_1;
namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }
namespace System { class Action; }

#define CLASS_3_5EC90AE335919A49_5_METHOD_3_544ED7EC5458A014_OFFSET UNITYSDK_OFFSET(0x18DCF160)
#define CLASS_3_5EC90AE335919A49_5_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0x18DCF0C0)
#define CLASS_3_5EC90AE335919A49_5_METHOD_3_665904E4E791279B_OFFSET UNITYSDK_OFFSET(0x18DCEEE0)
#define CLASS_3_5EC90AE335919A49_5_METHOD_3_79035FF231D91273_OFFSET UNITYSDK_OFFSET(0x18DCED20)
#define CLASS_3_5EC90AE335919A49_5__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCED10)

inline static constexpr unsigned int Class_3_5EC90AE335919A49_5_TypeDefinitionIndex = 64132;

class Class_3_5EC90AE335919A49_5 : public ::Class_2_76B74AA768347996
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_5EC90AE335919A49_5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_79035FF231D91273(::MoleMole::SystemSettingContextBase* a1, ::System::Action* a2, ::System::Action* a3, ::Class_1_83665B095F1535B5_1* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Action*, ::System::Action*, ::Class_1_83665B095F1535B5_1*))((::PBYTE)hIl2Cpp + CLASS_3_5EC90AE335919A49_5_METHOD_3_79035FF231D91273_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_665904E4E791279B(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_5EC90AE335919A49_5_METHOD_3_665904E4E791279B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_5EC90AE335919A49_5_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_544ED7EC5458A014(::MoleMole::SystemSettingContextBase* a1, ::System::Action* a2, ::System::Action* a3, ::Class_1_83665B095F1535B5_1* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Action*, ::System::Action*, ::Class_1_83665B095F1535B5_1*))((::PBYTE)hIl2Cpp + CLASS_3_5EC90AE335919A49_5_METHOD_3_544ED7EC5458A014_OFFSET))(this, a1, a2, a3, a4);
	}
};
