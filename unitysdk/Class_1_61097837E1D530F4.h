#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/Struct_2_019938BC9C50B169_6.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_61097837E1D530F4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x144B63F0)
#define CLASS_1_61097837E1D530F4_EQUALS_OFFSET UNITYSDK_OFFSET(0x144B6310)
#define CLASS_1_61097837E1D530F4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x144B6520)
#define CLASS_1_61097837E1D530F4_GET_FOURRARITYAVATARRANKLEVEL_OFFSET UNITYSDK_OFFSET(0x144B62E0)
#define CLASS_1_61097837E1D530F4_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x144B61B0)
#define CLASS_1_61097837E1D530F4_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x144B61C0)
#define CLASS_1_61097837E1D530F4_GET_LIGHTCONELEVEL_OFFSET UNITYSDK_OFFSET(0x144B62A0)
#define CLASS_1_61097837E1D530F4_GET_LIGHTCONEPROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x144B62C0)
#define CLASS_1_61097837E1D530F4_GET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x144B61E0)
#define CLASS_1_61097837E1D530F4_GET_RELICSET2AVERAGELEVEL_OFFSET UNITYSDK_OFFSET(0x144B6260)
#define CLASS_1_61097837E1D530F4_GET_RELICSET2RARITY_OFFSET UNITYSDK_OFFSET(0x144B6280)
#define CLASS_1_61097837E1D530F4_GET_RELICSET4AVERAGELEVEL_OFFSET UNITYSDK_OFFSET(0x144B6220)
#define CLASS_1_61097837E1D530F4_GET_RELICSET4RARITY_OFFSET UNITYSDK_OFFSET(0x144B6240)
#define CLASS_1_61097837E1D530F4_GET_TRACETREEKEY_OFFSET UNITYSDK_OFFSET(0x144B6200)
#define CLASS_1_61097837E1D530F4_METHOD_1_087D47755D9D5823_1_OFFSET UNITYSDK_OFFSET(0x144B6690)
#define CLASS_1_61097837E1D530F4_METHOD_1_087D47755D9D5823_OFFSET UNITYSDK_OFFSET(0x144B6580)
#define CLASS_1_61097837E1D530F4_SET_FOURRARITYAVATARRANKLEVEL_OFFSET UNITYSDK_OFFSET(0x144B62F0)
#define CLASS_1_61097837E1D530F4_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x144B61D0)
#define CLASS_1_61097837E1D530F4_SET_LIGHTCONELEVEL_OFFSET UNITYSDK_OFFSET(0x144B62B0)
#define CLASS_1_61097837E1D530F4_SET_LIGHTCONEPROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x144B62D0)
#define CLASS_1_61097837E1D530F4_SET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x144B61F0)
#define CLASS_1_61097837E1D530F4_SET_RELICSET2AVERAGELEVEL_OFFSET UNITYSDK_OFFSET(0x144B6270)
#define CLASS_1_61097837E1D530F4_SET_RELICSET2RARITY_OFFSET UNITYSDK_OFFSET(0x144B6290)
#define CLASS_1_61097837E1D530F4_SET_RELICSET4AVERAGELEVEL_OFFSET UNITYSDK_OFFSET(0x144B6230)
#define CLASS_1_61097837E1D530F4_SET_RELICSET4RARITY_OFFSET UNITYSDK_OFFSET(0x144B6250)
#define CLASS_1_61097837E1D530F4_SET_TRACETREEKEY_OFFSET UNITYSDK_OFFSET(0x144B6210)
#define CLASS_1_61097837E1D530F4__CTOR_OFFSET UNITYSDK_OFFSET(0x144B6300)
#define CLASS_1_61097837E1D530F4___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x144B67B0)
#define CLASS_1_61097837E1D530F4___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x144B67C0)

inline static constexpr unsigned int Class_1_61097837E1D530F4_TypeDefinitionIndex = 48604;

class Class_1_61097837E1D530F4 : public ::System::Object
{
public:
	::System::String* _TraceTreeKey_k__BackingField; // 0x10
	::System::UInt32 _RelicSet4AverageLevel_k__BackingField; // 0x18
	::RPG::GameCore::CombatPowerRelicRarityType _RelicSet2Rarity_k__BackingField; // 0x1C
	::Struct_2_019938BC9C50B169_6 _Identifier_k__BackingField; // 0x20
	::System::UInt32 _PromotionLevel_k__BackingField; // 0x24
	::System::UInt32 _Level_k__BackingField; // 0x28
	::System::UInt32 _LightConePromotionLevel_k__BackingField; // 0x2C
	::System::UInt32 _RelicSet2AverageLevel_k__BackingField; // 0x30
	::RPG::GameCore::CombatPowerRelicRarityType _RelicSet4Rarity_k__BackingField; // 0x34
	::System::UInt32 _FourRarityAvatarRankLevel_k__BackingField; // 0x38
	::System::UInt32 _LightConeLevel_k__BackingField; // 0x3C

	::System::Void _ctor(::Struct_2_019938BC9C50B169_6 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_6))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_019938BC9C50B169_6 get_Identifier()
	{
		return ((::Struct_2_019938BC9C50B169_6(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_SET_LEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_PromotionLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_GET_PROMOTIONLEVEL_OFFSET))(this);
	}

	::System::Void set_PromotionLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_SET_PROMOTIONLEVEL_OFFSET))(this, a1);
	}

	::System::String* get_TraceTreeKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_GET_TRACETREEKEY_OFFSET))(this);
	}

	::System::Void set_TraceTreeKey(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_SET_TRACETREEKEY_OFFSET))(this, a1);
	}

	::System::UInt32 get_RelicSet4AverageLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_GET_RELICSET4AVERAGELEVEL_OFFSET))(this);
	}

	::System::Void set_RelicSet4AverageLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_SET_RELICSET4AVERAGELEVEL_OFFSET))(this, a1);
	}

	::RPG::GameCore::CombatPowerRelicRarityType get_RelicSet4Rarity()
	{
		return ((::RPG::GameCore::CombatPowerRelicRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_GET_RELICSET4RARITY_OFFSET))(this);
	}

	::System::Void set_RelicSet4Rarity(::RPG::GameCore::CombatPowerRelicRarityType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CombatPowerRelicRarityType))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_SET_RELICSET4RARITY_OFFSET))(this, a1);
	}

	::System::UInt32 get_RelicSet2AverageLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_GET_RELICSET2AVERAGELEVEL_OFFSET))(this);
	}

	::System::Void set_RelicSet2AverageLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_SET_RELICSET2AVERAGELEVEL_OFFSET))(this, a1);
	}

	::RPG::GameCore::CombatPowerRelicRarityType get_RelicSet2Rarity()
	{
		return ((::RPG::GameCore::CombatPowerRelicRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_GET_RELICSET2RARITY_OFFSET))(this);
	}

	::System::Void set_RelicSet2Rarity(::RPG::GameCore::CombatPowerRelicRarityType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CombatPowerRelicRarityType))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_SET_RELICSET2RARITY_OFFSET))(this, a1);
	}

	::System::UInt32 get_LightConeLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_GET_LIGHTCONELEVEL_OFFSET))(this);
	}

	::System::Void set_LightConeLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_SET_LIGHTCONELEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_LightConePromotionLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_GET_LIGHTCONEPROMOTIONLEVEL_OFFSET))(this);
	}

	::System::Void set_LightConePromotionLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_SET_LIGHTCONEPROMOTIONLEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_FourRarityAvatarRankLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_GET_FOURRARITYAVATARRANKLEVEL_OFFSET))(this);
	}

	::System::Void set_FourRarityAvatarRankLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_SET_FOURRARITYAVATARRANKLEVEL_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Class_1_61097837E1D530F4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_61097837E1D530F4*))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_1_087D47755D9D5823(::Class_1_61097837E1D530F4* a1, ::Class_1_61097837E1D530F4* a2)
	{
		return ((::System::Boolean(*)(::Class_1_61097837E1D530F4*, ::Class_1_61097837E1D530F4*))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_METHOD_1_087D47755D9D5823_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_087D47755D9D5823_1(::Class_1_61097837E1D530F4* a1, ::Class_1_61097837E1D530F4* a2)
	{
		return ((::System::Boolean(*)(::Class_1_61097837E1D530F4*, ::Class_1_61097837E1D530F4*))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_METHOD_1_087D47755D9D5823_1_OFFSET))(a1, a2);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
