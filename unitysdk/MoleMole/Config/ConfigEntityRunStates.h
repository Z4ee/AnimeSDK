#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/AnimMoveState.h"

namespace MoleMole::Config { class ConfigEntityRunState; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES__CTOR_OFFSET UNITYSDK_OFFSET(0x12307C60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityRunStates_TypeDefinitionIndex = 40061;

	class ConfigEntityRunStates : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::System::String*>* KeyDict; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityRunState*>* RunStates; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES__CTOR_OFFSET))(this);
		}
	};
}
