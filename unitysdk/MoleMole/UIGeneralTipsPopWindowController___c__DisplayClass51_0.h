#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19FCBC90)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS51_0__INITOPTIONGIFT_B__0_OFFSET UNITYSDK_OFFSET(0x19FCBCA0)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS51_0__INITOPTIONGIFT_B__1_OFFSET UNITYSDK_OFFSET(0x19FCBD10)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS51_0__INITOPTIONGIFT_B__2_OFFSET UNITYSDK_OFFSET(0x19FCBDB0)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS51_0__INITOPTIONGIFT_B__3_OFFSET UNITYSDK_OFFSET(0x19FCC080)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS51_0__INITOPTIONGIFT_B__4_OFFSET UNITYSDK_OFFSET(0x19FCC330)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS51_0__INITOPTIONGIFT_B__5_OFFSET UNITYSDK_OFFSET(0x19FCC340)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS51_0__INITOPTIONGIFT_B__6_OFFSET UNITYSDK_OFFSET(0x19FCC5F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsPopWindowController___c__DisplayClass51_0_TypeDefinitionIndex = 40468;

	class UIGeneralTipsPopWindowController___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::System::Action_2<::System::Int32, ::System::Int32>* onSelectedCallback; // 0x10
		::System::Predicate_1<::Class_1_0D6706375CDAAE8C*>* __9__6; // 0x18
		::System::Func_2<::System::Int32, ::System::Boolean>* ownItemFunc; // 0x20
		::MoleMole::UIGeneralTipsPopWindowController* __4__this; // 0x28
		::System::Func_2<::System::Int32, ::System::Boolean>* showInPackageTipsCallback; // 0x30
		::System::Action* startClick; // 0x38
		::System::Boolean sendReq; // 0x40
		::System::Int32 itemid; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitOptionGift_b__0(::System::Int32 itemID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS51_0__INITOPTIONGIFT_B__0_OFFSET))(this, itemID);
		}

		::System::Int32 _InitOptionGift_b__1(::Class_1_0D6706375CDAAE8C* itemA, ::Class_1_0D6706375CDAAE8C* itemB)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS51_0__INITOPTIONGIFT_B__1_OFFSET))(this, itemA, itemB);
		}

		::MoleMole::ScrollViewItemWidgetController* _InitOptionGift_b__2(::Struct_2_575273D27F02957E binderInfo)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Struct_2_575273D27F02957E))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS51_0__INITOPTIONGIFT_B__2_OFFSET))(this, binderInfo);
		}

		::System::Void _InitOptionGift_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS51_0__INITOPTIONGIFT_B__3_OFFSET))(this);
		}

		::System::Void _InitOptionGift_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS51_0__INITOPTIONGIFT_B__4_OFFSET))(this);
		}

		::System::Void _InitOptionGift_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS51_0__INITOPTIONGIFT_B__5_OFFSET))(this);
		}

		::System::Boolean _InitOptionGift_b__6(::Class_1_0D6706375CDAAE8C* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS51_0__INITOPTIONGIFT_B__6_OFFSET))(this, x);
		}
	};
}
