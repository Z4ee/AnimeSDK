#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffectPluginNumber_TilingData; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINNUMBER_RENDERERDIGITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19131ED0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginNumber_RendererDigitData_TypeDefinitionIndex = 66944;

	class MonoEffectPluginNumber_RendererDigitData : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* TargetRenderer; // 0x10
		::Il2CppArray<::RPG::Client::MonoEffectPluginNumber_TilingData*>* Tilings; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINNUMBER_RENDERERDIGITDATA__CTOR_OFFSET))(this);
		}
	};
}
