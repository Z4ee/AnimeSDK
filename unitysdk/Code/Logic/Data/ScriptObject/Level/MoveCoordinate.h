#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_MOVECOORDINATE__CTOR_OFFSET UNITYSDK_OFFSET(0x12F16CD0)

namespace Code::Logic::Data::ScriptObject::Level
{
	inline static constexpr unsigned int MoveCoordinate_TypeDefinitionIndex = 85178;

	class MoveCoordinate : public ::System::Object
	{
	public:
		::System::Int32 order; // 0x10
		::System::Int32 coordinateX; // 0x14
		::System::Int32 coordinateY; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_MOVECOORDINATE__CTOR_OFFSET))(this);
		}
	};
}
