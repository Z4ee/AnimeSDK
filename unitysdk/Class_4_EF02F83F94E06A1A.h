#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_DCB7F8B839F0C44B_4;
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }

#define CLASS_4_EF02F83F94E06A1A_GETBUBBLEWIDGET_OFFSET UNITYSDK_OFFSET(0x14610130)
#define CLASS_4_EF02F83F94E06A1A_METHOD_4_23B573F7FD360F67_OFFSET UNITYSDK_OFFSET(0x14610540)
#define CLASS_4_EF02F83F94E06A1A_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x14610530)
#define CLASS_4_EF02F83F94E06A1A_METHOD_4_709CF7B1B9FB703C_OFFSET UNITYSDK_OFFSET(0x1460FDF0)
#define CLASS_4_EF02F83F94E06A1A_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1460FD60)
#define CLASS_4_EF02F83F94E06A1A_METHOD_4_B8A8F4F120B2F6D5_OFFSET UNITYSDK_OFFSET(0x1460FE70)
#define CLASS_4_EF02F83F94E06A1A_OPENBUBBLEROW_OFFSET UNITYSDK_OFFSET(0x14610330)
#define CLASS_4_EF02F83F94E06A1A__CTOR_OFFSET UNITYSDK_OFFSET(0x146104E0)

inline static constexpr unsigned int Class_4_EF02F83F94E06A1A_TypeDefinitionIndex = 50299;

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

	::System::Void Method_4_B8A8F4F120B2F6D5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_EF02F83F94E06A1A_METHOD_4_B8A8F4F120B2F6D5_OFFSET))(this, a1);
	}
};
