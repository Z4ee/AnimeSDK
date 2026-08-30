#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TutorialGuideTextConfigWrapper.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_TUTORIALGUIDEWEAKCONFIGWRAPPER_GET_LIFETIME_OFFSET UNITYSDK_OFFSET(0xE300FA0)
#define RPG_CLIENT_TUTORIALGUIDEWEAKCONFIGWRAPPER_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0xE300FB0)
#define RPG_CLIENT_TUTORIALGUIDEWEAKCONFIGWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0xE2FB4D0)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialGuideWeakConfigWrapper_TypeDefinitionIndex = 68201;

	class TutorialGuideWeakConfigWrapper : public ::RPG::Client::TutorialGuideTextConfigWrapper
	{
	public:
		::System::Single _LifeTime_k__BackingField; // 0x68

		::System::Void _ctor(::System::Collections::Generic::IList_1<::System::String*>* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::String*>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEWEAKCONFIGWRAPPER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single get_LifeTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEWEAKCONFIGWRAPPER_GET_LIFETIME_OFFSET))(this);
		}

		::System::Void set_LifeTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEWEAKCONFIGWRAPPER_SET_LIFETIME_OFFSET))(this, a1);
		}
	};
}
