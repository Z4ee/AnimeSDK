#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CommonEffectMatBlockType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM_METHOD_1_0F76D2A38DFBC84F_OFFSET UNITYSDK_OFFSET(0xA99C650)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM_METHOD_1_8C7BB7482AA9590F_OFFSET UNITYSDK_OFFSET(0xA99C840)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA99C9B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginProgress_ModifyMaterialParam_TypeDefinitionIndex = 64622;

	class MonoEffectPluginProgress_ModifyMaterialParam : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* TargetRender; // 0x10
		::System::Int32 TargetMaterialIndex; // 0x18
		::RPG::Client::CommonEffectMatBlockType DataType; // 0x1C
		::System::String* PropertyName; // 0x20
		::System::Single FloatDataOnBegin; // 0x28
		::System::Single FloatDataOnEnd; // 0x2C
		::UnityEngine::Color ColorDataOnBegin; // 0x30
		::UnityEngine::Color ColorDataOnEnd; // 0x40
		::UnityEngine::Vector4 VectorDataOnBegin; // 0x50
		::UnityEngine::Vector4 VectorDataOnEnd; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_0F76D2A38DFBC84F(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM_METHOD_1_0F76D2A38DFBC84F_OFFSET))(this, a1);
		}

		::System::Void Method_1_8C7BB7482AA9590F(::UnityEngine::Material* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYMATERIALPARAM_METHOD_1_8C7BB7482AA9590F_OFFSET))(this, a1, a2);
		}
	};
}
