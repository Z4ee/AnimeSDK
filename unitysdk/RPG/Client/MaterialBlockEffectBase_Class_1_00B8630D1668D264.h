#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RendererMaterialCache; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_CLASS_1_00B8630D1668D264_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xD67B440)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_CLASS_1_00B8630D1668D264__CTOR_OFFSET UNITYSDK_OFFSET(0xD67A040)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialBlockEffectBase_Class_1_00B8630D1668D264_TypeDefinitionIndex = 70614;

	class MaterialBlockEffectBase_Class_1_00B8630D1668D264 : public ::System::Object
	{
	public:
		::System::String* BOMIJODMJOE; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* BIEBFDCAFOP; // 0x18
		::UnityEngine::MaterialPropertyBlock* OOFKPGNKMJK; // 0x20
		::UnityEngine::Renderer* NDACGJCNDFF; // 0x28
		::RPG::Client::RendererMaterialCache* KFEPMPHNMPG; // 0x30
		::UnityEngine::Material* FNJBFPALOAO; // 0x38
		::System::Int32 MEOADCBLHLH; // 0x40

		::System::Void _ctor(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_CLASS_1_00B8630D1668D264__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_0865E94460F11643()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_CLASS_1_00B8630D1668D264_METHOD_1_0865E94460F11643_OFFSET))(this);
		}
	};
}
