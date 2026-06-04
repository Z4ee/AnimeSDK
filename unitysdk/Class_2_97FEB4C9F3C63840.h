#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskContext.h"

class Class_0_16E4307DCC419505_358;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_97FEB4C9F3C63840_CLONE_OFFSET UNITYSDK_OFFSET(0x136E0360)
#define CLASS_2_97FEB4C9F3C63840_GET_OWNERABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0x136E0480)
#define CLASS_2_97FEB4C9F3C63840_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x136E03C0)
#define CLASS_2_97FEB4C9F3C63840_GET_PARENTCONTEXT_OFFSET UNITYSDK_OFFSET(0x136E0540)
#define CLASS_2_97FEB4C9F3C63840_SET_OWNERABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0x136E04B0)
#define CLASS_2_97FEB4C9F3C63840_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x136E03F0)
#define CLASS_2_97FEB4C9F3C63840_SET_PARENTCONTEXT_OFFSET UNITYSDK_OFFSET(0x136E0550)
#define CLASS_2_97FEB4C9F3C63840__CTOR_OFFSET UNITYSDK_OFFSET(0x136E02D0)
#define CLASS_2_97FEB4C9F3C63840__GETSELFINSTANCE_OFFSET UNITYSDK_OFFSET(0x136E0560)
#define CLASS_2_97FEB4C9F3C63840___IFIXBASEPROXY_CLONE_OFFSET UNITYSDK_OFFSET(0x136E05E0)
#define CLASS_2_97FEB4C9F3C63840___IFIXBASEPROXY_SET_OWNERABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0x136E06D0)
#define CLASS_2_97FEB4C9F3C63840___IFIXBASEPROXY_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x136E0670)
#define CLASS_2_97FEB4C9F3C63840___IFIXBASEPROXY__GETSELFINSTANCE_OFFSET UNITYSDK_OFFSET(0x136E06E0)

inline static constexpr unsigned int Class_2_97FEB4C9F3C63840_TypeDefinitionIndex = 51203;

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

	::Class_0_16E4307DCC419505_358* get_OwnerAbilityInstance()
	{
		return ((::Class_0_16E4307DCC419505_358*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97FEB4C9F3C63840_GET_OWNERABILITYINSTANCE_OFFSET))(this);
	}

	::System::Void set_OwnerAbilityInstance(::Class_0_16E4307DCC419505_358* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_358*))((::PBYTE)hIl2Cpp + CLASS_2_97FEB4C9F3C63840_SET_OWNERABILITYINSTANCE_OFFSET))(this, a1);
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

	::RPG::GameCore::TaskContext* __iFixBaseProxy_Clone()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97FEB4C9F3C63840___IFIXBASEPROXY_CLONE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_set_OwnerEntity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_97FEB4C9F3C63840___IFIXBASEPROXY_SET_OWNERENTITY_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_set_OwnerAbilityInstance(::Class_0_16E4307DCC419505_358* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_358*))((::PBYTE)hIl2Cpp + CLASS_2_97FEB4C9F3C63840___IFIXBASEPROXY_SET_OWNERABILITYINSTANCE_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskContext* __iFixBaseProxy__GetSelfInstance()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97FEB4C9F3C63840___IFIXBASEPROXY__GETSELFINSTANCE_OFFSET))(this);
	}
};
