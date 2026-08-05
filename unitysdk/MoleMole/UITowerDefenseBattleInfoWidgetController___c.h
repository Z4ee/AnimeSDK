#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UITOWERDEFENSEBATTLEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x140D6290)
#define MOLEMOLE_UITOWERDEFENSEBATTLEINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x140D62D0)
#define MOLEMOLE_UITOWERDEFENSEBATTLEINFOWIDGETCONTROLLER___C__GETBUFF_G__GETTEXTMAPTEXT_5_1_OFFSET UNITYSDK_OFFSET(0x140D62E0)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseBattleInfoWidgetController___c_TypeDefinitionIndex = 70597;

	class UITowerDefenseBattleInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UITowerDefenseBattleInfoWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UITowerDefenseBattleInfoWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UITowerDefenseBattleInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4AF20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEBATTLEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEBATTLEINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _GetBuff_g__GetTextMapText_5_1(::System::String* desc)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEBATTLEINFOWIDGETCONTROLLER___C__GETBUFF_G__GETTEXTMAPTEXT_5_1_OFFSET))(this, desc);
		}
	};
}
