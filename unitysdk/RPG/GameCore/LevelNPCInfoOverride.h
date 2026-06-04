#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelNPCInfoOverrideIdleAnim; }
namespace RPG::GameCore { class LevelNPCInfoOverrideLocation; }
namespace RPG::GameCore { class LevelNPCInfoOverrideRotationY; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELNPCINFOOVERRIDE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1987D300)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDE_GET_GROUPANCHORID_OFFSET UNITYSDK_OFFSET(0x1987D7F0)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDE_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1987D7B0)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDE_GET_GROUPNPCID_OFFSET UNITYSDK_OFFSET(0x1987D7D0)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SETANCHORID_OFFSET UNITYSDK_OFFSET(0x1987D820)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SETGROUPANDNPCID_OFFSET UNITYSDK_OFFSET(0x1987D810)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SETIDLEANIMATION_OFFSET UNITYSDK_OFFSET(0x1987D880)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SETROTATION_OFFSET UNITYSDK_OFFSET(0x1987D830)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SET_GROUPANCHORID_OFFSET UNITYSDK_OFFSET(0x1987D800)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1987D7C0)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SET_GROUPNPCID_OFFSET UNITYSDK_OFFSET(0x1987D7E0)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1987D3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCInfoOverride_TypeDefinitionIndex = 16502;

	class LevelNPCInfoOverride : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LevelNPCInfoOverrideRotationY* RotationYInfo; // 0x10
		::RPG::GameCore::LevelNPCInfoOverrideLocation* LocationInfo; // 0x18
		::RPG::GameCore::LevelNPCInfoOverrideIdleAnim* IdleAnimInfo; // 0x20
		::System::String* ConfigEntityPath; // 0x28
		::System::String* BlendShapeConfigName; // 0x30
		::System::UInt32 _GroupID_k__BackingField; // 0x38
		::System::UInt32 _GroupNPCID_k__BackingField; // 0x3C
		::System::UInt32 _GroupAnchorID_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelNPCInfoOverride*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCInfoOverride*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDE_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDE_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupNPCID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDE_GET_GROUPNPCID_OFFSET))(this);
		}

		::System::Void set_GroupNPCID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SET_GROUPNPCID_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupAnchorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDE_GET_GROUPANCHORID_OFFSET))(this);
		}

		::System::Void set_GroupAnchorID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SET_GROUPANCHORID_OFFSET))(this, a1);
		}

		::System::Void SetGroupAndNPCID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SETGROUPANDNPCID_OFFSET))(this, a1, a2);
		}

		::System::Void SetAnchorID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SETANCHORID_OFFSET))(this, a1);
		}

		::System::Void SetRotation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SETROTATION_OFFSET))(this, a1);
		}

		::System::Void SetIdleAnimation(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SETIDLEANIMATION_OFFSET))(this, a1);
		}
	};
}
