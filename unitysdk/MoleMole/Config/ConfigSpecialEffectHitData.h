#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/AnimatorBeHitTag.h"

namespace MoleMole::Config { class ConfigSpecialEffectHitData_SpecialHitEffectMapItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA63030)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSpecialEffectHitData_TypeDefinitionIndex = 83733;

	class ConfigSpecialEffectHitData : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimatorBeHitTag, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSpecialEffectHitData_SpecialHitEffectMapItem*>*>* specialHitEffectLists; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITDATA__CTOR_OFFSET))(this);
		}
	};
}
