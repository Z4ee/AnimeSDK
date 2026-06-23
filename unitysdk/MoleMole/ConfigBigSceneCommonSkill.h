#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/BigSceneCommonSkillConfig.h"

namespace Foundation::Unreal { class SerializableGameplayTag; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGBIGSCENECOMMONSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x170D0650)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigBigSceneCommonSkill_TypeDefinitionIndex = 85722;

	class ConfigBigSceneCommonSkill : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Foundation::Unreal::SerializableGameplayTag*, ::MoleMole::BigSceneCommonSkillConfig>* SkillConfigs; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBIGSCENECOMMONSKILL__CTOR_OFFSET))(this);
		}
	};
}
