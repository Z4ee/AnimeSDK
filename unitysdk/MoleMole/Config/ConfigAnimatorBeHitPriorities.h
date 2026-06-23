#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/AnimatorBeHitTag.h"

namespace MoleMole { class AniamtorParamsSetting; }
namespace MoleMole::Config { class BaseConfigAnimatorBeHitPriority; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGANIMATORBEHITPRIORITIES__CTOR_OFFSET UNITYSDK_OFFSET(0x18F2EEA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAnimatorBeHitPriorities_TypeDefinitionIndex = 52153;

	class ConfigAnimatorBeHitPriorities : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Boolean UseAnimatorBeHitPriority; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::Config::BaseConfigAnimatorBeHitPriority*>* Items; // 0x60
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimatorBeHitTag, ::MoleMole::AniamtorParamsSetting*>* AnimatorBeHitAniamtorParams; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORBEHITPRIORITIES__CTOR_OFFSET))(this);
		}
	};
}
