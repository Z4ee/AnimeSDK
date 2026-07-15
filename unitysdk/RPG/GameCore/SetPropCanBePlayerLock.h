#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETPROPCANBEPLAYERLOCK_METHOD_3_9A6888D117DB4127_OFFSET UNITYSDK_OFFSET(0x1C605C40)
#define RPG_GAMECORE_SETPROPCANBEPLAYERLOCK_METHOD_3_A9E9C77D75493B70_OFFSET UNITYSDK_OFFSET(0x1C605BF0)
#define RPG_GAMECORE_SETPROPCANBEPLAYERLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C605C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetPropCanBePlayerLock_TypeDefinitionIndex = 21436;

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

		static ::System::Void Method_3_A9E9C77D75493B70(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPropCanBePlayerLock*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPropCanBePlayerLock*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPCANBEPLAYERLOCK_METHOD_3_A9E9C77D75493B70_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9A6888D117DB4127(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPropCanBePlayerLock* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPropCanBePlayerLock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPCANBEPLAYERLOCK_METHOD_3_9A6888D117DB4127_OFFSET))(a1, a2);
		}
	};
}
