#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D1544713579C243D_Struct_2_8083248F53A4B419.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class PetPartyInteractionCategoryConfig; }
namespace RPG::GameCore { class PetPartyInteractionDefinition; }

#define CLASS_1_D1544713579C243D_CLASS_1_F05279C01E1E6D74_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x15A849E0)
#define CLASS_1_D1544713579C243D_CLASS_1_F05279C01E1E6D74_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x15A849C0)
#define CLASS_1_D1544713579C243D_CLASS_1_F05279C01E1E6D74_GET_DEFINITION_OFFSET UNITYSDK_OFFSET(0x15A849D0)
#define CLASS_1_D1544713579C243D_CLASS_1_F05279C01E1E6D74__CTOR_OFFSET UNITYSDK_OFFSET(0x15A81680)

inline static constexpr unsigned int Class_1_D1544713579C243D_Class_1_F05279C01E1E6D74_TypeDefinitionIndex = 53523;

class Class_1_D1544713579C243D_Class_1_F05279C01E1E6D74 : public ::System::Object
{
public:
	::RPG::GameCore::PetPartyInteractionDefinition* _Definition_k__BackingField; // 0x10
	::RPG::GameCore::PetPartyInteractionCategoryConfig* _Category_k__BackingField; // 0x18
	::RPG::PoolList_1<::Il2CppArray<::Class_1_D1544713579C243D_Struct_2_8083248F53A4B419>*>* _Bindings_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::GameCore::PetPartyInteractionCategoryConfig* a1, ::RPG::GameCore::PetPartyInteractionDefinition* a2, ::RPG::PoolList_1<::Il2CppArray<::Class_1_D1544713579C243D_Struct_2_8083248F53A4B419>*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetPartyInteractionCategoryConfig*, ::RPG::GameCore::PetPartyInteractionDefinition*, ::RPG::PoolList_1<::Il2CppArray<::Class_1_D1544713579C243D_Struct_2_8083248F53A4B419>*>*))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_CLASS_1_F05279C01E1E6D74__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::PetPartyInteractionCategoryConfig* get_Category()
	{
		return ((::RPG::GameCore::PetPartyInteractionCategoryConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_CLASS_1_F05279C01E1E6D74_GET_CATEGORY_OFFSET))(this);
	}

	::RPG::GameCore::PetPartyInteractionDefinition* get_Definition()
	{
		return ((::RPG::GameCore::PetPartyInteractionDefinition*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_CLASS_1_F05279C01E1E6D74_GET_DEFINITION_OFFSET))(this);
	}

	::RPG::PoolList_1<::Il2CppArray<::Class_1_D1544713579C243D_Struct_2_8083248F53A4B419>*>* get_Bindings()
	{
		return ((::RPG::PoolList_1<::Il2CppArray<::Class_1_D1544713579C243D_Struct_2_8083248F53A4B419>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_CLASS_1_F05279C01E1E6D74_GET_BINDINGS_OFFSET))(this);
	}
};
