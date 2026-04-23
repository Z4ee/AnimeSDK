#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AdventureGameplayLock.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_CLIENT_ADVENTUREGAMEPLAYLOCKWITHDELAY_METHOD_4_38EF2DF33254A0BF_OFFSET UNITYSDK_OFFSET(0x185E3D50)
#define RPG_CLIENT_ADVENTUREGAMEPLAYLOCKWITHDELAY_METHOD_4_B20391A191C34184_OFFSET UNITYSDK_OFFSET(0x185E3F70)
#define RPG_CLIENT_ADVENTUREGAMEPLAYLOCKWITHDELAY__CTOR_OFFSET UNITYSDK_OFFSET(0x185E3D20)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureGameplayLockWithDelay_TypeDefinitionIndex = 10156;

	class AdventureGameplayLockWithDelay : public ::RPG::Client::AdventureGameplayLock
	{
	public:
		::System::Single UnScaleDelay; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDelayTrigger; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREGAMEPLAYLOCKWITHDELAY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B20391A191C34184(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::AdventureGameplayLockWithDelay*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::AdventureGameplayLockWithDelay*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREGAMEPLAYLOCKWITHDELAY_METHOD_4_B20391A191C34184_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_38EF2DF33254A0BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::AdventureGameplayLockWithDelay* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::AdventureGameplayLockWithDelay*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREGAMEPLAYLOCKWITHDELAY_METHOD_4_38EF2DF33254A0BF_OFFSET))(a1, a2);
		}
	};
}
