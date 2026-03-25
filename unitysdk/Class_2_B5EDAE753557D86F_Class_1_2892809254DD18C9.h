#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_B5EDAE753557D86F_CLASS_1_2892809254DD18C9_GET_OWNERREF_OFFSET UNITYSDK_OFFSET(0x89538B0)
#define CLASS_2_B5EDAE753557D86F_CLASS_1_2892809254DD18C9_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x89538D0)
#define CLASS_2_B5EDAE753557D86F_CLASS_1_2892809254DD18C9_SET_OWNERREF_OFFSET UNITYSDK_OFFSET(0x89538C0)
#define CLASS_2_B5EDAE753557D86F_CLASS_1_2892809254DD18C9_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x89538E0)
#define CLASS_2_B5EDAE753557D86F_CLASS_1_2892809254DD18C9__CTOR_OFFSET UNITYSDK_OFFSET(0x8951830)

inline static constexpr unsigned int Class_2_B5EDAE753557D86F_Class_1_2892809254DD18C9_TypeDefinitionIndex = 46276;

class Class_2_B5EDAE753557D86F_Class_1_2892809254DD18C9 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* _OwnerRef_k__BackingField; // 0x10
	::System::String* _UniqueName_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F_CLASS_1_2892809254DD18C9__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_OwnerRef()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F_CLASS_1_2892809254DD18C9_GET_OWNERREF_OFFSET))(this);
	}

	::System::Void set_OwnerRef(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F_CLASS_1_2892809254DD18C9_SET_OWNERREF_OFFSET))(this, value);
	}

	::System::String* get_UniqueName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F_CLASS_1_2892809254DD18C9_GET_UNIQUENAME_OFFSET))(this);
	}

	::System::Void set_UniqueName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F_CLASS_1_2892809254DD18C9_SET_UNIQUENAME_OFFSET))(this, value);
	}
};
