#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_303;
class Class_3_8F63A57C1693E5AC_10;
namespace MoleMole { class UIRidusGotBooChangeClothPageController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__DISPLAYCLASS82_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1821DBE0)
#define MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__DISPLAYCLASS82_0__TRYSAVEFASHIONPART_B__0_OFFSET UNITYSDK_OFFSET(0x1821DBF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooChangeClothPageController___c__DisplayClass82_0_TypeDefinitionIndex = 70899;

	class UIRidusGotBooChangeClothPageController___c__DisplayClass82_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* cb; // 0x10
		::MoleMole::UIRidusGotBooChangeClothPageController* __4__this; // 0x18
		::System::Boolean showSucceedTips; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__DISPLAYCLASS82_0__CTOR_OFFSET))(this);
		}

		::System::Void _TrySaveFashionPart_b__0(::Class_3_025FF4981524A424_303* rsp, ::Class_3_8F63A57C1693E5AC_10* req)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_303*, ::Class_3_8F63A57C1693E5AC_10*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__DISPLAYCLASS82_0__TRYSAVEFASHIONPART_B__0_OFFSET))(this, rsp, req);
		}
	};
}
