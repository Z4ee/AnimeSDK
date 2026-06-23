#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace Sirenix::Utilities { class GlobalConfigAttribute; }
namespace System { class String; }

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int GlobalConfig_1_TypeDefinitionIndex = 6489;

	template <typename T>
	class GlobalConfig_1 : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::Sirenix::Utilities::GlobalConfigAttribute** StaticGet_configAttribute()
		{
			return (::Sirenix::Utilities::GlobalConfigAttribute**)Il2CppClass::FromTypeDefinitionIndex(GlobalConfig_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static T* StaticGet_instance()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(GlobalConfig_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
