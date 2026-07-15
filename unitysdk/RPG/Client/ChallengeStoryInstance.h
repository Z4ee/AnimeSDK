#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeInstance.h"

class Class_1_3AD2528CD53B1639_1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGESTORYINSTANCE_SETUPLOADINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x191FAE30)
#define RPG_CLIENT_CHALLENGESTORYINSTANCE__CALCISNEWRECORD_OFFSET UNITYSDK_OFFSET(0x191FAD60)
#define RPG_CLIENT_CHALLENGESTORYINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x191D7600)
#define RPG_CLIENT_CHALLENGESTORYINSTANCE__SYNCEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x191FA890)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeStoryInstance_TypeDefinitionIndex = 60365;

	class ChallengeStoryInstance : public ::RPG::Client::ChallengeInstance
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* BuffList; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYINSTANCE__CTOR_OFFSET))(this);
		}

		::System::Void _SyncExtraInfo(::Class_1_3AD2528CD53B1639_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYINSTANCE__SYNCEXTRAINFO_OFFSET))(this, a1);
		}

		::System::Void _CalcIsNewRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYINSTANCE__CALCISNEWRECORD_OFFSET))(this);
		}

		::System::Void SetupLoadingStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYINSTANCE_SETUPLOADINGSTRATEGY_OFFSET))(this);
		}
	};
}
