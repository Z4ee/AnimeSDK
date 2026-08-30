#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace RPG::ScreenSpaceRayTracing { class BakedSDFInstanceData; }
namespace RPG::ScreenSpaceRayTracing { class BakedSDFPrefabData; }

#define CLASS_1_219A2BF3D10728EC_CLASS_1_A1EA126D8FCCA821__CTOR_OFFSET UNITYSDK_OFFSET(0x1871DEC0)

inline static constexpr unsigned int Class_1_219A2BF3D10728EC_Class_1_A1EA126D8FCCA821_TypeDefinitionIndex = 52077;

class Class_1_219A2BF3D10728EC_Class_1_A1EA126D8FCCA821 : public ::System::Object
{
public:
	::RPG::ScreenSpaceRayTracing::BakedSDFInstanceData* HPEJFCFEBOC; // 0x10
	::RPG::ScreenSpaceRayTracing::BakedSDFPrefabData* LBJMDNADHLN; // 0x18
	::System::Int32 NOIEMNLMACN; // 0x20
	::UnityEngine::Bounds EDEIGBBIMGM; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_219A2BF3D10728EC_CLASS_1_A1EA126D8FCCA821__CTOR_OFFSET))(this);
	}
};
