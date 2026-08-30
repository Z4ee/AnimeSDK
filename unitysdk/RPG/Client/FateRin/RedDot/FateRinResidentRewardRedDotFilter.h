#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1354;
class Class_1_96586C089CD5CA69;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_REDDOT_FATERINRESIDENTREWARDREDDOTFILTER_GETSUBKEYS_OFFSET UNITYSDK_OFFSET(0xD00F430)
#define RPG_CLIENT_FATERIN_REDDOT_FATERINRESIDENTREWARDREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xD00F3B0)

namespace RPG::Client::FateRin::RedDot
{
	inline static constexpr unsigned int FateRinResidentRewardRedDotFilter_TypeDefinitionIndex = 79417;

	class FateRinResidentRewardRedDotFilter : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_1354* _Repository; // 0x10
		::Class_1_96586C089CD5CA69* _ChallengeService; // 0x18

		::System::Void _ctor(::Class_1_96586C089CD5CA69* a1, ::Class_0_16E4307DCC419505_1354* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_96586C089CD5CA69*, ::Class_0_16E4307DCC419505_1354*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REDDOT_FATERINRESIDENTREWARDREDDOTFILTER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void GetSubKeys(::System::Collections::Generic::List_1<::System::UInt32>*& a1, ::System::Collections::Generic::List_1<::System::UInt32>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*&, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REDDOT_FATERINRESIDENTREWARDREDDOTFILTER_GETSUBKEYS_OFFSET))(this, a1, a2);
		}
	};
}
