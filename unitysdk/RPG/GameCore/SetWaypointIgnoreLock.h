#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETWAYPOINTIGNORELOCK_METHOD_3_1CBA36527B0FDC60_OFFSET UNITYSDK_OFFSET(0x176E6ED0)
#define RPG_GAMECORE_SETWAYPOINTIGNORELOCK_METHOD_3_F9E3119BED095319_OFFSET UNITYSDK_OFFSET(0x176E6E50)
#define RPG_GAMECORE_SETWAYPOINTIGNORELOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x176E6EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetWaypointIgnoreLock_TypeDefinitionIndex = 19202;

	class SetWaypointIgnoreLock : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Reset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETWAYPOINTIGNORELOCK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F9E3119BED095319(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetWaypointIgnoreLock*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetWaypointIgnoreLock*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETWAYPOINTIGNORELOCK_METHOD_3_F9E3119BED095319_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1CBA36527B0FDC60(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetWaypointIgnoreLock* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetWaypointIgnoreLock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETWAYPOINTIGNORELOCK_METHOD_3_1CBA36527B0FDC60_OFFSET))(a1, a2);
		}
	};
}
