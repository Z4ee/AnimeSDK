#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_COMPONENTDELAYEDTICKCONFIG_METHOD_2_E80F641A58A4771E_OFFSET UNITYSDK_OFFSET(0x1CFF6E90)
#define RPG_GAMECORE_COMPONENTDELAYEDTICKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF7010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComponentDelayedTickConfig_TypeDefinitionIndex = 16394;

	class ComponentDelayedTickConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* ConfigTickTime; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* ConfigLateUpdateTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPONENTDELAYEDTICKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E80F641A58A4771E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComponentDelayedTickConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComponentDelayedTickConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPONENTDELAYEDTICKCONFIG_METHOD_2_E80F641A58A4771E_OFFSET))(a1, a2);
		}
	};
}
