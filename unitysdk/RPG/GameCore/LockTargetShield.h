#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_LOCKTARGETSHIELD_METHOD_3_6CC22598BF4C0FF1_OFFSET UNITYSDK_OFFSET(0x198AD6D0)
#define RPG_GAMECORE_LOCKTARGETSHIELD_METHOD_3_FD131076F05BFA9D_OFFSET UNITYSDK_OFFSET(0x198AD650)
#define RPG_GAMECORE_LOCKTARGETSHIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x198AD6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockTargetShield_TypeDefinitionIndex = 22331;

	class LockTargetShield : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* LockKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKTARGETSHIELD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FD131076F05BFA9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockTargetShield*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockTargetShield*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKTARGETSHIELD_METHOD_3_FD131076F05BFA9D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6CC22598BF4C0FF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockTargetShield* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockTargetShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKTARGETSHIELD_METHOD_3_6CC22598BF4C0FF1_OFFSET))(a1, a2);
		}
	};
}
