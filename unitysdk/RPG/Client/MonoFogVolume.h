#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoFogVolume_LevelType.h"
#include "unitysdk/RPG/Client/MonoFogVolume_fogType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_2_8DC5AE9AD23DB502;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture3D; }

#define RPG_CLIENT_MONOFOGVOLUME_AWAKE_OFFSET UNITYSDK_OFFSET(0xD82D3A0)
#define RPG_CLIENT_MONOFOGVOLUME_GET_LAST_SAVE_PATH_OFFSET UNITYSDK_OFFSET(0xD82D540)
#define RPG_CLIENT_MONOFOGVOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD82D400)
#define RPG_CLIENT_MONOFOGVOLUME_SAVETOFILE_OFFSET UNITYSDK_OFFSET(0xD82D4D0)
#define RPG_CLIENT_MONOFOGVOLUME_SET_LAST_SAVE_PATH_OFFSET UNITYSDK_OFFSET(0xD82D550)
#define RPG_CLIENT_MONOFOGVOLUME_UPDATE_OFFSET UNITYSDK_OFFSET(0xD82D470)
#define RPG_CLIENT_MONOFOGVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0xD82D590)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoFogVolume_TypeDefinitionIndex = 70755;

	class MonoFogVolume : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean UseMaterial; // 0x18
		::UnityEngine::Material* mat; // 0x20
		::RPG::Client::MonoFogVolume_LevelType m_QualityLevel; // 0x28
		::System::Int32 LightQualityVersion; // 0x2C
		::RPG::Client::MonoFogVolume_fogType m_Type; // 0x30
		::System::Single FogDensity; // 0x34
		::UnityEngine::Color FogColor; // 0x38
		::System::Single EdgeFade; // 0x48
		::System::Boolean UseMeshMask; // 0x4C
		::UnityEngine::Texture3D* MeskMaskTexture; // 0x50
		::System::Single DistanceFade; // 0x58
		::System::Single DistanceFadeExp; // 0x5C
		::System::Single FogStartHeight; // 0x60
		::System::Single _FogFalloff; // 0x64
		::System::Single DensityOffset; // 0x68
		::UnityEngine::Texture3D* ShapeTex; // 0x70
		::UnityEngine::Vector4 BasicShapeTiling; // 0x78
		::System::Single BasicShapeExp; // 0x88
		::System::Single BasicShapeIntensity; // 0x8C
		::System::Single ShapeMin; // 0x90
		::System::Single ShapeMax; // 0x94
		::UnityEngine::Texture3D* DetailTex; // 0x98
		::UnityEngine::Vector4 DetailTiling; // 0xA0
		::System::Single DetailIntensity; // 0xB0
		::System::Single DetailExp; // 0xB4
		::UnityEngine::Vector4 WindDirection; // 0xB8
		::System::Single ShapeSpeed; // 0xC8
		::System::Single DetailSpeed; // 0xCC
		::UnityEngine::GameObject* fogObject; // 0xD0
		::Class_2_8DC5AE9AD23DB502* EIGCKKONNIO; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOGVOLUME__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOGVOLUME_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOGVOLUME_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOGVOLUME_UPDATE_OFFSET))(this);
		}

		::System::Void SaveToFile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOGVOLUME_SAVETOFILE_OFFSET))(this);
		}

		static ::System::String* get_LAST_SAVE_PATH()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOGVOLUME_GET_LAST_SAVE_PATH_OFFSET))();
		}

		static ::System::Void set_LAST_SAVE_PATH(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOGVOLUME_SET_LAST_SAVE_PATH_OFFSET))(a1);
		}
	};
}
