#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_DCB7F8B839F0C44B_4;
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }

#define CLASS_4_EF02F83F94E06A1A_GETBUBBLEWIDGET_OFFSET UNITYSDK_OFFSET(0x159CE0E0)
#define CLASS_4_EF02F83F94E06A1A_METHOD_4_23B573F7FD360F67_OFFSET UNITYSDK_OFFSET(0x166BC6A0)
#define CLASS_4_EF02F83F94E06A1A_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x166BC690)
#define CLASS_4_EF02F83F94E06A1A_METHOD_4_709CF7B1B9FB703C_OFFSET UNITYSDK_OFFSET(0x159CE060)
#define CLASS_4_EF02F83F94E06A1A_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x159CDFD0)
#define CLASS_4_EF02F83F94E06A1A_METHOD_4_BCBA2F161B837B0C_OFFSET UNITYSDK_OFFSET(0x166BC6F0)
#define CLASS_4_EF02F83F94E06A1A_OPENBUBBLEROW_OFFSET UNITYSDK_OFFSET(0x166BC490)
#define CLASS_4_EF02F83F94E06A1A__CTOR_OFFSET UNITYSDK_OFFSET(0x166BC640)

inline static constexpr unsigned int Class_4_EF02F83F94E06A1A_TypeDefinitionIndex = 52267;

class Class_4_EF02F83F94E06A1A : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EF02F83F94E06A1A__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EF02F83F94E06A1A_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_709CF7B1B9FB703C(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_EF02F83F94E06A1A_METHOD_4_709CF7B1B9FB703C_OFFSET))(this, a1);
	}

	::MoleMole::UIGeneralNewsBubbleWidgetController* GetBubbleWidget()
	{
		return ((::MoleMole::UIGeneralNewsBubbleWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EF02F83F94E06A1A_GETBUBBLEWIDGET_OFFSET))(this);
	}

	::MoleMole::UIGeneralNewsBubbleRowWidgetController* OpenBubbleRow()
	{
		return ((::MoleMole::UIGeneralNewsBubbleRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EF02F83F94E06A1A_OPENBUBBLEROW_OFFSET))(this);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EF02F83F94E06A1A_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	static ::System::UInt32 Method_4_23B573F7FD360F67()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_4_EF02F83F94E06A1A_METHOD_4_23B573F7FD360F67_OFFSET))();
	}

	::System::Void Method_4_BCBA2F161B837B0C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_EF02F83F94E06A1A_METHOD_4_BCBA2F161B837B0C_OFFSET))(this, a1);
	}
};
