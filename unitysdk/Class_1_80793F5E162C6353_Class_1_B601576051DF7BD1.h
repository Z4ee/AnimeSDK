#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_80793F5E162C6353_CLASS_1_B601576051DF7BD1_CLEAR_OFFSET UNITYSDK_OFFSET(0x114DDA70)
#define CLASS_1_80793F5E162C6353_CLASS_1_B601576051DF7BD1_METHOD_1_48C4907B6B0AF079_OFFSET UNITYSDK_OFFSET(0x114DD530)
#define CLASS_1_80793F5E162C6353_CLASS_1_B601576051DF7BD1_METHOD_1_7B5E3B36CA129EB3_OFFSET UNITYSDK_OFFSET(0x114DC650)
#define CLASS_1_80793F5E162C6353_CLASS_1_B601576051DF7BD1__CTOR_OFFSET UNITYSDK_OFFSET(0x114DDAC0)

inline static constexpr unsigned int Class_1_80793F5E162C6353_Class_1_B601576051DF7BD1_TypeDefinitionIndex = 49204;

class Class_1_80793F5E162C6353_Class_1_B601576051DF7BD1 : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::UnityEngine::Transform* Field_1_4; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::System::Single Field_1_5; // 0x28
	::System::Boolean Field_1_7; // 0x2C
	::System::Boolean Field_1_0; // 0x2D
	::System::Boolean Field_1_6; // 0x2E
	::System::Boolean Field_1_1; // 0x2F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353_CLASS_1_B601576051DF7BD1__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_48C4907B6B0AF079()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353_CLASS_1_B601576051DF7BD1_METHOD_1_48C4907B6B0AF079_OFFSET))(this);
	}

	::System::Void Method_1_7B5E3B36CA129EB3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353_CLASS_1_B601576051DF7BD1_METHOD_1_7B5E3B36CA129EB3_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353_CLASS_1_B601576051DF7BD1_CLEAR_OFFSET))(this);
	}
};
