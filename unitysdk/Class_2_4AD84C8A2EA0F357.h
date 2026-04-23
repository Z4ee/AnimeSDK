#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1CBCCF81A23ECF1B.h"

class Class_2_FE27D0FC265DDD96;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_4AD84C8A2EA0F357_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBABE9F0)
#define CLASS_2_4AD84C8A2EA0F357_GET_FROMENTITY_OFFSET UNITYSDK_OFFSET(0xBABE9B0)
#define CLASS_2_4AD84C8A2EA0F357_GET_TOENTITY_OFFSET UNITYSDK_OFFSET(0xBABE9D0)
#define CLASS_2_4AD84C8A2EA0F357_METHOD_2_232BA9CB000FC26E_OFFSET UNITYSDK_OFFSET(0xBABEEA0)
#define CLASS_2_4AD84C8A2EA0F357_SET_FROMENTITY_OFFSET UNITYSDK_OFFSET(0xBABE9C0)
#define CLASS_2_4AD84C8A2EA0F357_SET_TOENTITY_OFFSET UNITYSDK_OFFSET(0xBABE9E0)
#define CLASS_2_4AD84C8A2EA0F357__CTOR_OFFSET UNITYSDK_OFFSET(0xBABF120)
#define CLASS_2_4AD84C8A2EA0F357___IFIXBASEPROXY_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBABF130)

inline static constexpr unsigned int Class_2_4AD84C8A2EA0F357_TypeDefinitionIndex = 50088;

class Class_2_4AD84C8A2EA0F357 : public ::Class_1_1CBCCF81A23ECF1B
{
public:
	::RPG::GameCore::GameEntity* _ToEntity_k__BackingField; // 0x20
	::RPG::GameCore::GameEntity* _FromEntity_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4AD84C8A2EA0F357__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_FromEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4AD84C8A2EA0F357_GET_FROMENTITY_OFFSET))(this);
	}

	::System::Void set_FromEntity(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4AD84C8A2EA0F357_SET_FROMENTITY_OFFSET))(this, value);
	}

	::RPG::GameCore::GameEntity* get_ToEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4AD84C8A2EA0F357_GET_TOENTITY_OFFSET))(this);
	}

	::System::Void set_ToEntity(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4AD84C8A2EA0F357_SET_TOENTITY_OFFSET))(this, value);
	}

	::System::Void Execute(::Class_2_FE27D0FC265DDD96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FE27D0FC265DDD96*))((::PBYTE)hIl2Cpp + CLASS_2_4AD84C8A2EA0F357_EXECUTE_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_232BA9CB000FC26E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4AD84C8A2EA0F357_METHOD_2_232BA9CB000FC26E_OFFSET))(a1, a2);
	}

	::System::Void __iFixBaseProxy_Execute(::Class_2_FE27D0FC265DDD96* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FE27D0FC265DDD96*))((::PBYTE)hIl2Cpp + CLASS_2_4AD84C8A2EA0F357___IFIXBASEPROXY_EXECUTE_OFFSET))(this, P0);
	}
};
