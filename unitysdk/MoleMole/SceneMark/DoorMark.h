#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SceneMark/SceneMarkData_1.h"

#define MOLEMOLE_SCENEMARK_DOORMARK__CTOR_OFFSET UNITYSDK_OFFSET(0x12BDFF50)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int DoorMark_TypeDefinitionIndex = 48336;

	class DoorMark : public ::MoleMole::SceneMark::SceneMarkData_1<::MoleMole::SceneMark::DoorMark*>
	{
	public:
		::System::Boolean IgnoreAvatarCollision; // 0x18
		::System::Boolean IgnoreMonsterCollision; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DOORMARK__CTOR_OFFSET))(this);
		}
	};
}
