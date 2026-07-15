#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfBehaviorData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ELFBEHAVIORINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18E19C90)
#define RPG_CLIENT_ELFBEHAVIORINFO_INIT_OFFSET UNITYSDK_OFFSET(0x18E19990)
#define RPG_CLIENT_ELFBEHAVIORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18E19D30)
#define RPG_CLIENT_ELFBEHAVIORINFO__INITBEHAVIORDATA_OFFSET UNITYSDK_OFFSET(0x18E199E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfBehaviorInfo_TypeDefinitionIndex = 60865;

	class ElfBehaviorInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfBehaviorData*>* _BehaviorDataDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFBEHAVIORINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFBEHAVIORINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFBEHAVIORINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void _InitBehaviorData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFBEHAVIORINFO__INITBEHAVIORDATA_OFFSET))(this);
		}
	};
}
