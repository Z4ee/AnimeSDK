#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RendererMaterialCache; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_CLASS_1_00B8630D1668D264_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x9B71270)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_CLASS_1_00B8630D1668D264__CTOR_OFFSET UNITYSDK_OFFSET(0x9B70170)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialBlockEffectBase_Class_1_00B8630D1668D264_TypeDefinitionIndex = 57852;

	class MaterialBlockEffectBase_Class_1_00B8630D1668D264 : public ::System::Object
	{
	public:
		::UnityEngine::MaterialPropertyBlock* Field_1_3; // 0x10
		::UnityEngine::Renderer* Field_1_0; // 0x18
		::UnityEngine::Material* Field_1_5; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* Field_1_6; // 0x28
		::System::String* Field_1_1; // 0x30
		::RPG::Client::RendererMaterialCache* Field_1_4; // 0x38
		::System::Int32 Field_1_2; // 0x40

		::System::Void _ctor(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_CLASS_1_00B8630D1668D264__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_CLASS_1_00B8630D1668D264_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
		}
	};
}
