#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETPROPCANBEPLAYERLOCK_METHOD_3_9A6888D117DB4127_OFFSET UNITYSDK_OFFSET(0x18E3F150)
#define RPG_GAMECORE_SETPROPCANBEPLAYERLOCK_METHOD_3_C51F8F1E1BB772AF_OFFSET UNITYSDK_OFFSET(0x18E3F0D0)
#define RPG_GAMECORE_SETPROPCANBEPLAYERLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x18E3F120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetPropCanBePlayerLock_TypeDefinitionIndex = 21121;

	class SetPropCanBePlayerLock : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean CanBeLock; // 0x18
		::System::Boolean UseForOwner; // 0x19
		::System::String* UniqueName; // 0x20
		::System::UInt32 PropID; // 0x28
		::System::UInt32 GroupID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPCANBEPLAYERLOCK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C51F8F1E1BB772AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPropCanBePlayerLock*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPropCanBePlayerLock*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPCANBEPLAYERLOCK_METHOD_3_C51F8F1E1BB772AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9A6888D117DB4127(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPropCanBePlayerLock* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPropCanBePlayerLock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPCANBEPLAYERLOCK_METHOD_3_9A6888D117DB4127_OFFSET))(a1, a2);
		}
	};
}
