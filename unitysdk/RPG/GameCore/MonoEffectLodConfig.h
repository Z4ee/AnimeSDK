#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonoEffectLodDetail; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONOEFFECTLODCONFIG_METHOD_2_530496350C1F94D0_OFFSET UNITYSDK_OFFSET(0x17435E40)
#define RPG_GAMECORE_MONOEFFECTLODCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17435F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonoEffectLodConfig_TypeDefinitionIndex = 17490;

	class MonoEffectLodConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MonoEffectLodDetail*>* MonoEffectLODDetailMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOEFFECTLODCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_530496350C1F94D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonoEffectLodConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonoEffectLodConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOEFFECTLODCONFIG_METHOD_2_530496350C1F94D0_OFFSET))(a1, a2);
		}
	};
}
