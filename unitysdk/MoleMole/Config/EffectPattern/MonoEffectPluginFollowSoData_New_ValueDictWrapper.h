#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_EFFECTPATTERN_MONOEFFECTPLUGINFOLLOWSODATA_NEW_VALUEDICTWRAPPER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x124323A0)
#define MOLEMOLE_CONFIG_EFFECTPATTERN_MONOEFFECTPLUGINFOLLOWSODATA_NEW_VALUEDICTWRAPPER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12432610)
#define MOLEMOLE_CONFIG_EFFECTPATTERN_MONOEFFECTPLUGINFOLLOWSODATA_NEW_VALUEDICTWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x124328F0)

namespace MoleMole::Config::EffectPattern
{
	inline static constexpr unsigned int MonoEffectPluginFollowSoData_New_ValueDictWrapper_TypeDefinitionIndex = 76186;

	class MonoEffectPluginFollowSoData_New_ValueDictWrapper : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AnimatorStateTimeSegment*>* dict; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* dict_Keys; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>* dict_Values; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTPATTERN_MONOEFFECTPLUGINFOLLOWSODATA_NEW_VALUEDICTWRAPPER__CTOR_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTPATTERN_MONOEFFECTPLUGINFOLLOWSODATA_NEW_VALUEDICTWRAPPER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTPATTERN_MONOEFFECTPLUGINFOLLOWSODATA_NEW_VALUEDICTWRAPPER_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
