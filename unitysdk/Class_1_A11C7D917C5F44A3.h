#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F1C4ECC5EFDCA1EF_2.h"
#include "unitysdk/System/Object.h"

class Class_1_FE13E00961E3948E;
namespace RPG::AvatarSystem { class AvatarServant; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A11C7D917C5F44A3_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x152CDB80)
#define CLASS_1_A11C7D917C5F44A3_METHOD_1_F657E026053C0B4A_OFFSET UNITYSDK_OFFSET(0x152CDBA0)
#define CLASS_1_A11C7D917C5F44A3_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0x152CDB90)
#define CLASS_1_A11C7D917C5F44A3__CTOR_OFFSET UNITYSDK_OFFSET(0x152CDCF0)

inline static constexpr unsigned int Class_1_A11C7D917C5F44A3_TypeDefinitionIndex = 62810;

class Class_1_A11C7D917C5F44A3 : public ::System::Object
{
public:
	::Class_1_FE13E00961E3948E* _Factory_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_F1C4ECC5EFDCA1EF_2, ::RPG::AvatarSystem::AvatarServant*>* PMOBKALDENA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A11C7D917C5F44A3__CTOR_OFFSET))(this);
	}

	::Class_1_FE13E00961E3948E* get_Factory()
	{
		return ((::Class_1_FE13E00961E3948E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A11C7D917C5F44A3_GET_FACTORY_OFFSET))(this);
	}

	::System::Void set_Factory(::Class_1_FE13E00961E3948E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FE13E00961E3948E*))((::PBYTE)hIl2Cpp + CLASS_1_A11C7D917C5F44A3_SET_FACTORY_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::AvatarServant* Method_1_F657E026053C0B4A(::Struct_2_F1C4ECC5EFDCA1EF_2& a1)
	{
		return ((::RPG::AvatarSystem::AvatarServant*(*)(::PVOID, ::Struct_2_F1C4ECC5EFDCA1EF_2&))((::PBYTE)hIl2Cpp + CLASS_1_A11C7D917C5F44A3_METHOD_1_F657E026053C0B4A_OFFSET))(this, a1);
	}
};
