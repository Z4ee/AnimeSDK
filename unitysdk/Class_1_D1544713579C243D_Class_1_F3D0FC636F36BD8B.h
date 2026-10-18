#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1544713579C243D_Class_1_073D738E471CC5EB;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class PetPartyInteractionDefinition; }

#define CLASS_1_D1544713579C243D_CLASS_1_F3D0FC636F36BD8B_GET_DEFINITION_OFFSET UNITYSDK_OFFSET(0x15A84A70)
#define CLASS_1_D1544713579C243D_CLASS_1_F3D0FC636F36BD8B_GET_MEMBERGROUPS_OFFSET UNITYSDK_OFFSET(0x15A84A80)
#define CLASS_1_D1544713579C243D_CLASS_1_F3D0FC636F36BD8B__CTOR_OFFSET UNITYSDK_OFFSET(0x15A83570)

inline static constexpr unsigned int Class_1_D1544713579C243D_Class_1_F3D0FC636F36BD8B_TypeDefinitionIndex = 53529;

class Class_1_D1544713579C243D_Class_1_F3D0FC636F36BD8B : public ::System::Object
{
public:
	::RPG::PoolList_1<::Class_1_D1544713579C243D_Class_1_073D738E471CC5EB*>* _MemberGroups_k__BackingField; // 0x10
	::RPG::GameCore::PetPartyInteractionDefinition* _Definition_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::GameCore::PetPartyInteractionDefinition* a1, ::RPG::PoolList_1<::Class_1_D1544713579C243D_Class_1_073D738E471CC5EB*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetPartyInteractionDefinition*, ::RPG::PoolList_1<::Class_1_D1544713579C243D_Class_1_073D738E471CC5EB*>*))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_CLASS_1_F3D0FC636F36BD8B__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::PetPartyInteractionDefinition* get_Definition()
	{
		return ((::RPG::GameCore::PetPartyInteractionDefinition*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_CLASS_1_F3D0FC636F36BD8B_GET_DEFINITION_OFFSET))(this);
	}

	::RPG::PoolList_1<::Class_1_D1544713579C243D_Class_1_073D738E471CC5EB*>* get_MemberGroups()
	{
		return ((::RPG::PoolList_1<::Class_1_D1544713579C243D_Class_1_073D738E471CC5EB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_CLASS_1_F3D0FC636F36BD8B_GET_MEMBERGROUPS_OFFSET))(this);
	}
};
