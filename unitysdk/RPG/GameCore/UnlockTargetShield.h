#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_UNLOCKTARGETSHIELD_METHOD_3_B38A20E846EF7FC8_OFFSET UNITYSDK_OFFSET(0x178E77C0)
#define RPG_GAMECORE_UNLOCKTARGETSHIELD_METHOD_3_C875B5A4D5E7C9CA_OFFSET UNITYSDK_OFFSET(0x178E7840)
#define RPG_GAMECORE_UNLOCKTARGETSHIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x178E7810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnlockTargetShield_TypeDefinitionIndex = 21863;

	class UnlockTargetShield : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* LockKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKTARGETSHIELD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B38A20E846EF7FC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnlockTargetShield*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnlockTargetShield*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKTARGETSHIELD_METHOD_3_B38A20E846EF7FC8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C875B5A4D5E7C9CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnlockTargetShield* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnlockTargetShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKTARGETSHIELD_METHOD_3_C875B5A4D5E7C9CA_OFFSET))(a1, a2);
		}
	};
}
