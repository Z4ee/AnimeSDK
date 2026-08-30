#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVLOCKSPECIALTARGET_METHOD_3_8073521FCECD9346_OFFSET UNITYSDK_OFFSET(0x1D6BB680)
#define RPG_GAMECORE_ADVLOCKSPECIALTARGET_METHOD_3_D1B584D213C66927_OFFSET UNITYSDK_OFFSET(0x1D6BB6C0)
#define RPG_GAMECORE_ADVLOCKSPECIALTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BB6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvLockSpecialTarget_TypeDefinitionIndex = 20215;

	class AdvLockSpecialTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsLock; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOCKSPECIALTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8073521FCECD9346(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvLockSpecialTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvLockSpecialTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOCKSPECIALTARGET_METHOD_3_8073521FCECD9346_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D1B584D213C66927(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvLockSpecialTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvLockSpecialTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOCKSPECIALTARGET_METHOD_3_D1B584D213C66927_OFFSET))(a1, a2);
		}
	};
}
