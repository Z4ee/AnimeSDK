#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_581;
class Class_2_79F6D62CE30E3F8E_105_Class_2_47F94C3827CAB3BB_3;

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS62_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB75E0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS62_1__REFRESHSPECIALPANEL_B__3_OFFSET UNITYSDK_OFFSET(0x19DB75F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass62_1_TypeDefinitionIndex = 64982;

	class UIGachaPageController___c__DisplayClass62_1 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_581* gachaUIWeaponTemplateExt; // 0x10
		::Class_2_79F6D62CE30E3F8E_105_Class_2_47F94C3827CAB3BB_3* spView; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS62_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshSpecialPanel_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS62_1__REFRESHSPECIALPANEL_B__3_OFFSET))(this);
		}
	};
}
