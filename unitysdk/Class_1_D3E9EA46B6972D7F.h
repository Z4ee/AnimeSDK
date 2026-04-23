#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/System/Object.h"

class Class_1_61238D078BCBBECC;
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class RtAttackData; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_D3E9EA46B6972D7F_METHOD_1_18ADF68E311FE78B_OFFSET UNITYSDK_OFFSET(0x9A5A6E0)
#define CLASS_1_D3E9EA46B6972D7F_METHOD_1_38FDE68EAA09A020_OFFSET UNITYSDK_OFFSET(0x9A5ADF0)
#define CLASS_1_D3E9EA46B6972D7F_METHOD_1_6378AF43C64018DE_OFFSET UNITYSDK_OFFSET(0x9A5B5C0)
#define CLASS_1_D3E9EA46B6972D7F_METHOD_1_6A1B94208F434CAC_OFFSET UNITYSDK_OFFSET(0x9A5A630)
#define CLASS_1_D3E9EA46B6972D7F_METHOD_1_851819B95C0127DB_OFFSET UNITYSDK_OFFSET(0x9A5AE80)
#define CLASS_1_D3E9EA46B6972D7F_METHOD_1_97F61DE68F69AAD8_OFFSET UNITYSDK_OFFSET(0x9A5AD50)
#define CLASS_1_D3E9EA46B6972D7F_METHOD_1_9CD65259C33DB783_OFFSET UNITYSDK_OFFSET(0x9A5AEE0)
#define CLASS_1_D3E9EA46B6972D7F_METHOD_1_ACEEBB563EBB60E3_OFFSET UNITYSDK_OFFSET(0x9A5B0A0)
#define CLASS_1_D3E9EA46B6972D7F_METHOD_1_D7C1223A3C6992AE_OFFSET UNITYSDK_OFFSET(0x9A5AFC0)
#define CLASS_1_D3E9EA46B6972D7F_METHOD_1_E8A8A0BA134D0FA5_OFFSET UNITYSDK_OFFSET(0x9A5B9E0)
#define CLASS_1_D3E9EA46B6972D7F_METHOD_1_F1939463CFF7183C_OFFSET UNITYSDK_OFFSET(0x9A5A730)
#define CLASS_1_D3E9EA46B6972D7F_METHOD_1_F87B79FF794041F5_1_OFFSET UNITYSDK_OFFSET(0x9A5B670)
#define CLASS_1_D3E9EA46B6972D7F_METHOD_1_F87B79FF794041F5_2_OFFSET UNITYSDK_OFFSET(0x9A5B720)
#define CLASS_1_D3E9EA46B6972D7F_METHOD_1_F87B79FF794041F5_3_OFFSET UNITYSDK_OFFSET(0x9A5B7D0)
#define CLASS_1_D3E9EA46B6972D7F_METHOD_1_F87B79FF794041F5_4_OFFSET UNITYSDK_OFFSET(0x9A5B880)
#define CLASS_1_D3E9EA46B6972D7F_METHOD_1_F87B79FF794041F5_5_OFFSET UNITYSDK_OFFSET(0x9A5B930)
#define CLASS_1_D3E9EA46B6972D7F_METHOD_1_F87B79FF794041F5_OFFSET UNITYSDK_OFFSET(0x9A5B510)

inline static constexpr unsigned int Class_1_D3E9EA46B6972D7F_TypeDefinitionIndex = 49627;

class Class_1_D3E9EA46B6972D7F : public ::System::Object
{
public:
	static ::RPG::GameCore::AttackDamageType Method_1_6A1B94208F434CAC(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_D3E9EA46B6972D7F_METHOD_1_6A1B94208F434CAC_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::AttackDamageType Method_1_97F61DE68F69AAD8(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_D3E9EA46B6972D7F_METHOD_1_97F61DE68F69AAD8_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::AttackDamageType Method_1_F1939463CFF7183C(::RPG::GameCore::AttackDamageTypeConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::AttackDamageTypeConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_D3E9EA46B6972D7F_METHOD_1_F1939463CFF7183C_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::AttackDamageType Method_1_38FDE68EAA09A020(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D3E9EA46B6972D7F_METHOD_1_38FDE68EAA09A020_OFFSET))(a1);
	}

	static ::RPG::GameCore::DamageBehaviorTemplate* Method_1_851819B95C0127DB(::RPG::GameCore::RtAttackData* a1)
	{
		return ((::RPG::GameCore::DamageBehaviorTemplate*(*)(::RPG::GameCore::RtAttackData*))((::PBYTE)hIl2Cpp + CLASS_1_D3E9EA46B6972D7F_METHOD_1_851819B95C0127DB_OFFSET))(a1);
	}

	static ::RPG::GameCore::DamageBehaviorTemplate* Method_1_9CD65259C33DB783(::RPG::GameCore::JsonEnum* a1, ::RPG::GameCore::AttackType a2)
	{
		return ((::RPG::GameCore::DamageBehaviorTemplate*(*)(::RPG::GameCore::JsonEnum*, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + CLASS_1_D3E9EA46B6972D7F_METHOD_1_9CD65259C33DB783_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_D7C1223A3C6992AE(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::String*(*)(::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D3E9EA46B6972D7F_METHOD_1_D7C1223A3C6992AE_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_F87B79FF794041F5(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Single(*)(::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_D3E9EA46B6972D7F_METHOD_1_F87B79FF794041F5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_6378AF43C64018DE(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_D3E9EA46B6972D7F_METHOD_1_6378AF43C64018DE_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_F87B79FF794041F5_1(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Single(*)(::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_D3E9EA46B6972D7F_METHOD_1_F87B79FF794041F5_1_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_F87B79FF794041F5_2(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Single(*)(::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_D3E9EA46B6972D7F_METHOD_1_F87B79FF794041F5_2_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_F87B79FF794041F5_3(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Single(*)(::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_D3E9EA46B6972D7F_METHOD_1_F87B79FF794041F5_3_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_F87B79FF794041F5_4(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Single(*)(::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_D3E9EA46B6972D7F_METHOD_1_F87B79FF794041F5_4_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_F87B79FF794041F5_5(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Single(*)(::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_D3E9EA46B6972D7F_METHOD_1_F87B79FF794041F5_5_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_E8A8A0BA134D0FA5(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_D3E9EA46B6972D7F_METHOD_1_E8A8A0BA134D0FA5_OFFSET))(a1, a2);
	}

	static ::Class_1_61238D078BCBBECC* Method_1_18ADF68E311FE78B(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::Class_1_61238D078BCBBECC*(*)(::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_D3E9EA46B6972D7F_METHOD_1_18ADF68E311FE78B_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_ACEEBB563EBB60E3(::RPG::GameCore::RtAttackData* a1, ::Il2CppArray<::System::String*>* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::String*(*)(::RPG::GameCore::RtAttackData*, ::Il2CppArray<::System::String*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D3E9EA46B6972D7F_METHOD_1_ACEEBB563EBB60E3_OFFSET))(a1, a2, a3);
	}
};
