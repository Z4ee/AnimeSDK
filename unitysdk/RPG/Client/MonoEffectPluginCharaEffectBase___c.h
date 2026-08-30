#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffectPluginCharaEffectBase; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD78F330)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD78F360)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE___C___CTOR_B__149_0_OFFSET UNITYSDK_OFFSET(0xD78F370)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaEffectBase___c_TypeDefinitionIndex = 69910;

	class MonoEffectPluginCharaEffectBase___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::MonoEffectPluginCharaEffectBase*>** StaticGet___9__149_0()
		{
			return (::System::Comparison_1<::RPG::Client::MonoEffectPluginCharaEffectBase*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaEffectBase___c_TypeDefinitionIndex)->GetStaticField(0xECA0);
		}
		static ::RPG::Client::MonoEffectPluginCharaEffectBase___c** StaticGet___9()
		{
			return (::RPG::Client::MonoEffectPluginCharaEffectBase___c**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaEffectBase___c_TypeDefinitionIndex)->GetStaticField(0xECA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__149_0(::RPG::Client::MonoEffectPluginCharaEffectBase* a1, ::RPG::Client::MonoEffectPluginCharaEffectBase* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonoEffectPluginCharaEffectBase*, ::RPG::Client::MonoEffectPluginCharaEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAEFFECTBASE___C___CTOR_B__149_0_OFFSET))(this, a1, a2);
		}
	};
}
