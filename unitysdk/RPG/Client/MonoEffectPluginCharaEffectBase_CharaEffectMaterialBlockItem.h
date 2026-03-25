#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CommonEffectMatBlockType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CHARAEFFECTMATERIALBLOCKITEM_METHOD_1_40AF2F11955B0F70_OFFSET UNITYSDK_OFFSET(0x9CA2C30)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CHARAEFFECTMATERIALBLOCKITEM_METHOD_1_A3C617F1A916563F_OFFSET UNITYSDK_OFFSET(0x9CA1350)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CHARAEFFECTMATERIALBLOCKITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9CA35C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaEffectBase_CharaEffectMaterialBlockItem_TypeDefinitionIndex = 57215;

	class MonoEffectPluginCharaEffectBase_CharaEffectMaterialBlockItem : public ::System::Object
	{
	public:
		::System::String* PropertyName; // 0x10
		::RPG::Client::CommonEffectMatBlockType DataType; // 0x18
		::System::Single FloatData; // 0x1C
		::System::Single AdaptFloatData; // 0x20
		::UnityEngine::Vector4 VectorData; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CHARAEFFECTMATERIALBLOCKITEM__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_40AF2F11955B0F70(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CHARAEFFECTMATERIALBLOCKITEM_METHOD_1_40AF2F11955B0F70_OFFSET))(this, a1);
		}

		::System::Void Method_1_A3C617F1A916563F(::UnityEngine::Material* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE_CHARAEFFECTMATERIALBLOCKITEM_METHOD_1_A3C617F1A916563F_OFFSET))(this, a1, a2);
		}
	};
}
