#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class ShellFurRendererBehavior; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_SHELLFURRENDERERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xC8BF440)

namespace RPG::Client
{
	inline static constexpr unsigned int ShellFurRendererMonoPlugin_TypeDefinitionIndex = 66326;

	class ShellFurRendererMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::ShellFurRendererBehavior*>
	{
	public:
		::System::Int32 ExampleProperty; // 0x30
		::UnityEngine::GameObject* Target; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* RendererSubMesh; // 0x40
		::System::Int32 LayerCount; // 0x48
		::System::Single FurLength; // 0x4C
		::System::Single DitherStrength; // 0x50
		::System::Boolean UseVertexWind; // 0x54
		::UnityEngine::Vector4 WindDir; // 0x58
		::UnityEngine::Vector2 WindScale; // 0x68
		::UnityEngine::Vector2 WindSpeed; // 0x70
		::UnityEngine::Texture2D* FurDetailMap; // 0x78
		::UnityEngine::Vector4 FurDetailMap_ST; // 0x80
		::UnityEngine::Texture2D* MainTex; // 0x90
		::UnityEngine::Vector4 MainTex_ST; // 0x98
		::UnityEngine::Texture2D* FurMaskTex; // 0xA8
		::UnityEngine::Vector4 FurMaskTex_ST; // 0xB0
		::UnityEngine::Color TopColor; // 0xC0
		::UnityEngine::Color RootColor; // 0xD0
		::System::Single Smoothness; // 0xE0
		::System::Single RootSmoothnessScale; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
