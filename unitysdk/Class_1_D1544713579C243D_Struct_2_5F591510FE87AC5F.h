#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D1544713579C243D_Struct_2_8083248F53A4B419.h"
#include "unitysdk/System/ValueType.h"

class Class_1_D1544713579C243D_Class_1_3380181CA002F287;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class PetPartyInteractionDefinition; }

#define CLASS_1_D1544713579C243D_STRUCT_2_5F591510FE87AC5F_GET_CONDITIONS_OFFSET UNITYSDK_OFFSET(0x94D0)
#define CLASS_1_D1544713579C243D_STRUCT_2_5F591510FE87AC5F_GET_DEFINITION_OFFSET UNITYSDK_OFFSET(0x1D30)
#define CLASS_1_D1544713579C243D_STRUCT_2_5F591510FE87AC5F_GET_PARTICIPANTS_OFFSET UNITYSDK_OFFSET(0x1D40)
#define CLASS_1_D1544713579C243D_STRUCT_2_5F591510FE87AC5F__CTOR_OFFSET UNITYSDK_OFFSET(0xB310)

inline static constexpr unsigned int Class_1_D1544713579C243D_Struct_2_5F591510FE87AC5F_TypeDefinitionIndex = 53531;

struct alignas(8) Class_1_D1544713579C243D_Struct_2_5F591510FE87AC5F
{
	::RPG::GameCore::PetPartyInteractionDefinition* _Definition_k__BackingField; // 0x10
	::Il2CppArray<::Class_1_D1544713579C243D_Struct_2_8083248F53A4B419>* _Participants_k__BackingField; // 0x18
	::RPG::PoolList_1<::Class_1_D1544713579C243D_Class_1_3380181CA002F287*>* _Conditions_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::GameCore::PetPartyInteractionDefinition* a1, ::Il2CppArray<::Class_1_D1544713579C243D_Struct_2_8083248F53A4B419>* a2, ::RPG::PoolList_1<::Class_1_D1544713579C243D_Class_1_3380181CA002F287*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetPartyInteractionDefinition*, ::Il2CppArray<::Class_1_D1544713579C243D_Struct_2_8083248F53A4B419>*, ::RPG::PoolList_1<::Class_1_D1544713579C243D_Class_1_3380181CA002F287*>*))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_STRUCT_2_5F591510FE87AC5F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::PetPartyInteractionDefinition* get_Definition()
	{
		return ((::RPG::GameCore::PetPartyInteractionDefinition*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_STRUCT_2_5F591510FE87AC5F_GET_DEFINITION_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_D1544713579C243D_Struct_2_8083248F53A4B419>* get_Participants()
	{
		return ((::Il2CppArray<::Class_1_D1544713579C243D_Struct_2_8083248F53A4B419>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_STRUCT_2_5F591510FE87AC5F_GET_PARTICIPANTS_OFFSET))(this);
	}

	::RPG::PoolList_1<::Class_1_D1544713579C243D_Class_1_3380181CA002F287*>* get_Conditions()
	{
		return ((::RPG::PoolList_1<::Class_1_D1544713579C243D_Class_1_3380181CA002F287*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_STRUCT_2_5F591510FE87AC5F_GET_CONDITIONS_OFFSET))(this);
	}
};
