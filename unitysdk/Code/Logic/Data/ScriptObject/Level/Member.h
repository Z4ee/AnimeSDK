#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Code/Logic/Data/ScriptObject/Level/MoveType.h"
#include "unitysdk/System/Object.h"

namespace Code::Logic::Data::ScriptObject::Level { class MoveCoordinate; }

#define CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_MEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1652B0D0)

namespace Code::Logic::Data::ScriptObject::Level
{
	inline static constexpr unsigned int Member_TypeDefinitionIndex = 49044;

	class Member : public ::System::Object
	{
	public:
		::System::Int32 index; // 0x10
		::System::Int32 refId; // 0x14
		::System::Int32 coordinateX; // 0x18
		::System::Int32 coordinateY; // 0x1C
		::System::Single createDelayTime; // 0x20
		::System::Boolean isRoot; // 0x24
		::Code::Logic::Data::ScriptObject::Level::MoveType moveType; // 0x28
		::System::Single moveTime; // 0x2C
		::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>* moveCoordinateList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_MEMBER__CTOR_OFFSET))(this);
		}
	};
}
