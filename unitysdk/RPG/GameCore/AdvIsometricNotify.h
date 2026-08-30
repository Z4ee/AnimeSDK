#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IsometricNotifyType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVISOMETRICNOTIFY_METHOD_3_1D9AF81D2B2FBE6C_OFFSET UNITYSDK_OFFSET(0x1CDCC490)
#define RPG_GAMECORE_ADVISOMETRICNOTIFY_METHOD_3_222C984526F770B6_OFFSET UNITYSDK_OFFSET(0x1CDCC3F0)
#define RPG_GAMECORE_ADVISOMETRICNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDCC450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvIsometricNotify_TypeDefinitionIndex = 21963;

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

		static ::System::Void Method_3_222C984526F770B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvIsometricNotify*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvIsometricNotify*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICNOTIFY_METHOD_3_222C984526F770B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1D9AF81D2B2FBE6C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvIsometricNotify* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvIsometricNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICNOTIFY_METHOD_3_1D9AF81D2B2FBE6C_OFFSET))(a1, a2);
		}
	};
}
