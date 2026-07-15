#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FantasticStoryBuffSlotRow; }

#define RPG_CLIENT_FANTASTICSTORYBUFFSLOTDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x196E5E40)
#define RPG_CLIENT_FANTASTICSTORYBUFFSLOTDATA_GET_UNLOCKCHAPTERID_OFFSET UNITYSDK_OFFSET(0x196E81C0)
#define RPG_CLIENT_FANTASTICSTORYBUFFSLOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x196E4DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int FantasticStoryBuffSlotData_TypeDefinitionIndex = 61058;

	class FantasticStoryBuffSlotData : public ::System::Object
	{
	public:
		::RPG::GameCore::FantasticStoryBuffSlotRow* Row; // 0x10
		::System::UInt32 SlotID; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYBUFFSLOTDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYBUFFSLOTDATA_GET_UNLOCKCHAPTERID_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYBUFFSLOTDATA_GET_ISUNLOCK_OFFSET))(this);
		}
	};
}
