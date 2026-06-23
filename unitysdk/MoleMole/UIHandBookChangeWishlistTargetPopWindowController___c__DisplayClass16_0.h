#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHandBookChangeWishlistTargetPopWindowController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHANDBOOKCHANGEWISHLISTTARGETPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1696F180)
#define MOLEMOLE_UIHANDBOOKCHANGEWISHLISTTARGETPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__ONCLICKSETTARGETBTN_B__0_OFFSET UNITYSDK_OFFSET(0x1696F380)
#define MOLEMOLE_UIHANDBOOKCHANGEWISHLISTTARGETPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__ONCLICKSETTARGETBTN_B__1_OFFSET UNITYSDK_OFFSET(0x1696F190)
#define MOLEMOLE_UIHANDBOOKCHANGEWISHLISTTARGETPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__ONCLICKSETTARGETBTN_B__2_OFFSET UNITYSDK_OFFSET(0x1696F2D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookChangeWishlistTargetPopWindowController___c__DisplayClass16_0_TypeDefinitionIndex = 73734;

	class UIHandBookChangeWishlistTargetPopWindowController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHandBookChangeWishlistTargetPopWindowController* __4__this; // 0x10
		::System::Action_1<::System::Int32>* __9__2; // 0x18
		::System::Int32 avatarId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCHANGEWISHLISTTARGETPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickSetTargetBtn_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCHANGEWISHLISTTARGETPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__ONCLICKSETTARGETBTN_B__1_OFFSET))(this);
		}

		::System::Void _OnClickSetTargetBtn_b__2(::System::Int32 ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCHANGEWISHLISTTARGETPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__ONCLICKSETTARGETBTN_B__2_OFFSET))(this, ret);
		}

		::System::Void _OnClickSetTargetBtn_b__0(::System::Int32 ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCHANGEWISHLISTTARGETPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__ONCLICKSETTARGETBTN_B__0_OFFSET))(this, ret);
		}
	};
}
