#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_NOTIFYFARMUNLOCK_METHOD_3_2706F263F88A985A_OFFSET UNITYSDK_OFFSET(0x1D8DAA30)
#define RPG_GAMECORE_NOTIFYFARMUNLOCK_METHOD_3_2AA13524BB0FDCB7_OFFSET UNITYSDK_OFFSET(0x1D8DA960)
#define RPG_GAMECORE_NOTIFYFARMUNLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DAA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NotifyFarmUnlock_TypeDefinitionIndex = 21958;

	class NotifyFarmUnlock : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYFARMUNLOCK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2AA13524BB0FDCB7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NotifyFarmUnlock*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NotifyFarmUnlock*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYFARMUNLOCK_METHOD_3_2AA13524BB0FDCB7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2706F263F88A985A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NotifyFarmUnlock* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NotifyFarmUnlock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYFARMUNLOCK_METHOD_3_2706F263F88A985A_OFFSET))(a1, a2);
		}
	};
}
