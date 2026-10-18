#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Rendering { class SDFBoundsData; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }

#define RPG_SIMPRTX_BAKEDSDFPREFABDATA_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xE87FDB0)
#define RPG_SIMPRTX_BAKEDSDFPREFABDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE87FE20)

namespace RPG::SimpRTX
{
	inline static constexpr unsigned int BakedSDFPrefabData_TypeDefinitionIndex = 51775;

	class BakedSDFPrefabData : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* sourcePrefab; // 0x10
		::UnityEngine::Texture2D* sdfAtlasTexture; // 0x18
		::RPG::Rendering::SDFBoundsData* sdfBoundsData; // 0x20
		::UnityEngine::Texture2D* surfaceCardInfo; // 0x28
		::UnityEngine::Texture2D* surfaceCardAtlas; // 0x30
		::System::Int32 cardInfoTexWidth; // 0x38
		::System::Int32 cardInfoTexHeight; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SIMPRTX_BAKEDSDFPREFABDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SIMPRTX_BAKEDSDFPREFABDATA_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
		}
	};
}
