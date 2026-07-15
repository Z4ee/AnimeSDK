#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BlockNodeRegionType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BLOCKNODECONFIG_METHOD_2_37D3DE6D8A866A73_OFFSET UNITYSDK_OFFSET(0x1A3FEC40)
#define RPG_GAMECORE_BLOCKNODECONFIG_METHOD_2_AE3CBB691880A973_OFFSET UNITYSDK_OFFSET(0x1A3FF330)
#define RPG_GAMECORE_BLOCKNODECONFIG_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1A400BC0)
#define RPG_GAMECORE_BLOCKNODECONFIG_METHOD_2_F24A112B56A2E4B4_OFFSET UNITYSDK_OFFSET(0x1A400BA0)
#define RPG_GAMECORE_BLOCKNODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3FF320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BlockNodeConfig_TypeDefinitionIndex = 18367;

	class BlockNodeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean MarkForDelete; // 0x10
		::System::Boolean RuntimeEnable; // 0x11
		::System::Boolean IsBetaShield; // 0x12
		::System::Int32 Index; // 0x14
		::System::String* BlockName; // 0x18
		::System::String* BlockTag; // 0x20
		::System::UInt32 IslandID; // 0x28
		::RPG::GameCore::BlockNodeRegionType BlockRegionType; // 0x2C
		::System::String* StreamingLayerOverride; // 0x30
		::System::Boolean Independent; // 0x38
		::System::Boolean PcOnly; // 0x39
		::System::Single PosX; // 0x3C
		::System::Single PosY; // 0x40
		::System::Single PosZ; // 0x44
		::System::Single RotY; // 0x48
		::System::String* Alias; // 0x50
		::System::String* HLODPath; // 0x58
		::RPG::GameCore::HoyoTagContainer* TagContainer; // 0x60
		::System::SByte BlockGrassQualityLowerBoundsOverride; // 0x68
		::System::String* PrefabName; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKNODECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_37D3DE6D8A866A73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BlockNodeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BlockNodeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKNODECONFIG_METHOD_2_37D3DE6D8A866A73_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_AE3CBB691880A973(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BlockNodeConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BlockNodeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKNODECONFIG_METHOD_2_AE3CBB691880A973_OFFSET))(a1, a2);
		}

		::System::String* Method_2_F24A112B56A2E4B4()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKNODECONFIG_METHOD_2_F24A112B56A2E4B4_OFFSET))(this);
		}

		::System::Boolean Method_2_F0E307B84478A272()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKNODECONFIG_METHOD_2_F0E307B84478A272_OFFSET))(this);
		}
	};
}
