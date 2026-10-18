#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskContext.h"

class Class_0_16E4307DCC419505_504;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_97FEB4C9F3C63840_CLONE_OFFSET UNITYSDK_OFFSET(0x15756C60)
#define CLASS_2_97FEB4C9F3C63840_GET_OWNERABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0x15756DE0)
#define CLASS_2_97FEB4C9F3C63840_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x15756CC0)
#define CLASS_2_97FEB4C9F3C63840_GET_PARENTCONTEXT_OFFSET UNITYSDK_OFFSET(0x15756F00)
#define CLASS_2_97FEB4C9F3C63840_SET_OWNERABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0x15756E70)
#define CLASS_2_97FEB4C9F3C63840_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x15756D50)
#define CLASS_2_97FEB4C9F3C63840_SET_PARENTCONTEXT_OFFSET UNITYSDK_OFFSET(0x15756F10)
#define CLASS_2_97FEB4C9F3C63840__CTOR_OFFSET UNITYSDK_OFFSET(0x15756BD0)
#define CLASS_2_97FEB4C9F3C63840__GETSELFINSTANCE_OFFSET UNITYSDK_OFFSET(0x15756F20)

inline static constexpr unsigned int Class_2_97FEB4C9F3C63840_TypeDefinitionIndex = 54775;

class Class_2_97FEB4C9F3C63840 : public ::RPG::GameCore::TaskContext
{
public:
	::RPG::GameCore::TaskContext* _ParentContext_k__BackingField; // 0xA8

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_97FEB4C9F3C63840__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskContext* Clone()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97FEB4C9F3C63840_CLONE_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_OwnerEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97FEB4C9F3C63840_GET_OWNERENTITY_OFFSET))(this);
	}

	::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_97FEB4C9F3C63840_SET_OWNERENTITY_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_504* get_OwnerAbilityInstance()
	{
		return ((::Class_0_16E4307DCC419505_504*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97FEB4C9F3C63840_GET_OWNERABILITYINSTANCE_OFFSET))(this);
	}

	::System::Void set_OwnerAbilityInstance(::Class_0_16E4307DCC419505_504* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_504*))((::PBYTE)hIl2Cpp + CLASS_2_97FEB4C9F3C63840_SET_OWNERABILITYINSTANCE_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskContext* get_ParentContext()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97FEB4C9F3C63840_GET_PARENTCONTEXT_OFFSET))(this);
	}

	::System::Void set_ParentContext(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_97FEB4C9F3C63840_SET_PARENTCONTEXT_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskContext* _GetSelfInstance()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97FEB4C9F3C63840__GETSELFINSTANCE_OFFSET))(this);
	}
};
