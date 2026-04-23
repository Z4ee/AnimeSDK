#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/System/Object.h"

class Class_1_05E595DC72CB83CA;
class Class_2_1D06DCF3F18C5C04;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_CAF4E1BB12FF3D55_METHOD_1_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x1196B2D0)
#define CLASS_1_CAF4E1BB12FF3D55_METHOD_1_C38B5C95A1DA13E8_OFFSET UNITYSDK_OFFSET(0x1196B3A0)
#define CLASS_1_CAF4E1BB12FF3D55__CTOR_OFFSET UNITYSDK_OFFSET(0x1196B680)

inline static constexpr unsigned int Class_1_CAF4E1BB12FF3D55_TypeDefinitionIndex = 50086;

class Class_1_CAF4E1BB12FF3D55 : public ::System::Object
{
public:
	::Class_2_1D06DCF3F18C5C04* Field_1_0; // 0x10
	::RPG::GameCore::FixVec3 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CAF4E1BB12FF3D55__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_70437D85C11C5222(::Class_1_05E595DC72CB83CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_05E595DC72CB83CA*))((::PBYTE)hIl2Cpp + CLASS_1_CAF4E1BB12FF3D55_METHOD_1_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C38B5C95A1DA13E8(::Class_1_05E595DC72CB83CA* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_05E595DC72CB83CA*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_CAF4E1BB12FF3D55_METHOD_1_C38B5C95A1DA13E8_OFFSET))(this, a1, a2, a3);
	}
};
