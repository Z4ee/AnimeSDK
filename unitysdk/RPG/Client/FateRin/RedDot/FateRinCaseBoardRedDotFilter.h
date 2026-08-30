#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1350;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_REDDOT_FATERINCASEBOARDREDDOTFILTER_GETTEAMDETAILSUBKEYS_OFFSET UNITYSDK_OFFSET(0x1B5AF720)
#define RPG_CLIENT_FATERIN_REDDOT_FATERINCASEBOARDREDDOTFILTER_ISMAINPAGENEW_OFFSET UNITYSDK_OFFSET(0x1B5AF770)
#define RPG_CLIENT_FATERIN_REDDOT_FATERINCASEBOARDREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5AF6D0)

namespace RPG::Client::FateRin::RedDot
{
	inline static constexpr unsigned int FateRinCaseBoardRedDotFilter_TypeDefinitionIndex = 79412;

	class FateRinCaseBoardRedDotFilter : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_1350* _RedDotService; // 0x10

		::System::Void _ctor(::Class_0_16E4307DCC419505_1350* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1350*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REDDOT_FATERINCASEBOARDREDDOTFILTER__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetTeamDetailSubKeys()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REDDOT_FATERINCASEBOARDREDDOTFILTER_GETTEAMDETAILSUBKEYS_OFFSET))(this);
		}

		::System::Boolean IsMainPageNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REDDOT_FATERINCASEBOARDREDDOTFILTER_ISMAINPAGENEW_OFFSET))(this);
		}
	};
}
