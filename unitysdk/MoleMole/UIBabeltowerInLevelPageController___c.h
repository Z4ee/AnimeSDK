#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBabeltowerTrickScoreRowWidgetController; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15633590)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156335D0)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER___C__REFRESHTRICKSCORE_B__13_2_OFFSET UNITYSDK_OFFSET(0x156335E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerInLevelPageController___c_TypeDefinitionIndex = 54563;

	class UIBabeltowerInLevelPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MoleMole::UIBabeltowerTrickScoreRowWidgetController*, ::UnityEngine::GameObject*>** StaticGet___9__13_2()
		{
			return (::System::Func_2<::MoleMole::UIBabeltowerTrickScoreRowWidgetController*, ::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerInLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x32640);
		}
		static ::MoleMole::UIBabeltowerInLevelPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBabeltowerInLevelPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerInLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x32648);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* _RefreshTrickScore_b__13_2(::MoleMole::UIBabeltowerTrickScoreRowWidgetController* item)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::MoleMole::UIBabeltowerTrickScoreRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER___C__REFRESHTRICKSCORE_B__13_2_OFFSET))(this, item);
		}
	};
}
