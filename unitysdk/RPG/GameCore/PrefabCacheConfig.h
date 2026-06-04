#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PREFABCACHECONFIG_METHOD_2_105FC9DAB7076BB2_OFFSET UNITYSDK_OFFSET(0x19A81540)
#define RPG_GAMECORE_PREFABCACHECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19A81620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PrefabCacheConfig_TypeDefinitionIndex = 23082;

	class PrefabCacheConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* cache_config; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREFABCACHECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_105FC9DAB7076BB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PrefabCacheConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PrefabCacheConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREFABCACHECONFIG_METHOD_2_105FC9DAB7076BB2_OFFSET))(a1, a2);
		}
	};
}
