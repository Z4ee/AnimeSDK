#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_1D257F0D6462A2AD;
class MonoUITableScrollV2;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralItemTips2PopWindowController; }
namespace MoleMole { class UIWidgetController; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BD993B0FB67E00D9_METHOD_1_1B16F1AD54EA689B_1_OFFSET UNITYSDK_OFFSET(0x1588BC80)
#define CLASS_1_BD993B0FB67E00D9_METHOD_1_1B16F1AD54EA689B_OFFSET UNITYSDK_OFFSET(0x1588B8A0)
#define CLASS_1_BD993B0FB67E00D9_METHOD_1_58055608151EC90B_OFFSET UNITYSDK_OFFSET(0x1588BEF0)
#define CLASS_1_BD993B0FB67E00D9_METHOD_1_C20E2BB25B76A888_OFFSET UNITYSDK_OFFSET(0x1588BE40)
#define CLASS_1_BD993B0FB67E00D9_METHOD_1_E89191BB08251BE3_OFFSET UNITYSDK_OFFSET(0x1588BA60)
#define CLASS_1_BD993B0FB67E00D9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1588B750)
#define CLASS_1_BD993B0FB67E00D9__CTOR_OFFSET UNITYSDK_OFFSET(0x1588B600)

inline static constexpr unsigned int Class_1_BD993B0FB67E00D9_TypeDefinitionIndex = 67164;

class Class_1_BD993B0FB67E00D9 : public ::System::Object
{
public:
	::MoleMole::UIWidgetController* Field_1_1; // 0x10
	::MonoUITableScrollV2* Field_1_2; // 0x18
	::Class_1_0D6706375CDAAE8C* Field_1_4; // 0x20
	::MoleMole::UIGeneralItemTips2PopWindowController* Field_1_0; // 0x28
	::System::Collections::Generic::List_1<::Class_1_1D257F0D6462A2AD*>* Field_1_3; // 0x30

	::System::Void _ctor(::MoleMole::UIWidgetController* a1, ::MonoUITableScrollV2* a2, ::Class_1_0D6706375CDAAE8C* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*, ::MonoUITableScrollV2*, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + CLASS_1_BD993B0FB67E00D9__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::MoleMole::UIGeneralItemTips2PopWindowController* a1, ::MonoUITableScrollV2* a2, ::Class_1_0D6706375CDAAE8C* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralItemTips2PopWindowController*, ::MonoUITableScrollV2*, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + CLASS_1_BD993B0FB67E00D9__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::ScrollViewItemWidgetController* Method_1_1B16F1AD54EA689B(::System::Func_1<::MoleMole::UIControlReference*>* a1)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + CLASS_1_BD993B0FB67E00D9_METHOD_1_1B16F1AD54EA689B_OFFSET))(this, a1);
	}

	::MoleMole::ScrollViewItemWidgetController* Method_1_1B16F1AD54EA689B_1(::System::Func_1<::MoleMole::UIControlReference*>* a1)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + CLASS_1_BD993B0FB67E00D9_METHOD_1_1B16F1AD54EA689B_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C20E2BB25B76A888(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD993B0FB67E00D9_METHOD_1_C20E2BB25B76A888_OFFSET))(this, a1);
	}

	::MoleMole::UIBaseController* Method_1_E89191BB08251BE3()
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD993B0FB67E00D9_METHOD_1_E89191BB08251BE3_OFFSET))(this);
	}

	::System::Void Method_1_58055608151EC90B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD993B0FB67E00D9_METHOD_1_58055608151EC90B_OFFSET))(this, a1);
	}
};
