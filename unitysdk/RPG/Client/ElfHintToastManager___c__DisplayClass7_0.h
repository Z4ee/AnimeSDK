#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfProfileQuestGroupData; }
namespace RPG::Client { template <typename T> class PrefHashSet_1; }

#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA240550)
#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS7_0___CHECKPROFILERHINTS_B__0_OFFSET UNITYSDK_OFFSET(0xA240560)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfHintToastManager___c__DisplayClass7_0_TypeDefinitionIndex = 58698;

	class ElfHintToastManager___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::Client::PrefHashSet_1<::System::UInt32>* seenGroups; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __CheckProfilerHints_b__0(::RPG::Client::ElfProfileQuestGroupData* questGroup)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ElfProfileQuestGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS7_0___CHECKPROFILERHINTS_B__0_OFFSET))(this, questGroup);
		}
	};
}
