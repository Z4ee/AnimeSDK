#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityScoreType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ENTITYSCORECONFIG_METHOD_2_F7C1AA3DF7C157FC_OFFSET UNITYSDK_OFFSET(0x1C056990)
#define RPG_GAMECORE_ENTITYSCORECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C056B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityScoreConfig_TypeDefinitionIndex = 15921;

	class EntityScoreConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single AllEntityMaxScore; // 0x10
		::System::Single DisableAtmoThresholdScore; // 0x14
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EntityScoreType, ::System::Single>* SingleEntityScoreDict; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYSCORECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F7C1AA3DF7C157FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityScoreConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityScoreConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYSCORECONFIG_METHOD_2_F7C1AA3DF7C157FC_OFFSET))(a1, a2);
		}
	};
}
