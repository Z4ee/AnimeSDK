#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FantasticStoryActivityModule; }
namespace RPG::Client { class FantasticStoryBuffData; }

#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA31E9B0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__DISPLAYCLASS38_0__GETSLOTSTAGEBUFFDATA_B__0_OFFSET UNITYSDK_OFFSET(0xA3234F0)

namespace RPG::Client
{
	inline static constexpr unsigned int FantasticStoryActivityModule___c__DisplayClass38_0_TypeDefinitionIndex = 58840;

	class FantasticStoryActivityModule___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::RPG::Client::FantasticStoryActivityModule* __4__this; // 0x10
		::System::UInt32 SlotID; // 0x18
		::System::UInt32 ParagraphID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSlotStageBuffData_b__0(::RPG::Client::FantasticStoryBuffData* a, ::RPG::Client::FantasticStoryBuffData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FantasticStoryBuffData*, ::RPG::Client::FantasticStoryBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__DISPLAYCLASS38_0__GETSLOTSTAGEBUFFDATA_B__0_OFFSET))(this, a, b);
		}
	};
}
