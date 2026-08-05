#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_260BBD85C46FFB2D.h"

class Class_1_A1B83C8DEA7CC5F6_1;
class Class_1_BFBF20E9360097AF;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIDoubleWeekProgressPointWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_80EC5A94E858E47B_METHOD_2_5C21143D796C35F7_OFFSET UNITYSDK_OFFSET(0x167A2B40)
#define CLASS_2_80EC5A94E858E47B_METHOD_2_763B70E1B527E566_OFFSET UNITYSDK_OFFSET(0x167A1120)
#define CLASS_2_80EC5A94E858E47B_METHOD_2_76C2FF0DFF11ED80_OFFSET UNITYSDK_OFFSET(0x167A14C0)
#define CLASS_2_80EC5A94E858E47B_METHOD_2_A239D18D2D7BE4DD_OFFSET UNITYSDK_OFFSET(0x167A2060)
#define CLASS_2_80EC5A94E858E47B_METHOD_2_A59F33F8CA7F3A80_OFFSET UNITYSDK_OFFSET(0x167A2980)
#define CLASS_2_80EC5A94E858E47B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x167A2020)
#define CLASS_2_80EC5A94E858E47B_METHOD_2_DB3BAA461746FC0B_OFFSET UNITYSDK_OFFSET(0x167A1A50)
#define CLASS_2_80EC5A94E858E47B__CTOR_OFFSET UNITYSDK_OFFSET(0x167A1070)

inline static constexpr unsigned int Class_2_80EC5A94E858E47B_TypeDefinitionIndex = 80085;

class Class_2_80EC5A94E858E47B : public ::Class_1_260BBD85C46FFB2D
{
public:
	::MoleMole::UIBaseController* Field_2_7; // 0x38
	::Class_1_BFBF20E9360097AF* Field_2_0; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::UIDoubleWeekProgressPointWidgetController*>* Field_2_6; // 0x48
	::System::Single Field_2_4; // 0x50
	::System::Int32 Field_2_5; // 0x54

	::System::Void _ctor(::MoleMole::UIBaseController* a1, ::Class_1_BFBF20E9360097AF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::Class_1_BFBF20E9360097AF*))((::PBYTE)hIl2Cpp + CLASS_2_80EC5A94E858E47B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_763B70E1B527E566()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80EC5A94E858E47B_METHOD_2_763B70E1B527E566_OFFSET))(this);
	}

	::System::Void Method_2_76C2FF0DFF11ED80(::Class_1_A1B83C8DEA7CC5F6_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A1B83C8DEA7CC5F6_1*))((::PBYTE)hIl2Cpp + CLASS_2_80EC5A94E858E47B_METHOD_2_76C2FF0DFF11ED80_OFFSET))(this, a1);
	}

	::System::Void Method_2_DB3BAA461746FC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80EC5A94E858E47B_METHOD_2_DB3BAA461746FC0B_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80EC5A94E858E47B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_A239D18D2D7BE4DD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_80EC5A94E858E47B_METHOD_2_A239D18D2D7BE4DD_OFFSET))(this, a1);
	}

	::System::Void Method_2_5C21143D796C35F7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_80EC5A94E858E47B_METHOD_2_5C21143D796C35F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_A59F33F8CA7F3A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80EC5A94E858E47B_METHOD_2_A59F33F8CA7F3A80_OFFSET))(this);
	}
};
