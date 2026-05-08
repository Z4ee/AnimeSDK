#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UITRIDICEORACLECARDITEMCOLLECTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE84F730)
#define MOLEMOLE_UITRIDICEORACLECARDITEMCOLLECTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE84F770)
#define MOLEMOLE_UITRIDICEORACLECARDITEMCOLLECTPAGECONTROLLER___C__ONMAINBTNCLICKED_B__18_0_OFFSET UNITYSDK_OFFSET(0xE84F8B0)
#define MOLEMOLE_UITRIDICEORACLECARDITEMCOLLECTPAGECONTROLLER___C__SETREWARDICON_B__15_0_OFFSET UNITYSDK_OFFSET(0xE84F780)

namespace MoleMole
{
	inline static constexpr unsigned int UITriDiceOracleCardItemCollectPageController___c_TypeDefinitionIndex = 64169;

	class UITriDiceOracleCardItemCollectPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__18_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UITriDiceOracleCardItemCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x3CF50);
		}
		static ::MoleMole::UITriDiceOracleCardItemCollectPageController___c** StaticGet___9()
		{
			return (::MoleMole::UITriDiceOracleCardItemCollectPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UITriDiceOracleCardItemCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x3CF58);
		}
		static ::System::Action** StaticGet___9__15_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UITriDiceOracleCardItemCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x3CF60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLECARDITEMCOLLECTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLECARDITEMCOLLECTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _SetRewardIcon_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLECARDITEMCOLLECTPAGECONTROLLER___C__SETREWARDICON_B__15_0_OFFSET))(this);
		}

		::System::Void _OnMainBtnClicked_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLECARDITEMCOLLECTPAGECONTROLLER___C__ONMAINBTNCLICKED_B__18_0_OFFSET))(this);
		}
	};
}
