#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1544713579C243D_Class_1_06B08A707E2FEE2D;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class PetPartyInteractionCategoryConfig; }
namespace RPG::GameCore { class PetPartySingleCombinationConfig; }
namespace RPG::GameCore { class PetPartySingleCombinationStartPattern; }
namespace System { class String; }

#define CLASS_1_D1544713579C243D_CLASS_1_BC87DD69483B5107_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x15A84A90)
#define CLASS_1_D1544713579C243D_CLASS_1_BC87DD69483B5107_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15A84AA0)
#define CLASS_1_D1544713579C243D_CLASS_1_BC87DD69483B5107_GET_MEMBERGROUPS_OFFSET UNITYSDK_OFFSET(0x15A84AD0)
#define CLASS_1_D1544713579C243D_CLASS_1_BC87DD69483B5107_GET_SELECTIONKEY_OFFSET UNITYSDK_OFFSET(0x15A84AB0)
#define CLASS_1_D1544713579C243D_CLASS_1_BC87DD69483B5107_GET_STARTPATTERNS_OFFSET UNITYSDK_OFFSET(0x15A84AC0)
#define CLASS_1_D1544713579C243D_CLASS_1_BC87DD69483B5107__CTOR_OFFSET UNITYSDK_OFFSET(0x15A830A0)

inline static constexpr unsigned int Class_1_D1544713579C243D_Class_1_BC87DD69483B5107_TypeDefinitionIndex = 53527;

class Class_1_D1544713579C243D_Class_1_BC87DD69483B5107 : public ::System::Object
{
public:
	::RPG::PoolList_1<::RPG::GameCore::PetPartySingleCombinationStartPattern*>* _StartPatterns_k__BackingField; // 0x10
	::RPG::GameCore::PetPartyInteractionCategoryConfig* _Category_k__BackingField; // 0x18
	::RPG::PoolList_1<::Class_1_D1544713579C243D_Class_1_06B08A707E2FEE2D*>* _MemberGroups_k__BackingField; // 0x20
	::System::String* _SelectionKey_k__BackingField; // 0x28
	::RPG::GameCore::PetPartySingleCombinationConfig* _Config_k__BackingField; // 0x30

	::System::Void _ctor(::RPG::GameCore::PetPartyInteractionCategoryConfig* a1, ::RPG::GameCore::PetPartySingleCombinationConfig* a2, ::System::String* a3, ::RPG::PoolList_1<::RPG::GameCore::PetPartySingleCombinationStartPattern*>* a4, ::RPG::PoolList_1<::Class_1_D1544713579C243D_Class_1_06B08A707E2FEE2D*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetPartyInteractionCategoryConfig*, ::RPG::GameCore::PetPartySingleCombinationConfig*, ::System::String*, ::RPG::PoolList_1<::RPG::GameCore::PetPartySingleCombinationStartPattern*>*, ::RPG::PoolList_1<::Class_1_D1544713579C243D_Class_1_06B08A707E2FEE2D*>*))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_CLASS_1_BC87DD69483B5107__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::PetPartyInteractionCategoryConfig* get_Category()
	{
		return ((::RPG::GameCore::PetPartyInteractionCategoryConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_CLASS_1_BC87DD69483B5107_GET_CATEGORY_OFFSET))(this);
	}

	::RPG::GameCore::PetPartySingleCombinationConfig* get_Config()
	{
		return ((::RPG::GameCore::PetPartySingleCombinationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_CLASS_1_BC87DD69483B5107_GET_CONFIG_OFFSET))(this);
	}

	::System::String* get_SelectionKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_CLASS_1_BC87DD69483B5107_GET_SELECTIONKEY_OFFSET))(this);
	}

	::RPG::PoolList_1<::RPG::GameCore::PetPartySingleCombinationStartPattern*>* get_StartPatterns()
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::PetPartySingleCombinationStartPattern*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_CLASS_1_BC87DD69483B5107_GET_STARTPATTERNS_OFFSET))(this);
	}

	::RPG::PoolList_1<::Class_1_D1544713579C243D_Class_1_06B08A707E2FEE2D*>* get_MemberGroups()
	{
		return ((::RPG::PoolList_1<::Class_1_D1544713579C243D_Class_1_06B08A707E2FEE2D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_CLASS_1_BC87DD69483B5107_GET_MEMBERGROUPS_OFFSET))(this);
	}
};
