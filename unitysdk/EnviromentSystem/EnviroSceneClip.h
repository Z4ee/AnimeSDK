#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroSceneClip_ReflectionProbeData.h"
#include "unitysdk/EnviromentSystem/EnviroSceneClip_Struct_2_9A41477451EC28A3.h"
#include "unitysdk/EnviromentSystem/EnviromentClip.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ReflectionProbe; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }

#define ENVIROMENTSYSTEM_ENVIROSCENECLIP_METHOD_2_11C61C26889D4FC4_OFFSET UNITYSDK_OFFSET(0x135B6880)
#define ENVIROMENTSYSTEM_ENVIROSCENECLIP_METHOD_2_6C79D4B046F2D11A_OFFSET UNITYSDK_OFFSET(0x135B4A10)
#define ENVIROMENTSYSTEM_ENVIROSCENECLIP_METHOD_2_BA78F91931F4B77B_OFFSET UNITYSDK_OFFSET(0x135B6220)
#define ENVIROMENTSYSTEM_ENVIROSCENECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x135B4AF0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroSceneClip_TypeDefinitionIndex = 46756;

	class EnviroSceneClip : public ::EnviromentSystem::EnviromentClip
	{
	public:
		::Il2CppArray<::System::Int32>* Idremap; // 0x30
		::Il2CppArray<::UnityEngine::Vector4>* BakedScaleOffset; // 0x38
		::Il2CppArray<::System::Int32>* BakedIDs; // 0x40
		::UnityEngine::Matrix4x4 BakedShadowMapIVP; // 0x48
		::System::Int32 BakedShadowMapSize; // 0x88
		::Il2CppArray<::EnviromentSystem::EnviroSceneClip_ReflectionProbeData>* ReflectionProbeDatas; // 0x90
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroSceneClip_Struct_2_9A41477451EC28A3>* _GlobalMapsAdditional; // 0x98
		::System::Collections::Generic::List_1<::System::Int32>* _LightmapRefCount; // 0xA0
		::UnityEngine::Texture2D* _bakedShadowMapTex; // 0xA8
		::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>* _AssetOptList; // 0xB0
		::Il2CppArray<::System::String*>* CubePath; // 0xB8
		::System::String* BakedShadowMapTexPath; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROSCENECLIP__CTOR_OFFSET))(this);
		}

		static ::EnviromentSystem::EnviroSceneClip* Method_2_6C79D4B046F2D11A(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::EnviromentSystem::EnviroSceneClip*(*)(::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROSCENECLIP_METHOD_2_6C79D4B046F2D11A_OFFSET))(a1);
		}

		::System::Void Method_2_BA78F91931F4B77B(::Il2CppArray<::UnityEngine::Renderer*>* a1, ::Il2CppArray<::UnityEngine::ReflectionProbe*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*, ::Il2CppArray<::UnityEngine::ReflectionProbe*>*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROSCENECLIP_METHOD_2_BA78F91931F4B77B_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_11C61C26889D4FC4(::Il2CppArray<::UnityEngine::ReflectionProbe*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ReflectionProbe*>*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROSCENECLIP_METHOD_2_11C61C26889D4FC4_OFFSET))(this, a1);
		}
	};
}
