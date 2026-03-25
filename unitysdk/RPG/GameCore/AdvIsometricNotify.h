#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IsometricNotifyType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVISOMETRICNOTIFY_METHOD_3_1D9AF81D2B2FBE6C_OFFSET UNITYSDK_OFFSET(0x16F31BB0)
#define RPG_GAMECORE_ADVISOMETRICNOTIFY_METHOD_3_DCE0DBD4AFF1D888_OFFSET UNITYSDK_OFFSET(0x16F319D0)
#define RPG_GAMECORE_ADVISOMETRICNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x16F31AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvIsometricNotify_TypeDefinitionIndex = 20401;

	class AdvIsometricNotify : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::IsometricNotifyType NotifyType; // 0x18
		::RPG::GameCore::TargetEvaluator* InteractProp; // 0x20
		::RPG::GameCore::TargetEvaluator* Platform; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICNOTIFY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DCE0DBD4AFF1D888(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvIsometricNotify*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvIsometricNotify*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICNOTIFY_METHOD_3_DCE0DBD4AFF1D888_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1D9AF81D2B2FBE6C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvIsometricNotify* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvIsometricNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICNOTIFY_METHOD_3_1D9AF81D2B2FBE6C_OFFSET))(a1, a2);
		}
	};
}
