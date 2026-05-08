#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EffectPattern/MonoEffectSoDataBase.h"

namespace MoleMole::Config::EffectPattern { class MonoEffectPluginFollowSoData_New_ValueDictWrapper; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_EFFECTPATTERN_MONOEFFECTPLUGINFOLLOWSODATA_NEW_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D2B960)
#define MOLEMOLE_CONFIG_EFFECTPATTERN_MONOEFFECTPLUGINFOLLOWSODATA_NEW_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D2BBC0)
#define MOLEMOLE_CONFIG_EFFECTPATTERN_MONOEFFECTPLUGINFOLLOWSODATA_NEW__CTOR_OFFSET UNITYSDK_OFFSET(0x17D2BE80)

namespace MoleMole::Config::EffectPattern
{
	inline static constexpr unsigned int MonoEffectPluginFollowSoData_New_TypeDefinitionIndex = 76185;

	class MonoEffectPluginFollowSoData_New : public ::MoleMole::Config::EffectPattern::MonoEffectSoDataBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::EffectPattern::MonoEffectPluginFollowSoData_New_ValueDictWrapper*>* unAttachAnimatorLayerStateDict; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* unAttachAnimatorLayerStateDict_Keys; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::EffectPattern::MonoEffectPluginFollowSoData_New_ValueDictWrapper*>* unAttachAnimatorLayerStateDict_Values; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTPATTERN_MONOEFFECTPLUGINFOLLOWSODATA_NEW__CTOR_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTPATTERN_MONOEFFECTPLUGINFOLLOWSODATA_NEW_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTPATTERN_MONOEFFECTPLUGINFOLLOWSODATA_NEW_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
