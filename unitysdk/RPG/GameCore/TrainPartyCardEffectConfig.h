#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainPartyActionConfigBase; }

#define RPG_GAMECORE_TRAINPARTYCARDEFFECTCONFIG_METHOD_2_4968D65E0325ED76_OFFSET UNITYSDK_OFFSET(0x178A9950)
#define RPG_GAMECORE_TRAINPARTYCARDEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178A9A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCardEffectConfig_TypeDefinitionIndex = 16593;

	class TrainPartyCardEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TrainPartyActionConfigBase*>* ActionList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCARDEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4968D65E0325ED76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCardEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCardEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCARDEFFECTCONFIG_METHOD_2_4968D65E0325ED76_OFFSET))(a1, a2);
		}
	};
}
