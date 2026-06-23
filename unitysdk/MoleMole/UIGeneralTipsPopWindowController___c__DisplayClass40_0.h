#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x177803B0)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS40_0__INITSELECTITEMLIST_B__0_OFFSET UNITYSDK_OFFSET(0x177803C0)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS40_0__INITSELECTITEMLIST_B__1_OFFSET UNITYSDK_OFFSET(0x17780690)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS40_0__INITSELECTITEMLIST_B__2_OFFSET UNITYSDK_OFFSET(0x17780940)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS40_0__INITSELECTITEMLIST_B__3_OFFSET UNITYSDK_OFFSET(0x17780AA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsPopWindowController___c__DisplayClass40_0_TypeDefinitionIndex = 63528;

	class UIGeneralTipsPopWindowController___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::System::Action_2<::System::Int32, ::System::Int32>* onSelectedCallback; // 0x10
		::MoleMole::UIGeneralTipsPopWindowController* __4__this; // 0x18
		::System::Predicate_1<::Class_1_0D6706375CDAAE8C*>* __9__3; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _InitSelectItemList_b__0(::Struct_2_575273D27F02957E binderInfo)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Struct_2_575273D27F02957E))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS40_0__INITSELECTITEMLIST_B__0_OFFSET))(this, binderInfo);
		}

		::System::Void _InitSelectItemList_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS40_0__INITSELECTITEMLIST_B__1_OFFSET))(this);
		}

		::System::Void _InitSelectItemList_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS40_0__INITSELECTITEMLIST_B__2_OFFSET))(this);
		}

		::System::Boolean _InitSelectItemList_b__3(::Class_1_0D6706375CDAAE8C* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS40_0__INITSELECTITEMLIST_B__3_OFFSET))(this, x);
		}
	};
}
