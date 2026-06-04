#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/RPG/GameCore/BlockNodeRegionType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_64EA8B4AB59D91C7_4;
class Class_1_CC37BE43AC1781E1;
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class String; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_BLOCKTAG_AWAKE_OFFSET UNITYSDK_OFFSET(0xB438CC0)
#define RPG_CLIENT_BLOCKTAG_DUMP_OFFSET UNITYSDK_OFFSET(0xB439330)
#define RPG_CLIENT_BLOCKTAG_GET_BLOCKBLENDCONFIG_OFFSET UNITYSDK_OFFSET(0xB439020)
#define RPG_CLIENT_BLOCKTAG_GET_BLOCKNAME_OFFSET UNITYSDK_OFFSET(0xB438D60)
#define RPG_CLIENT_BLOCKTAG_GET_BLOCKNODEREGIONTYPE_OFFSET UNITYSDK_OFFSET(0xB438DC0)
#define RPG_CLIENT_BLOCKTAG_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB438D00)
#define RPG_CLIENT_BLOCKTAG_GET_PERSISTENTLEVEL_OFFSET UNITYSDK_OFFSET(0xB438DE0)
#define RPG_CLIENT_BLOCKTAG_GET_TERRAINALBEDO_OFFSET UNITYSDK_OFFSET(0xB4390E0)
#define RPG_CLIENT_BLOCKTAG_GET_TERRAINCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xB4391A0)
#define RPG_CLIENT_BLOCKTAG_GET_TERRAINCOVERAGE_OFFSET UNITYSDK_OFFSET(0xB439140)
#define RPG_CLIENT_BLOCKTAG_LOAD_OFFSET UNITYSDK_OFFSET(0xB439200)
#define RPG_CLIENT_BLOCKTAG_SET_BLOCKNODEREGIONTYPE_OFFSET UNITYSDK_OFFSET(0xB438DD0)
#define RPG_CLIENT_BLOCKTAG_SET_PERSISTENTLEVEL_OFFSET UNITYSDK_OFFSET(0xB438E90)
#define RPG_CLIENT_BLOCKTAG__CCTOR_OFFSET UNITYSDK_OFFSET(0xB439410)
#define RPG_CLIENT_BLOCKTAG__CTOR_OFFSET UNITYSDK_OFFSET(0xB4393C0)

namespace RPG::Client
{
	inline static constexpr unsigned int BlockTag_TypeDefinitionIndex = 64969;

	class BlockTag : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_DefaultTag()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockTag_TypeDefinitionIndex)->GetStaticField(0x51E60);
		}
		::System::String* Tag; // 0x18
		::System::UInt32 IslandID; // 0x20
		::RPG::GameCore::BlockNodeRegionType Field_5_3; // 0x24
		::System::String* StreamingLayerOverride; // 0x28
		::System::Boolean Independent; // 0x30
		::UnityEngine::Object* HLODAsset; // 0x38
		::System::String* HLODPath; // 0x40
		::System::Boolean PcOnly; // 0x48
		::System::Boolean RuntimeEnable; // 0x49
		::System::Boolean IsBetaShield; // 0x4A
		::RPG::CustomRP::Quality GrassOverrideQuality; // 0x4C
		::RPG::GameCore::BlockNodeConfig* Field_5_12; // 0x50
		::Class_1_CC37BE43AC1781E1* Field_5_13; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLOCKTAG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BLOCKTAG__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLOCKTAG_AWAKE_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLOCKTAG_GET_INDEX_OFFSET))(this);
		}

		::System::String* get_BlockName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLOCKTAG_GET_BLOCKNAME_OFFSET))(this);
		}

		::RPG::GameCore::BlockNodeRegionType get_BlockNodeRegionType()
		{
			return ((::RPG::GameCore::BlockNodeRegionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLOCKTAG_GET_BLOCKNODEREGIONTYPE_OFFSET))(this);
		}

		::System::Void set_BlockNodeRegionType(::RPG::GameCore::BlockNodeRegionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BlockNodeRegionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLOCKTAG_SET_BLOCKNODEREGIONTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_PersistentLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLOCKTAG_GET_PERSISTENTLEVEL_OFFSET))(this);
		}

		::System::Void set_PersistentLevel(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLOCKTAG_SET_PERSISTENTLEVEL_OFFSET))(this, a1);
		}

		::Class_1_64EA8B4AB59D91C7_4* get_blockBlendConfig()
		{
			return ((::Class_1_64EA8B4AB59D91C7_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLOCKTAG_GET_BLOCKBLENDCONFIG_OFFSET))(this);
		}

		::System::Single get_TerrainAlbedo()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLOCKTAG_GET_TERRAINALBEDO_OFFSET))(this);
		}

		::System::Single get_TerrainCoverage()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLOCKTAG_GET_TERRAINCOVERAGE_OFFSET))(this);
		}

		::System::Single get_TerrainControlMode()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLOCKTAG_GET_TERRAINCONTROLMODE_OFFSET))(this);
		}

		::System::Void Load(::RPG::GameCore::BlockNodeConfig* a1, ::Class_1_CC37BE43AC1781E1* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*, ::Class_1_CC37BE43AC1781E1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLOCKTAG_LOAD_OFFSET))(this, a1, a2);
		}

		::System::Void Dump(::RPG::GameCore::BlockNodeConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLOCKTAG_DUMP_OFFSET))(this, a1);
		}
	};
}
