#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_1_75EB411B462BA1DB;

#define CLASS_1_EAA970C77D59E3C3_GET_BATTLEAVATARSERVICE_OFFSET UNITYSDK_OFFSET(0x13AC2740)
#define CLASS_1_EAA970C77D59E3C3_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x13AC26F0)
#define CLASS_1_EAA970C77D59E3C3_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x13AC2720)
#define CLASS_1_EAA970C77D59E3C3_METHOD_1_69607B7E4783C654_OFFSET UNITYSDK_OFFSET(0x13AC2760)
#define CLASS_1_EAA970C77D59E3C3_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x13AC26D0)
#define CLASS_1_EAA970C77D59E3C3_SET_BATTLEAVATARSERVICE_OFFSET UNITYSDK_OFFSET(0x13AC2750)
#define CLASS_1_EAA970C77D59E3C3_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x13AC2710)
#define CLASS_1_EAA970C77D59E3C3_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x13AC2730)
#define CLASS_1_EAA970C77D59E3C3__CTOR_OFFSET UNITYSDK_OFFSET(0x13AC27D0)

inline static constexpr unsigned int Class_1_EAA970C77D59E3C3_TypeDefinitionIndex = 58506;

class Class_1_EAA970C77D59E3C3 : public ::System::Object
{
public:
	::Class_1_75EB411B462BA1DB* _BattleAvatarService_k__BackingField; // 0x10
	::Struct_2_AAD4F4215611A944 _Identifier_k__BackingField; // 0x18
	::RPG::GameCore::BattleExtraPropertyAddition _Type_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAA970C77D59E3C3__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAA970C77D59E3C3_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::Struct_2_AAD4F4215611A944 get_Identifier()
	{
		return ((::Struct_2_AAD4F4215611A944(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAA970C77D59E3C3_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::Void set_Identifier(::Struct_2_AAD4F4215611A944 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_AAD4F4215611A944))((::PBYTE)hIl2Cpp + CLASS_1_EAA970C77D59E3C3_SET_IDENTIFIER_OFFSET))(this, a1);
	}

	::RPG::GameCore::BattleExtraPropertyAddition get_Type()
	{
		return ((::RPG::GameCore::BattleExtraPropertyAddition(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAA970C77D59E3C3_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::GameCore::BattleExtraPropertyAddition a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleExtraPropertyAddition))((::PBYTE)hIl2Cpp + CLASS_1_EAA970C77D59E3C3_SET_TYPE_OFFSET))(this, a1);
	}

	::Class_1_75EB411B462BA1DB* get_BattleAvatarService()
	{
		return ((::Class_1_75EB411B462BA1DB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAA970C77D59E3C3_GET_BATTLEAVATARSERVICE_OFFSET))(this);
	}

	::System::Void set_BattleAvatarService(::Class_1_75EB411B462BA1DB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_75EB411B462BA1DB*))((::PBYTE)hIl2Cpp + CLASS_1_EAA970C77D59E3C3_SET_BATTLEAVATARSERVICE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_69607B7E4783C654()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAA970C77D59E3C3_METHOD_1_69607B7E4783C654_OFFSET))(this);
	}
};
