#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETWAYPOINTIGNORELOCK_METHOD_3_1CBA36527B0FDC60_OFFSET UNITYSDK_OFFSET(0x1C610050)
#define RPG_GAMECORE_SETWAYPOINTIGNORELOCK_METHOD_3_4CDC11D1323E0F23_OFFSET UNITYSDK_OFFSET(0x1C610010)
#define RPG_GAMECORE_SETWAYPOINTIGNORELOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C610040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetWaypointIgnoreLock_TypeDefinitionIndex = 20090;

	class SetWaypointIgnoreLock : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Reset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETWAYPOINTIGNORELOCK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4CDC11D1323E0F23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetWaypointIgnoreLock*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetWaypointIgnoreLock*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETWAYPOINTIGNORELOCK_METHOD_3_4CDC11D1323E0F23_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1CBA36527B0FDC60(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetWaypointIgnoreLock* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetWaypointIgnoreLock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETWAYPOINTIGNORELOCK_METHOD_3_1CBA36527B0FDC60_OFFSET))(a1, a2);
		}
	};
}
