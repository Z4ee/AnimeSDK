#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SurfaceType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class TerrianSurfaceInfo; }
namespace System { class String; }

#define RPG_CLIENT_MONOSURFACEINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A34EA60)
#define RPG_CLIENT_MONOSURFACEINFO_GETSURFACETYPE_OFFSET UNITYSDK_OFFSET(0x1A34E4F0)
#define RPG_CLIENT_MONOSURFACEINFO_GET_ENABLESEALEVELALTITUDE_OFFSET UNITYSDK_OFFSET(0x1A34E740)
#define RPG_CLIENT_MONOSURFACEINFO_GET_GETSEALEVELALTITUDE_OFFSET UNITYSDK_OFFSET(0x1A34E800)
#define RPG_CLIENT_MONOSURFACEINFO_GET_SEACOLOR_OFFSET UNITYSDK_OFFSET(0x1A34E8C0)
#define RPG_CLIENT_MONOSURFACEINFO_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A34E7F0)
#define RPG_CLIENT_MONOSURFACEINFO_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A34ED50)
#define RPG_CLIENT_MONOSURFACEINFO_START_OFFSET UNITYSDK_OFFSET(0x1A34EBE0)
#define RPG_CLIENT_MONOSURFACEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A34EE20)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoSurfaceInfo_TypeDefinitionIndex = 65798;

	class MonoSurfaceInfo : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 Field_5_0 = 0x2; // 0x0
		::System::Boolean forbidStand; // 0x18
		::RPG::GameCore::SurfaceType surfaceType; // 0x1C
		::System::Boolean useTerrainMask; // 0x20
		::System::String* terrainTextureName; // 0x28
		::System::Boolean UseSeaLevelAltitude; // 0x30
		::System::Single SeaLevelAltitude; // 0x34
		::UnityEngine::Color WaterColor; // 0x38
		::RPG::Client::TerrianSurfaceInfo* terrainChannelR; // 0x48
		::RPG::Client::TerrianSurfaceInfo* terrainChannelG; // 0x50
		::System::Int32 terrainTextureNameHash; // 0x58
		::Il2CppArray<::System::Byte>* Field_5_11; // 0x60
		::Il2CppArray<::RPG::Client::TerrianSurfaceInfo*>* Field_5_12; // 0x68
		::System::Int32 Field_5_13; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSURFACEINFO__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::SurfaceType GetSurfaceType(::System::Int32 a1)
		{
			return ((::RPG::GameCore::SurfaceType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSURFACEINFO_GETSURFACETYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableSeaLevelAltitude()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSURFACEINFO_GET_ENABLESEALEVELALTITUDE_OFFSET))(this);
		}

		::System::Single get_GetSeaLevelAltitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSURFACEINFO_GET_GETSEALEVELALTITUDE_OFFSET))(this);
		}

		::UnityEngine::Color get_SeaColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSURFACEINFO_GET_SEACOLOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSURFACEINFO_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSURFACEINFO_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSURFACEINFO_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean Method_5_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSURFACEINFO_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
		}
	};
}
