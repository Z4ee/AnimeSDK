#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BATTLESTAGECONFIG_METHOD_2_E47ED9A0CE93B675_OFFSET UNITYSDK_OFFSET(0x194D88E0)
#define RPG_GAMECORE_BATTLESTAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x194D8A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleStageConfig_TypeDefinitionIndex = 15580;

	class BattleStageConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StateGroup; // 0x10
		::System::String* DefaultState; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* StageStates; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESTAGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E47ED9A0CE93B675(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleStageConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleStageConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESTAGECONFIG_METHOD_2_E47ED9A0CE93B675_OFFSET))(a1, a2);
		}
	};
}
