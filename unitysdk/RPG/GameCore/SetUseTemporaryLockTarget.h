#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETUSETEMPORARYLOCKTARGET_METHOD_3_34FF86BEB3875E2D_OFFSET UNITYSDK_OFFSET(0x1E0950D0)
#define RPG_GAMECORE_SETUSETEMPORARYLOCKTARGET_METHOD_3_CA244DB90EE693B2_OFFSET UNITYSDK_OFFSET(0x1E095110)
#define RPG_GAMECORE_SETUSETEMPORARYLOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1E095100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetUseTemporaryLockTarget_TypeDefinitionIndex = 22232;

	class SetUseTemporaryLockTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsEnable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUSETEMPORARYLOCKTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_34FF86BEB3875E2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetUseTemporaryLockTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetUseTemporaryLockTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUSETEMPORARYLOCKTARGET_METHOD_3_34FF86BEB3875E2D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CA244DB90EE693B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetUseTemporaryLockTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetUseTemporaryLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUSETEMPORARYLOCKTARGET_METHOD_3_CA244DB90EE693B2_OFFSET))(a1, a2);
		}
	};
}
