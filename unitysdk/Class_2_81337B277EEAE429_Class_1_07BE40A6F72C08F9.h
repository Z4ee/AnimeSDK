#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_81337B277EEAE429_CLASS_1_07BE40A6F72C08F9_GET_OWNERREF_OFFSET UNITYSDK_OFFSET(0x142D0720)
#define CLASS_2_81337B277EEAE429_CLASS_1_07BE40A6F72C08F9_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x142D0740)
#define CLASS_2_81337B277EEAE429_CLASS_1_07BE40A6F72C08F9_SET_OWNERREF_OFFSET UNITYSDK_OFFSET(0x142D0730)
#define CLASS_2_81337B277EEAE429_CLASS_1_07BE40A6F72C08F9_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x142D0750)
#define CLASS_2_81337B277EEAE429_CLASS_1_07BE40A6F72C08F9__CTOR_OFFSET UNITYSDK_OFFSET(0x142D01F0)

inline static constexpr unsigned int Class_2_81337B277EEAE429_Class_1_07BE40A6F72C08F9_TypeDefinitionIndex = 53651;

class Class_2_81337B277EEAE429_Class_1_07BE40A6F72C08F9 : public ::System::Object
{
public:
	::System::String* _UniqueName_k__BackingField; // 0x10
	::RPG::GameCore::GameEntity* _OwnerRef_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_CLASS_1_07BE40A6F72C08F9__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_OwnerRef()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_CLASS_1_07BE40A6F72C08F9_GET_OWNERREF_OFFSET))(this);
	}

	::System::Void set_OwnerRef(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_CLASS_1_07BE40A6F72C08F9_SET_OWNERREF_OFFSET))(this, a1);
	}

	::System::String* get_UniqueName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_CLASS_1_07BE40A6F72C08F9_GET_UNIQUENAME_OFFSET))(this);
	}

	::System::Void set_UniqueName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_CLASS_1_07BE40A6F72C08F9_SET_UNIQUENAME_OFFSET))(this, a1);
	}
};
