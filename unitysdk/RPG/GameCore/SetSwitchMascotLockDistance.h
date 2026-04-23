#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETSWITCHMASCOTLOCKDISTANCE_METHOD_3_2047B2CA654F55DD_OFFSET UNITYSDK_OFFSET(0x18E43E50)
#define RPG_GAMECORE_SETSWITCHMASCOTLOCKDISTANCE_METHOD_3_695166BA7B89FC56_OFFSET UNITYSDK_OFFSET(0x18E43DD0)
#define RPG_GAMECORE_SETSWITCHMASCOTLOCKDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E43E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetSwitchMascotLockDistance_TypeDefinitionIndex = 20860;

	class SetSwitchMascotLockDistance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsPushValue; // 0x18
		::RPG::GameCore::DynamicFloat* LockDistance; // 0x20
		::RPG::GameCore::DynamicFloat* LockHeightLimit; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSWITCHMASCOTLOCKDISTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_695166BA7B89FC56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetSwitchMascotLockDistance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetSwitchMascotLockDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSWITCHMASCOTLOCKDISTANCE_METHOD_3_695166BA7B89FC56_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2047B2CA654F55DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetSwitchMascotLockDistance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetSwitchMascotLockDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSWITCHMASCOTLOCKDISTANCE_METHOD_3_2047B2CA654F55DD_OFFSET))(a1, a2);
		}
	};
}
