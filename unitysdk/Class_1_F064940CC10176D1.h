#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ShotAnimType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ShotAnimMovementData; }

#define CLASS_1_F064940CC10176D1__CTOR_OFFSET UNITYSDK_OFFSET(0x14AF2CD0)

inline static constexpr unsigned int Class_1_F064940CC10176D1_TypeDefinitionIndex = 66519;

class Class_1_F064940CC10176D1 : public ::System::Object
{
public:
	::RPG::Client::ShotAnimMovementData* Field_1_0; // 0x10
	::RPG::Client::ShotAnimType Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F064940CC10176D1__CTOR_OFFSET))(this);
	}
};
