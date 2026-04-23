#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CameraNamedDynamicOffset; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_9F6A7BD216A5C0E3_METHOD_1_707355BB5CCD728C_OFFSET UNITYSDK_OFFSET(0x1280F8E0)
#define CLASS_1_9F6A7BD216A5C0E3__CTOR_OFFSET UNITYSDK_OFFSET(0x1280F9D0)

inline static constexpr unsigned int Class_1_9F6A7BD216A5C0E3_TypeDefinitionIndex = 64115;

class Class_1_9F6A7BD216A5C0E3 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::Client::CameraNamedDynamicOffset* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F6A7BD216A5C0E3__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_707355BB5CCD728C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9F6A7BD216A5C0E3_METHOD_1_707355BB5CCD728C_OFFSET))(this, a1);
	}
};
