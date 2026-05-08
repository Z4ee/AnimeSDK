#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_12BDE7300F0E061C;
class Class_2_208CC9941471731A_355;
namespace MoleMole { class UIRoleEquipRecommendPopWindowController; }
namespace MoleMole { template <typename T> class UIRoleEquipRecommendPopContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xEB98ED0)
#define MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__REFRESHRANDPROPERTYFILTERITEMS_G__ISCANSELECT_0_OFFSET UNITYSDK_OFFSET(0xEB98EE0)
#define MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__REFRESHRANDPROPERTYFILTERITEMS_G__ONPROPERTYROWCLICK_1_OFFSET UNITYSDK_OFFSET(0xEB993D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipRecommendPopWindowController___c__DisplayClass17_0_TypeDefinitionIndex = 73793;

	class UIRoleEquipRecommendPopWindowController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_355* autoEquipConfig; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* propertyIdList; // 0x18
		::MoleMole::UIRoleEquipRecommendPopWindowController* __4__this; // 0x20
		::MoleMole::UIRoleEquipRecommendPopContext_1<::Class_2_12BDE7300F0E061C*>* dialogContext; // 0x28
		::System::Int32 avatarID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshRandPropertyFilterItems_g__IsCanSelect_0(::System::Int32 PropertyId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__REFRESHRANDPROPERTYFILTERITEMS_G__ISCANSELECT_0_OFFSET))(this, PropertyId);
		}

		::System::Void _RefreshRandPropertyFilterItems_g__OnPropertyRowClick_1(::System::Int32 index, ::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__REFRESHRANDPROPERTYFILTERITEMS_G__ONPROPERTYROWCLICK_1_OFFSET))(this, index, isSelect);
		}
	};
}
