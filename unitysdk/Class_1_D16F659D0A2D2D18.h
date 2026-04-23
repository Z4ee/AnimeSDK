#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/System/Object.h"

class Class_1_009DF1C0DBE996B8;
class Class_1_05E595DC72CB83CA;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_D16F659D0A2D2D18_METHOD_1_369BB5E7FA6A1768_OFFSET UNITYSDK_OFFSET(0x95B6B50)
#define CLASS_1_D16F659D0A2D2D18_METHOD_1_4FE4F01D1BD2C394_OFFSET UNITYSDK_OFFSET(0x95B6C40)
#define CLASS_1_D16F659D0A2D2D18__CTOR_OFFSET UNITYSDK_OFFSET(0x95B6DC0)

inline static constexpr unsigned int Class_1_D16F659D0A2D2D18_TypeDefinitionIndex = 50021;

class Class_1_D16F659D0A2D2D18 : public ::System::Object
{
public:
	::Class_1_009DF1C0DBE996B8* Field_1_0; // 0x10
	::RPG::GameCore::IVec2 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D16F659D0A2D2D18__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_369BB5E7FA6A1768(::Class_1_05E595DC72CB83CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_05E595DC72CB83CA*))((::PBYTE)hIl2Cpp + CLASS_1_D16F659D0A2D2D18_METHOD_1_369BB5E7FA6A1768_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4FE4F01D1BD2C394(::Class_1_05E595DC72CB83CA* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_05E595DC72CB83CA*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_D16F659D0A2D2D18_METHOD_1_4FE4F01D1BD2C394_OFFSET))(this, a1, a2, a3);
	}
};
