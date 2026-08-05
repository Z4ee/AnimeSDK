#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_888734130AA1067E;
class Class_3_4666E61F66433B1E_4;
namespace MoleMole { class UIGachaPageController; }
namespace System { class String; }

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS72_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19FA72C0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS72_0__REFRESHSPECIALPANEL_B__2_OFFSET UNITYSDK_OFFSET(0x19FA72D0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS72_0__REFRESHSPECIALPANEL_G__SHOULDWEAPONSHOWSP_0_OFFSET UNITYSDK_OFFSET(0x19FA7A80)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS72_0__REFRESHSPECIALPANEL_G__TRYGETWEAPONGACHADEMOVIDEOPATH_1_OFFSET UNITYSDK_OFFSET(0x19FA7880)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass72_0_TypeDefinitionIndex = 84839;

	class UIGachaPageController___c__DisplayClass72_0 : public ::System::Object
	{
	public:
		::Class_2_888734130AA1067E* weaponConfig; // 0x10
		::Class_3_4666E61F66433B1E_4* gacha; // 0x18
		::MoleMole::UIGachaPageController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS72_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshSpecialPanel_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS72_0__REFRESHSPECIALPANEL_B__2_OFFSET))(this);
		}

		::System::Boolean _RefreshSpecialPanel_g__ShouldWeaponShowSP_0(::Class_2_888734130AA1067E*& template_)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_888734130AA1067E*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS72_0__REFRESHSPECIALPANEL_G__SHOULDWEAPONSHOWSP_0_OFFSET))(this, template_);
		}

		::System::Boolean _RefreshSpecialPanel_g__TryGetWeaponGachaDemoVideoPath_1(::System::Int32 gachaID, ::System::String*& videoPath)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS72_0__REFRESHSPECIALPANEL_G__TRYGETWEAPONGACHADEMOVIDEOPATH_1_OFFSET))(this, gachaID, videoPath);
		}
	};
}
