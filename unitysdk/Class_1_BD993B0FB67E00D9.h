#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_40264A1FD04B14F7;
class MonoUITableScrollV2;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralItemTips2PopWindowController; }
namespace MoleMole { class UIWidgetController; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BD993B0FB67E00D9_METHOD_1_1B16F1AD54EA689B_1_OFFSET UNITYSDK_OFFSET(0xDAEFBC0)
#define CLASS_1_BD993B0FB67E00D9_METHOD_1_1B16F1AD54EA689B_OFFSET UNITYSDK_OFFSET(0xDAEF7E0)
#define CLASS_1_BD993B0FB67E00D9_METHOD_1_AAE2380A4AD9C102_OFFSET UNITYSDK_OFFSET(0xDAEFE20)
#define CLASS_1_BD993B0FB67E00D9_METHOD_1_C20E2BB25B76A888_OFFSET UNITYSDK_OFFSET(0xDAEFD80)
#define CLASS_1_BD993B0FB67E00D9_METHOD_1_E89191BB08251BE3_OFFSET UNITYSDK_OFFSET(0xDAEF9A0)
#define CLASS_1_BD993B0FB67E00D9__CTOR_1_OFFSET UNITYSDK_OFFSET(0xDAEF6A0)
#define CLASS_1_BD993B0FB67E00D9__CTOR_OFFSET UNITYSDK_OFFSET(0xDAEF560)

inline static constexpr unsigned int Class_1_BD993B0FB67E00D9_TypeDefinitionIndex = 80188;

class Class_1_BD993B0FB67E00D9 : public ::System::Object
{
public:
	::MonoUITableScrollV2* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_1_40264A1FD04B14F7*>* Field_1_3; // 0x18
	::MoleMole::UIWidgetController* Field_1_1; // 0x20
	::MoleMole::UIGeneralItemTips2PopWindowController* Field_1_0; // 0x28
	::Class_1_0D6706375CDAAE8C* Field_1_4; // 0x30

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

	::System::Void Method_1_AAE2380A4AD9C102(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD993B0FB67E00D9_METHOD_1_AAE2380A4AD9C102_OFFSET))(this, a1);
	}

	::MoleMole::UIBaseController* Method_1_E89191BB08251BE3()
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD993B0FB67E00D9_METHOD_1_E89191BB08251BE3_OFFSET))(this);
	}
};
