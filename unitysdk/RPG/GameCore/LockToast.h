#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOCKTOAST_METHOD_3_9325E0556C47AFFC_OFFSET UNITYSDK_OFFSET(0x1D486DC0)
#define RPG_GAMECORE_LOCKTOAST_METHOD_3_C9E275CC97E60B77_OFFSET UNITYSDK_OFFSET(0x1D486D80)
#define RPG_GAMECORE_LOCKTOAST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D486DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockToast_TypeDefinitionIndex = 24073;

	class LockToast : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsLock; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKTOAST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C9E275CC97E60B77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockToast*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockToast*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKTOAST_METHOD_3_C9E275CC97E60B77_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9325E0556C47AFFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockToast* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockToast*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKTOAST_METHOD_3_9325E0556C47AFFC_OFFSET))(a1, a2);
		}
	};
}
