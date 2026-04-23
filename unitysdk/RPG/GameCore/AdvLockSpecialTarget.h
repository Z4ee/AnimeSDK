#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVLOCKSPECIALTARGET_METHOD_3_79D16FEDC72F93DE_OFFSET UNITYSDK_OFFSET(0x18654980)
#define RPG_GAMECORE_ADVLOCKSPECIALTARGET_METHOD_3_D1B584D213C66927_OFFSET UNITYSDK_OFFSET(0x18654A00)
#define RPG_GAMECORE_ADVLOCKSPECIALTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x186549D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvLockSpecialTarget_TypeDefinitionIndex = 19408;

	class AdvLockSpecialTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsLock; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOCKSPECIALTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_79D16FEDC72F93DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvLockSpecialTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvLockSpecialTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOCKSPECIALTARGET_METHOD_3_79D16FEDC72F93DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D1B584D213C66927(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvLockSpecialTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvLockSpecialTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOCKSPECIALTARGET_METHOD_3_D1B584D213C66927_OFFSET))(a1, a2);
		}
	};
}
