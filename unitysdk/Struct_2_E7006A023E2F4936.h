#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }

#define STRUCT_2_E7006A023E2F4936_METHOD_2_18FE6851FFA58BBC_OFFSET UNITYSDK_OFFSET(0x3AB0A10)
#define STRUCT_2_E7006A023E2F4936_METHOD_2_61A8029CA1C2BC8B_OFFSET UNITYSDK_OFFSET(0x3AB0A90)
#define STRUCT_2_E7006A023E2F4936_METHOD_2_8017AD57222463DB_OFFSET UNITYSDK_OFFSET(0x3AB0A20)
#define STRUCT_2_E7006A023E2F4936_METHOD_2_89AE3FDE25BEC3FA_OFFSET UNITYSDK_OFFSET(0x3AB0A40)
#define STRUCT_2_E7006A023E2F4936_METHOD_2_BF4DF35A49B0985C_OFFSET UNITYSDK_OFFSET(0x3AB0A30)

inline static constexpr unsigned int Struct_2_E7006A023E2F4936_TypeDefinitionIndex = 59197;

struct alignas(8) Struct_2_E7006A023E2F4936
{
	::RPG::GameCore::GameEntity* LEGOPIOOCCL; // 0x10
	::RPG::GameCore::GameEntity* BOHBIOFAJEI; // 0x18
	::RPG::GameCore::GameEntity* OGMJNGAKCIP; // 0x20
	::RPG::GameCore::GameEntity* NKOCFCEBCHN; // 0x28
	::System::Int32 GHNOEFICBCA; // 0x30

	::System::Void Method_2_18FE6851FFA58BBC(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_E7006A023E2F4936_METHOD_2_18FE6851FFA58BBC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8017AD57222463DB(::RPG::GameCore::GameEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + STRUCT_2_E7006A023E2F4936_METHOD_2_8017AD57222463DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_BF4DF35A49B0985C(::RPG::GameCore::GameEntityList* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_E7006A023E2F4936_METHOD_2_BF4DF35A49B0985C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_89AE3FDE25BEC3FA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + STRUCT_2_E7006A023E2F4936_METHOD_2_89AE3FDE25BEC3FA_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_61A8029CA1C2BC8B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + STRUCT_2_E7006A023E2F4936_METHOD_2_61A8029CA1C2BC8B_OFFSET))(this, a1);
	}
};
