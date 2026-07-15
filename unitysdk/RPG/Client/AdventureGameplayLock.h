#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_ADVENTUREGAMEPLAYLOCK_METHOD_3_1251ABBEE9F4DFE8_OFFSET UNITYSDK_OFFSET(0x1B9E22E0)
#define RPG_CLIENT_ADVENTUREGAMEPLAYLOCK_METHOD_3_6704C83E8C4AC8B9_OFFSET UNITYSDK_OFFSET(0x1B9E2180)
#define RPG_CLIENT_ADVENTUREGAMEPLAYLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E22D0)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureGameplayLock_TypeDefinitionIndex = 9971;

	class AdventureGameplayLock : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsLock; // 0x18
		::RPG::Client::LockSource LockSource; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREGAMEPLAYLOCK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6704C83E8C4AC8B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::AdventureGameplayLock*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::AdventureGameplayLock*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREGAMEPLAYLOCK_METHOD_3_6704C83E8C4AC8B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1251ABBEE9F4DFE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::AdventureGameplayLock* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::AdventureGameplayLock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREGAMEPLAYLOCK_METHOD_3_1251ABBEE9F4DFE8_OFFSET))(a1, a2);
		}
	};
}
