#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EFF730)
#define MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13EFF770)
#define MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER___C__ONPOSTREFRESHVIEW_B__4_2_OFFSET UNITYSDK_OFFSET(0x13EFF780)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerPage01Controller___c_TypeDefinitionIndex = 38043;

	class UIBabeltowerPage01Controller___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__4_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerPage01Controller___c_TypeDefinitionIndex)->GetStaticField(0x2EB90);
		}
		static ::MoleMole::UIBabeltowerPage01Controller___c** StaticGet___9()
		{
			return (::MoleMole::UIBabeltowerPage01Controller___c**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerPage01Controller___c_TypeDefinitionIndex)->GetStaticField(0x2EB98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnPostRefreshView_b__4_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE01CONTROLLER___C__ONPOSTREFRESHVIEW_B__4_2_OFFSET))(this);
		}
	};
}
