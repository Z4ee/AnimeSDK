#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIANTIQUECOLLECTTASKPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x174442B0)
#define MOLEMOLE_UIANTIQUECOLLECTTASKPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x174442F0)
#define MOLEMOLE_UIANTIQUECOLLECTTASKPAGECONTROLLER___C__ONGETALLREWARDBUTTONBYGROUPID_B__18_0_OFFSET UNITYSDK_OFFSET(0x17444300)

namespace MoleMole
{
	inline static constexpr unsigned int UIAntiqueCollectTaskPageController___c_TypeDefinitionIndex = 74607;

	class UIAntiqueCollectTaskPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAntiqueCollectTaskPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAntiqueCollectTaskPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAntiqueCollectTaskPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C7F0);
		}
		static ::System::Action** StaticGet___9__18_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAntiqueCollectTaskPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C7F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUECOLLECTTASKPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUECOLLECTTASKPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnGetAllRewardButtonByGroupId_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUECOLLECTTASKPAGECONTROLLER___C__ONGETALLREWARDBUTTONBYGROUPID_B__18_0_OFFSET))(this);
		}
	};
}
