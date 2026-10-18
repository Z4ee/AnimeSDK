#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/Struct_2_D645B4E0B73852B6_5.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_65EF9EC87B818BF3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB336B20)
#define CLASS_1_65EF9EC87B818BF3_EQUALS_OFFSET UNITYSDK_OFFSET(0xB336AB0)
#define CLASS_1_65EF9EC87B818BF3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB336BE0)
#define CLASS_1_65EF9EC87B818BF3_GET_FOURRARITYAVATARRANKLEVEL_OFFSET UNITYSDK_OFFSET(0xB336A80)
#define CLASS_1_65EF9EC87B818BF3_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xB336950)
#define CLASS_1_65EF9EC87B818BF3_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB336960)
#define CLASS_1_65EF9EC87B818BF3_GET_LIGHTCONELEVEL_OFFSET UNITYSDK_OFFSET(0xB336A40)
#define CLASS_1_65EF9EC87B818BF3_GET_LIGHTCONEPROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0xB336A60)
#define CLASS_1_65EF9EC87B818BF3_GET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0xB336980)
#define CLASS_1_65EF9EC87B818BF3_GET_RELICSET2AVERAGELEVEL_OFFSET UNITYSDK_OFFSET(0xB336A00)
#define CLASS_1_65EF9EC87B818BF3_GET_RELICSET2RARITY_OFFSET UNITYSDK_OFFSET(0xB336A20)
#define CLASS_1_65EF9EC87B818BF3_GET_RELICSET4AVERAGELEVEL_OFFSET UNITYSDK_OFFSET(0xB3369C0)
#define CLASS_1_65EF9EC87B818BF3_GET_RELICSET4RARITY_OFFSET UNITYSDK_OFFSET(0xB3369E0)
#define CLASS_1_65EF9EC87B818BF3_GET_TRACETREEKEY_OFFSET UNITYSDK_OFFSET(0xB3369A0)
#define CLASS_1_65EF9EC87B818BF3_METHOD_1_E85CA50D622B92B5_1_OFFSET UNITYSDK_OFFSET(0xB336CD0)
#define CLASS_1_65EF9EC87B818BF3_METHOD_1_E85CA50D622B92B5_OFFSET UNITYSDK_OFFSET(0xB336C40)
#define CLASS_1_65EF9EC87B818BF3_SET_FOURRARITYAVATARRANKLEVEL_OFFSET UNITYSDK_OFFSET(0xB336A90)
#define CLASS_1_65EF9EC87B818BF3_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB336970)
#define CLASS_1_65EF9EC87B818BF3_SET_LIGHTCONELEVEL_OFFSET UNITYSDK_OFFSET(0xB336A50)
#define CLASS_1_65EF9EC87B818BF3_SET_LIGHTCONEPROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0xB336A70)
#define CLASS_1_65EF9EC87B818BF3_SET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0xB336990)
#define CLASS_1_65EF9EC87B818BF3_SET_RELICSET2AVERAGELEVEL_OFFSET UNITYSDK_OFFSET(0xB336A10)
#define CLASS_1_65EF9EC87B818BF3_SET_RELICSET2RARITY_OFFSET UNITYSDK_OFFSET(0xB336A30)
#define CLASS_1_65EF9EC87B818BF3_SET_RELICSET4AVERAGELEVEL_OFFSET UNITYSDK_OFFSET(0xB3369D0)
#define CLASS_1_65EF9EC87B818BF3_SET_RELICSET4RARITY_OFFSET UNITYSDK_OFFSET(0xB3369F0)
#define CLASS_1_65EF9EC87B818BF3_SET_TRACETREEKEY_OFFSET UNITYSDK_OFFSET(0xB3369B0)
#define CLASS_1_65EF9EC87B818BF3__CTOR_OFFSET UNITYSDK_OFFSET(0xB336AA0)

inline static constexpr unsigned int Class_1_65EF9EC87B818BF3_TypeDefinitionIndex = 51981;

class Class_1_65EF9EC87B818BF3 : public ::System::Object
{
public:
	::System::String* _TraceTreeKey_k__BackingField; // 0x10
	::System::UInt32 _LightConePromotionLevel_k__BackingField; // 0x18
	::System::UInt32 _RelicSet2AverageLevel_k__BackingField; // 0x1C
	::System::UInt32 _FourRarityAvatarRankLevel_k__BackingField; // 0x20
	::Struct_2_D645B4E0B73852B6_5 _Identifier_k__BackingField; // 0x24
	::System::UInt32 _PromotionLevel_k__BackingField; // 0x28
	::System::UInt32 _Level_k__BackingField; // 0x2C
	::System::UInt32 _RelicSet4AverageLevel_k__BackingField; // 0x30
	::RPG::GameCore::CombatPowerRelicRarityType _RelicSet4Rarity_k__BackingField; // 0x34
	::RPG::GameCore::CombatPowerRelicRarityType _RelicSet2Rarity_k__BackingField; // 0x38
	::System::UInt32 _LightConeLevel_k__BackingField; // 0x3C

	::System::Void _ctor(::Struct_2_D645B4E0B73852B6_5 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_D645B4E0B73852B6_5))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_D645B4E0B73852B6_5 get_Identifier()
	{
		return ((::Struct_2_D645B4E0B73852B6_5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_SET_LEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_PromotionLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_GET_PROMOTIONLEVEL_OFFSET))(this);
	}

	::System::Void set_PromotionLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_SET_PROMOTIONLEVEL_OFFSET))(this, a1);
	}

	::System::String* get_TraceTreeKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_GET_TRACETREEKEY_OFFSET))(this);
	}

	::System::Void set_TraceTreeKey(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_SET_TRACETREEKEY_OFFSET))(this, a1);
	}

	::System::UInt32 get_RelicSet4AverageLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_GET_RELICSET4AVERAGELEVEL_OFFSET))(this);
	}

	::System::Void set_RelicSet4AverageLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_SET_RELICSET4AVERAGELEVEL_OFFSET))(this, a1);
	}

	::RPG::GameCore::CombatPowerRelicRarityType get_RelicSet4Rarity()
	{
		return ((::RPG::GameCore::CombatPowerRelicRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_GET_RELICSET4RARITY_OFFSET))(this);
	}

	::System::Void set_RelicSet4Rarity(::RPG::GameCore::CombatPowerRelicRarityType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CombatPowerRelicRarityType))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_SET_RELICSET4RARITY_OFFSET))(this, a1);
	}

	::System::UInt32 get_RelicSet2AverageLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_GET_RELICSET2AVERAGELEVEL_OFFSET))(this);
	}

	::System::Void set_RelicSet2AverageLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_SET_RELICSET2AVERAGELEVEL_OFFSET))(this, a1);
	}

	::RPG::GameCore::CombatPowerRelicRarityType get_RelicSet2Rarity()
	{
		return ((::RPG::GameCore::CombatPowerRelicRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_GET_RELICSET2RARITY_OFFSET))(this);
	}

	::System::Void set_RelicSet2Rarity(::RPG::GameCore::CombatPowerRelicRarityType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CombatPowerRelicRarityType))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_SET_RELICSET2RARITY_OFFSET))(this, a1);
	}

	::System::UInt32 get_LightConeLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_GET_LIGHTCONELEVEL_OFFSET))(this);
	}

	::System::Void set_LightConeLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_SET_LIGHTCONELEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_LightConePromotionLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_GET_LIGHTCONEPROMOTIONLEVEL_OFFSET))(this);
	}

	::System::Void set_LightConePromotionLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_SET_LIGHTCONEPROMOTIONLEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_FourRarityAvatarRankLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_GET_FOURRARITYAVATARRANKLEVEL_OFFSET))(this);
	}

	::System::Void set_FourRarityAvatarRankLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_SET_FOURRARITYAVATARRANKLEVEL_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Class_1_65EF9EC87B818BF3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_65EF9EC87B818BF3*))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_1_E85CA50D622B92B5(::Class_1_65EF9EC87B818BF3* a1, ::Class_1_65EF9EC87B818BF3* a2)
	{
		return ((::System::Boolean(*)(::Class_1_65EF9EC87B818BF3*, ::Class_1_65EF9EC87B818BF3*))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_METHOD_1_E85CA50D622B92B5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E85CA50D622B92B5_1(::Class_1_65EF9EC87B818BF3* a1, ::Class_1_65EF9EC87B818BF3* a2)
	{
		return ((::System::Boolean(*)(::Class_1_65EF9EC87B818BF3*, ::Class_1_65EF9EC87B818BF3*))((::PBYTE)hIl2Cpp + CLASS_1_65EF9EC87B818BF3_METHOD_1_E85CA50D622B92B5_1_OFFSET))(a1, a2);
	}
};
