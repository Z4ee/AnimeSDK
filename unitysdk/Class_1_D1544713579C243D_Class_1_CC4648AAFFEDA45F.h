#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D1544713579C243D_Struct_2_8083248F53A4B419.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PetPartyInteractionDefinition; }

#define CLASS_1_D1544713579C243D_CLASS_1_CC4648AAFFEDA45F_GET_DEFINITION_OFFSET UNITYSDK_OFFSET(0x15A84A50)
#define CLASS_1_D1544713579C243D_CLASS_1_CC4648AAFFEDA45F_GET_PARTICIPANTS_OFFSET UNITYSDK_OFFSET(0x15A84A60)
#define CLASS_1_D1544713579C243D_CLASS_1_CC4648AAFFEDA45F__CTOR_OFFSET UNITYSDK_OFFSET(0x15A82D40)

inline static constexpr unsigned int Class_1_D1544713579C243D_Class_1_CC4648AAFFEDA45F_TypeDefinitionIndex = 53524;

class Class_1_D1544713579C243D_Class_1_CC4648AAFFEDA45F : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_D1544713579C243D_Struct_2_8083248F53A4B419>* _Participants_k__BackingField; // 0x10
	::RPG::GameCore::PetPartyInteractionDefinition* _Definition_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::GameCore::PetPartyInteractionDefinition* a1, ::Il2CppArray<::Class_1_D1544713579C243D_Struct_2_8083248F53A4B419>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetPartyInteractionDefinition*, ::Il2CppArray<::Class_1_D1544713579C243D_Struct_2_8083248F53A4B419>*))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_CLASS_1_CC4648AAFFEDA45F__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::PetPartyInteractionDefinition* get_Definition()
	{
		return ((::RPG::GameCore::PetPartyInteractionDefinition*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_CLASS_1_CC4648AAFFEDA45F_GET_DEFINITION_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_D1544713579C243D_Struct_2_8083248F53A4B419>* get_Participants()
	{
		return ((::Il2CppArray<::Class_1_D1544713579C243D_Struct_2_8083248F53A4B419>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_CLASS_1_CC4648AAFFEDA45F_GET_PARTICIPANTS_OFFSET))(this);
	}
};
