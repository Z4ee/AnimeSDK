#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/Struct_2_019938BC9C50B169_7.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_06CDCC6A0A66BA0A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x10C46200)
#define CLASS_1_06CDCC6A0A66BA0A_EQUALS_OFFSET UNITYSDK_OFFSET(0x10C46170)
#define CLASS_1_06CDCC6A0A66BA0A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x10C462E0)
#define CLASS_1_06CDCC6A0A66BA0A_GET_FOURRARITYAVATARRANKLEVEL_OFFSET UNITYSDK_OFFSET(0x10C46140)
#define CLASS_1_06CDCC6A0A66BA0A_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x10C46010)
#define CLASS_1_06CDCC6A0A66BA0A_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x10C46020)
#define CLASS_1_06CDCC6A0A66BA0A_GET_LIGHTCONELEVEL_OFFSET UNITYSDK_OFFSET(0x10C46100)
#define CLASS_1_06CDCC6A0A66BA0A_GET_LIGHTCONEPROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x10C46120)
#define CLASS_1_06CDCC6A0A66BA0A_GET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x10C46040)
#define CLASS_1_06CDCC6A0A66BA0A_GET_RELICSET2AVERAGELEVEL_OFFSET UNITYSDK_OFFSET(0x10C460C0)
#define CLASS_1_06CDCC6A0A66BA0A_GET_RELICSET2RARITY_OFFSET UNITYSDK_OFFSET(0x10C460E0)
#define CLASS_1_06CDCC6A0A66BA0A_GET_RELICSET4AVERAGELEVEL_OFFSET UNITYSDK_OFFSET(0x10C46080)
#define CLASS_1_06CDCC6A0A66BA0A_GET_RELICSET4RARITY_OFFSET UNITYSDK_OFFSET(0x10C460A0)
#define CLASS_1_06CDCC6A0A66BA0A_GET_TRACETREEKEY_OFFSET UNITYSDK_OFFSET(0x10C46060)
#define CLASS_1_06CDCC6A0A66BA0A_METHOD_1_3E81B089F141D6EC_1_OFFSET UNITYSDK_OFFSET(0x10C46400)
#define CLASS_1_06CDCC6A0A66BA0A_METHOD_1_3E81B089F141D6EC_OFFSET UNITYSDK_OFFSET(0x10C46340)
#define CLASS_1_06CDCC6A0A66BA0A_SET_FOURRARITYAVATARRANKLEVEL_OFFSET UNITYSDK_OFFSET(0x10C46150)
#define CLASS_1_06CDCC6A0A66BA0A_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x10C46030)
#define CLASS_1_06CDCC6A0A66BA0A_SET_LIGHTCONELEVEL_OFFSET UNITYSDK_OFFSET(0x10C46110)
#define CLASS_1_06CDCC6A0A66BA0A_SET_LIGHTCONEPROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x10C46130)
#define CLASS_1_06CDCC6A0A66BA0A_SET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x10C46050)
#define CLASS_1_06CDCC6A0A66BA0A_SET_RELICSET2AVERAGELEVEL_OFFSET UNITYSDK_OFFSET(0x10C460D0)
#define CLASS_1_06CDCC6A0A66BA0A_SET_RELICSET2RARITY_OFFSET UNITYSDK_OFFSET(0x10C460F0)
#define CLASS_1_06CDCC6A0A66BA0A_SET_RELICSET4AVERAGELEVEL_OFFSET UNITYSDK_OFFSET(0x10C46090)
#define CLASS_1_06CDCC6A0A66BA0A_SET_RELICSET4RARITY_OFFSET UNITYSDK_OFFSET(0x10C460B0)
#define CLASS_1_06CDCC6A0A66BA0A_SET_TRACETREEKEY_OFFSET UNITYSDK_OFFSET(0x10C46070)
#define CLASS_1_06CDCC6A0A66BA0A__CTOR_OFFSET UNITYSDK_OFFSET(0x10C46160)
#define CLASS_1_06CDCC6A0A66BA0A___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x10C464D0)
#define CLASS_1_06CDCC6A0A66BA0A___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x10C464E0)

inline static constexpr unsigned int Class_1_06CDCC6A0A66BA0A_TypeDefinitionIndex = 42013;

class Class_1_06CDCC6A0A66BA0A : public ::System::Object
{
public:
	::System::String* _TraceTreeKey_k__BackingField; // 0x10
	::RPG::GameCore::CombatPowerRelicRarityType _RelicSet2Rarity_k__BackingField; // 0x18
	::RPG::GameCore::CombatPowerRelicRarityType _RelicSet4Rarity_k__BackingField; // 0x1C
	::System::UInt32 _FourRarityAvatarRankLevel_k__BackingField; // 0x20
	::System::UInt32 _PromotionLevel_k__BackingField; // 0x24
	::System::UInt32 _Level_k__BackingField; // 0x28
	::System::UInt32 _LightConeLevel_k__BackingField; // 0x2C
	::System::UInt32 _RelicSet4AverageLevel_k__BackingField; // 0x30
	::Struct_2_019938BC9C50B169_7 _Identifier_k__BackingField; // 0x34
	::System::UInt32 _LightConePromotionLevel_k__BackingField; // 0x38
	::System::UInt32 _RelicSet2AverageLevel_k__BackingField; // 0x3C

	::System::Void _ctor(::Struct_2_019938BC9C50B169_7 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_7))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_019938BC9C50B169_7 get_Identifier()
	{
		return ((::Struct_2_019938BC9C50B169_7(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_SET_LEVEL_OFFSET))(this, value);
	}

	::System::UInt32 get_PromotionLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_GET_PROMOTIONLEVEL_OFFSET))(this);
	}

	::System::Void set_PromotionLevel(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_SET_PROMOTIONLEVEL_OFFSET))(this, value);
	}

	::System::String* get_TraceTreeKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_GET_TRACETREEKEY_OFFSET))(this);
	}

	::System::Void set_TraceTreeKey(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_SET_TRACETREEKEY_OFFSET))(this, value);
	}

	::System::UInt32 get_RelicSet4AverageLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_GET_RELICSET4AVERAGELEVEL_OFFSET))(this);
	}

	::System::Void set_RelicSet4AverageLevel(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_SET_RELICSET4AVERAGELEVEL_OFFSET))(this, value);
	}

	::RPG::GameCore::CombatPowerRelicRarityType get_RelicSet4Rarity()
	{
		return ((::RPG::GameCore::CombatPowerRelicRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_GET_RELICSET4RARITY_OFFSET))(this);
	}

	::System::Void set_RelicSet4Rarity(::RPG::GameCore::CombatPowerRelicRarityType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CombatPowerRelicRarityType))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_SET_RELICSET4RARITY_OFFSET))(this, value);
	}

	::System::UInt32 get_RelicSet2AverageLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_GET_RELICSET2AVERAGELEVEL_OFFSET))(this);
	}

	::System::Void set_RelicSet2AverageLevel(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_SET_RELICSET2AVERAGELEVEL_OFFSET))(this, value);
	}

	::RPG::GameCore::CombatPowerRelicRarityType get_RelicSet2Rarity()
	{
		return ((::RPG::GameCore::CombatPowerRelicRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_GET_RELICSET2RARITY_OFFSET))(this);
	}

	::System::Void set_RelicSet2Rarity(::RPG::GameCore::CombatPowerRelicRarityType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CombatPowerRelicRarityType))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_SET_RELICSET2RARITY_OFFSET))(this, value);
	}

	::System::UInt32 get_LightConeLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_GET_LIGHTCONELEVEL_OFFSET))(this);
	}

	::System::Void set_LightConeLevel(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_SET_LIGHTCONELEVEL_OFFSET))(this, value);
	}

	::System::UInt32 get_LightConePromotionLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_GET_LIGHTCONEPROMOTIONLEVEL_OFFSET))(this);
	}

	::System::Void set_LightConePromotionLevel(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_SET_LIGHTCONEPROMOTIONLEVEL_OFFSET))(this, value);
	}

	::System::UInt32 get_FourRarityAvatarRankLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_GET_FOURRARITYAVATARRANKLEVEL_OFFSET))(this);
	}

	::System::Void set_FourRarityAvatarRankLevel(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_SET_FOURRARITYAVATARRANKLEVEL_OFFSET))(this, value);
	}

	::System::Boolean Equals(::Class_1_06CDCC6A0A66BA0A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_06CDCC6A0A66BA0A*))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_1_3E81B089F141D6EC(::Class_1_06CDCC6A0A66BA0A* a1, ::Class_1_06CDCC6A0A66BA0A* a2)
	{
		return ((::System::Boolean(*)(::Class_1_06CDCC6A0A66BA0A*, ::Class_1_06CDCC6A0A66BA0A*))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_METHOD_1_3E81B089F141D6EC_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3E81B089F141D6EC_1(::Class_1_06CDCC6A0A66BA0A* a1, ::Class_1_06CDCC6A0A66BA0A* a2)
	{
		return ((::System::Boolean(*)(::Class_1_06CDCC6A0A66BA0A*, ::Class_1_06CDCC6A0A66BA0A*))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A_METHOD_1_3E81B089F141D6EC_1_OFFSET))(a1, a2);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06CDCC6A0A66BA0A___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
