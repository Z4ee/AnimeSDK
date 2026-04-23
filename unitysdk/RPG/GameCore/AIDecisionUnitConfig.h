#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AIDecisionConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_AIDECISIONUNITCONFIG_METHOD_2_8041018F8B09F88A_OFFSET UNITYSDK_OFFSET(0x185F0B40)
#define RPG_GAMECORE_AIDECISIONUNITCONFIG_METHOD_2_8BF179249F8F388F_OFFSET UNITYSDK_OFFSET(0x185F0920)
#define RPG_GAMECORE_AIDECISIONUNITCONFIG_METHOD_2_A8688DF3C9A1BF17_OFFSET UNITYSDK_OFFSET(0x185F0AE0)
#define RPG_GAMECORE_AIDECISIONUNITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x185F0750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIDecisionUnitConfig_TypeDefinitionIndex = 14647;

	class AIDecisionUnitConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONUNITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8BF179249F8F388F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIDecisionUnitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIDecisionUnitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONUNITCONFIG_METHOD_2_8BF179249F8F388F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_A8688DF3C9A1BF17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIDecisionUnitConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIDecisionUnitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONUNITCONFIG_METHOD_2_A8688DF3C9A1BF17_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AIDecisionConfig*>* Method_2_8041018F8B09F88A()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AIDecisionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONUNITCONFIG_METHOD_2_8041018F8B09F88A_OFFSET))(this);
		}
	};
}
