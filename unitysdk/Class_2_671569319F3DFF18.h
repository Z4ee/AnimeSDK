#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskContext.h"

class Class_0_16E4307DCC419505_345;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_671569319F3DFF18_CLONE_OFFSET UNITYSDK_OFFSET(0x9326520)
#define CLASS_2_671569319F3DFF18_GET_OWNERABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0x9326640)
#define CLASS_2_671569319F3DFF18_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x9326580)
#define CLASS_2_671569319F3DFF18_GET_PARENTCONTEXT_OFFSET UNITYSDK_OFFSET(0x9326700)
#define CLASS_2_671569319F3DFF18_SET_OWNERABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0x9326670)
#define CLASS_2_671569319F3DFF18_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x93265B0)
#define CLASS_2_671569319F3DFF18_SET_PARENTCONTEXT_OFFSET UNITYSDK_OFFSET(0x9326710)
#define CLASS_2_671569319F3DFF18__CTOR_OFFSET UNITYSDK_OFFSET(0x9326490)
#define CLASS_2_671569319F3DFF18__GETSELFINSTANCE_OFFSET UNITYSDK_OFFSET(0x9326720)
#define CLASS_2_671569319F3DFF18___IFIXBASEPROXY_CLONE_OFFSET UNITYSDK_OFFSET(0x93267A0)
#define CLASS_2_671569319F3DFF18___IFIXBASEPROXY_SET_OWNERABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0x9326890)
#define CLASS_2_671569319F3DFF18___IFIXBASEPROXY_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x9326830)
#define CLASS_2_671569319F3DFF18___IFIXBASEPROXY__GETSELFINSTANCE_OFFSET UNITYSDK_OFFSET(0x93268A0)

inline static constexpr unsigned int Class_2_671569319F3DFF18_TypeDefinitionIndex = 50538;

class Class_2_671569319F3DFF18 : public ::RPG::GameCore::TaskContext
{
public:
	::RPG::GameCore::TaskContext* _ParentContext_k__BackingField; // 0xA0

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskContext* Clone()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18_CLONE_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_OwnerEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18_GET_OWNERENTITY_OFFSET))(this);
	}

	::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18_SET_OWNERENTITY_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_345* get_OwnerAbilityInstance()
	{
		return ((::Class_0_16E4307DCC419505_345*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18_GET_OWNERABILITYINSTANCE_OFFSET))(this);
	}

	::System::Void set_OwnerAbilityInstance(::Class_0_16E4307DCC419505_345* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_345*))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18_SET_OWNERABILITYINSTANCE_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskContext* get_ParentContext()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18_GET_PARENTCONTEXT_OFFSET))(this);
	}

	::System::Void set_ParentContext(::RPG::GameCore::TaskContext* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18_SET_PARENTCONTEXT_OFFSET))(this, value);
	}

	::RPG::GameCore::TaskContext* _GetSelfInstance()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18__GETSELFINSTANCE_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* __iFixBaseProxy_Clone()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18___IFIXBASEPROXY_CLONE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_set_OwnerEntity(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18___IFIXBASEPROXY_SET_OWNERENTITY_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_set_OwnerAbilityInstance(::Class_0_16E4307DCC419505_345* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_345*))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18___IFIXBASEPROXY_SET_OWNERABILITYINSTANCE_OFFSET))(this, P0);
	}

	::RPG::GameCore::TaskContext* __iFixBaseProxy__GetSelfInstance()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18___IFIXBASEPROXY__GETSELFINSTANCE_OFFSET))(this);
	}
};
