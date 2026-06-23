#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1910126201EC593B;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIBABELTOWERBATTLEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16131490)
#define MOLEMOLE_UIBABELTOWERBATTLEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x161314D0)
#define MOLEMOLE_UIBABELTOWERBATTLEDIALOGPOPWINDOWCONTROLLER___C__INITBABELSKILLDESC_B__21_0_OFFSET UNITYSDK_OFFSET(0x161314E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerBattleDialogPopWindowController___c_TypeDefinitionIndex = 60003;

	class UIBabeltowerBattleDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_1910126201EC593B*, ::System::Int32>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::Class_1_1910126201EC593B*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerBattleDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x30AB0);
		}
		static ::MoleMole::UIBabeltowerBattleDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIBabeltowerBattleDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerBattleDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x30AB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERBATTLEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERBATTLEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitBabelSkillDesc_b__21_0(::Class_1_1910126201EC593B* group)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_1910126201EC593B*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERBATTLEDIALOGPOPWINDOWCONTROLLER___C__INITBABELSKILLDESC_B__21_0_OFFSET))(this, group);
		}
	};
}
