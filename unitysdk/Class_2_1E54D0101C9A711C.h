#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6F2598F82A312737.h"

class Class_2_FE27D0FC265DDD96;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_1E54D0101C9A711C_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15CD1520)
#define CLASS_2_1E54D0101C9A711C_GET_FROMENTITY_OFFSET UNITYSDK_OFFSET(0x15CD14E0)
#define CLASS_2_1E54D0101C9A711C_GET_TOENTITY_OFFSET UNITYSDK_OFFSET(0x15CD1500)
#define CLASS_2_1E54D0101C9A711C_METHOD_2_B990AAC12314EDF2_OFFSET UNITYSDK_OFFSET(0x15CD1AA0)
#define CLASS_2_1E54D0101C9A711C_SET_FROMENTITY_OFFSET UNITYSDK_OFFSET(0x15CD14F0)
#define CLASS_2_1E54D0101C9A711C_SET_TOENTITY_OFFSET UNITYSDK_OFFSET(0x15CD1510)
#define CLASS_2_1E54D0101C9A711C__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD1DE0)

inline static constexpr unsigned int Class_2_1E54D0101C9A711C_TypeDefinitionIndex = 54521;

class Class_2_1E54D0101C9A711C : public ::Class_1_6F2598F82A312737
{
public:
	::RPG::GameCore::GameEntity* _ToEntity_k__BackingField; // 0x20
	::RPG::GameCore::GameEntity* _FromEntity_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E54D0101C9A711C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_FromEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E54D0101C9A711C_GET_FROMENTITY_OFFSET))(this);
	}

	::System::Void set_FromEntity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_1E54D0101C9A711C_SET_FROMENTITY_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* get_ToEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E54D0101C9A711C_GET_TOENTITY_OFFSET))(this);
	}

	::System::Void set_ToEntity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_1E54D0101C9A711C_SET_TOENTITY_OFFSET))(this, a1);
	}

	::System::Void Execute(::Class_2_FE27D0FC265DDD96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FE27D0FC265DDD96*))((::PBYTE)hIl2Cpp + CLASS_2_1E54D0101C9A711C_EXECUTE_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_B990AAC12314EDF2(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_1E54D0101C9A711C_METHOD_2_B990AAC12314EDF2_OFFSET))(a1, a2);
	}
};
