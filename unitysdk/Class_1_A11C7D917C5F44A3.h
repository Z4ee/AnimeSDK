#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F1C4ECC5EFDCA1EF_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7FD0E93F1C74485C;
namespace RPG::AvatarSystem { class AvatarServant; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A11C7D917C5F44A3_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x17E93550)
#define CLASS_1_A11C7D917C5F44A3_METHOD_1_F657E026053C0B4A_OFFSET UNITYSDK_OFFSET(0x17E93570)
#define CLASS_1_A11C7D917C5F44A3_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0x17E93560)
#define CLASS_1_A11C7D917C5F44A3__CTOR_OFFSET UNITYSDK_OFFSET(0x17E936C0)

inline static constexpr unsigned int Class_1_A11C7D917C5F44A3_TypeDefinitionIndex = 59964;

class Class_1_A11C7D917C5F44A3 : public ::System::Object
{
public:
	::Class_1_7FD0E93F1C74485C* _Factory_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_F1C4ECC5EFDCA1EF_2, ::RPG::AvatarSystem::AvatarServant*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A11C7D917C5F44A3__CTOR_OFFSET))(this);
	}

	::Class_1_7FD0E93F1C74485C* get_Factory()
	{
		return ((::Class_1_7FD0E93F1C74485C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A11C7D917C5F44A3_GET_FACTORY_OFFSET))(this);
	}

	::System::Void set_Factory(::Class_1_7FD0E93F1C74485C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FD0E93F1C74485C*))((::PBYTE)hIl2Cpp + CLASS_1_A11C7D917C5F44A3_SET_FACTORY_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::AvatarServant* Method_1_F657E026053C0B4A(::Struct_2_F1C4ECC5EFDCA1EF_2& a1)
	{
		return ((::RPG::AvatarSystem::AvatarServant*(*)(::PVOID, ::Struct_2_F1C4ECC5EFDCA1EF_2&))((::PBYTE)hIl2Cpp + CLASS_1_A11C7D917C5F44A3_METHOD_1_F657E026053C0B4A_OFFSET))(this, a1);
	}
};
