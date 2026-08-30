#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ECameraMode.h"
#include "unitysdk/Struct_2_5339A6B283F0E39D.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_209;
namespace UnityEngine { class Transform; }

#define CLASS_1_48FFE902FEF4A0BA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3CAF30)

inline static constexpr unsigned int Class_1_48FFE902FEF4A0BA_TypeDefinitionIndex = 41284;

class Class_1_48FFE902FEF4A0BA : public ::System::Object
{
public:
	::UnityEngine::Transform* LLEGAGOPMJA; // 0x10
	::Struct_2_5339A6B283F0E39D JMDGIBDPMJF; // 0x18
	::Class_0_16E4307DCC419505_209* KCOHHKFGEAG; // 0x20
	::System::Single KAIEOKOGECD; // 0x28
	::RPG::Client::LittleGame::RoadRash::ECameraMode FCGFFAJIBKA; // 0x2C
	::System::Single IJCLFLDMOKD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48FFE902FEF4A0BA__CTOR_OFFSET))(this);
	}
};
