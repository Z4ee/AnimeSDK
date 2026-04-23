#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Collision2DShapeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_43BD383C98B4C0C5_105_METHOD_1_E2C273CA106EBD0B_OFFSET UNITYSDK_OFFSET(0x12810F00)
#define CLASS_1_43BD383C98B4C0C5_105_METHOD_1_E8FC0507C3ED6DFC_OFFSET UNITYSDK_OFFSET(0x12810EF0)
#define CLASS_1_43BD383C98B4C0C5_105__CTOR_OFFSET UNITYSDK_OFFSET(0x12810F40)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_105_TypeDefinitionIndex = 49474;

class Class_1_43BD383C98B4C0C5_105 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_105__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::Collision2DShapeType Method_1_E8FC0507C3ED6DFC()
	{
		return ((::RPG::GameCore::Collision2DShapeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_105_METHOD_1_E8FC0507C3ED6DFC_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E2C273CA106EBD0B()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_105_METHOD_1_E2C273CA106EBD0B_OFFSET))(this);
	}
};
