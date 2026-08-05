#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_30409CAE069D6997.h"
#include "unitysdk/System/Object.h"

class Class_3_4666E61F66433B1E_4;
namespace MoleMole { class UIGachaBtnWidgetController; }
namespace MoleMole { class UIGachaPageController; }

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18ACA090)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS29_0__REFRESHGACHATABS_G__CREATETABBTN_0_OFFSET UNITYSDK_OFFSET(0x18ACA0A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass29_0_TypeDefinitionIndex = 84823;

	class UIGachaPageController___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGachaBtnWidgetController* selectedTab; // 0x10
		::MoleMole::UIGachaPageController* __4__this; // 0x18
		::Class_3_4666E61F66433B1E_4* selectedGacha; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshGachaTabs_g__CreateTabBtn_0(::System::Int32 tabIdx, ::Enum_3_30409CAE069D6997 gachaType, ::Il2CppArray<::Class_3_4666E61F66433B1E_4*>* gachas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_30409CAE069D6997, ::Il2CppArray<::Class_3_4666E61F66433B1E_4*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS29_0__REFRESHGACHATABS_G__CREATETABBTN_0_OFFSET))(this, tabIdx, gachaType, gachas);
		}
	};
}
