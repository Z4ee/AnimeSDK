#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_357;
class Class_1_2635DB36DB586313;

#define CLASS_1_FD3C35FC150AF234_GET_BATTLEAVATARSERVICE_OFFSET UNITYSDK_OFFSET(0x9813140)
#define CLASS_1_FD3C35FC150AF234_METHOD_1_E3E10B228CD7534D_OFFSET UNITYSDK_OFFSET(0x9813160)
#define CLASS_1_FD3C35FC150AF234_SET_BATTLEAVATARSERVICE_OFFSET UNITYSDK_OFFSET(0x9813150)
#define CLASS_1_FD3C35FC150AF234__CTOR_OFFSET UNITYSDK_OFFSET(0x98131E0)

inline static constexpr unsigned int Class_1_FD3C35FC150AF234_TypeDefinitionIndex = 57780;

class Class_1_FD3C35FC150AF234 : public ::System::Object
{
public:
	::Class_1_2635DB36DB586313* _BattleAvatarService_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD3C35FC150AF234__CTOR_OFFSET))(this);
	}

	::Class_1_2635DB36DB586313* get_BattleAvatarService()
	{
		return ((::Class_1_2635DB36DB586313*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD3C35FC150AF234_GET_BATTLEAVATARSERVICE_OFFSET))(this);
	}

	::System::Void set_BattleAvatarService(::Class_1_2635DB36DB586313* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2635DB36DB586313*))((::PBYTE)hIl2Cpp + CLASS_1_FD3C35FC150AF234_SET_BATTLEAVATARSERVICE_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_357* Method_1_E3E10B228CD7534D(::Struct_2_AAD4F4215611A944& a1, ::RPG::GameCore::BattleExtraPropertyAddition a2)
	{
		return ((::Class_0_16E4307DCC419505_357*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&, ::RPG::GameCore::BattleExtraPropertyAddition))((::PBYTE)hIl2Cpp + CLASS_1_FD3C35FC150AF234_METHOD_1_E3E10B228CD7534D_OFFSET))(this, a1, a2);
	}
};
