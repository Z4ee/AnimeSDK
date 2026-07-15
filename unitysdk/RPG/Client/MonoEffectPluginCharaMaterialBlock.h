#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CommonEffectMatBlockType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class MonoEffectPluginCompoundMaterialBlock; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAMATERIALBLOCK_APPLY_1_OFFSET UNITYSDK_OFFSET(0x10D0BB20)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAMATERIALBLOCK_APPLY_OFFSET UNITYSDK_OFFSET(0x10D0B950)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAMATERIALBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x10D0D2C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaMaterialBlock_TypeDefinitionIndex = 66810;

	class MonoEffectPluginCharaMaterialBlock : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* PropertyName; // 0x18
		::RPG::Client::CommonEffectMatBlockType DataType; // 0x20
		::System::Single FloatData; // 0x24
		::UnityEngine::Color ColorData; // 0x28
		::UnityEngine::Vector4 VectorData; // 0x38
		::RPG::Client::MonoEffectPluginCompoundMaterialBlock* CompoundData; // 0x48
		::UnityEngine::MaterialPropertyBlock* Field_5_6; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAMATERIALBLOCK__CTOR_OFFSET))(this);
		}

		::System::Void Apply(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAMATERIALBLOCK_APPLY_OFFSET))(this, a1);
		}

		::System::Void Apply_1(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::UnityEngine::MaterialPropertyBlock* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAMATERIALBLOCK_APPLY_1_OFFSET))(this, a1, a2, a3);
		}
	};
}
