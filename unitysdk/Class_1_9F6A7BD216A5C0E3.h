#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CameraNamedDynamicOffset; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_9F6A7BD216A5C0E3_METHOD_1_707355BB5CCD728C_OFFSET UNITYSDK_OFFSET(0x15263AF0)
#define CLASS_1_9F6A7BD216A5C0E3__CTOR_OFFSET UNITYSDK_OFFSET(0x15263C20)

inline static constexpr unsigned int Class_1_9F6A7BD216A5C0E3_TypeDefinitionIndex = 69534;

class Class_1_9F6A7BD216A5C0E3 : public ::System::Object
{
public:
	::RPG::Client::CameraNamedDynamicOffset* EABKOHGCHFP; // 0x10
	::RPG::GameCore::GameEntity* NELOEEMKHND; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F6A7BD216A5C0E3__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_707355BB5CCD728C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9F6A7BD216A5C0E3_METHOD_1_707355BB5CCD728C_OFFSET))(this, a1);
	}
};
