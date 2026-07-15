#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_80793F5E162C6353_CLASS_1_B601576051DF7BD1_CLEAR_OFFSET UNITYSDK_OFFSET(0x17D72390)
#define CLASS_1_80793F5E162C6353_CLASS_1_B601576051DF7BD1_METHOD_1_5915AF106ADC73EB_OFFSET UNITYSDK_OFFSET(0x17D71F20)
#define CLASS_1_80793F5E162C6353_CLASS_1_B601576051DF7BD1_METHOD_1_7B5E3B36CA129EB3_OFFSET UNITYSDK_OFFSET(0x17D70FE0)
#define CLASS_1_80793F5E162C6353_CLASS_1_B601576051DF7BD1__CTOR_OFFSET UNITYSDK_OFFSET(0x17D723E0)

inline static constexpr unsigned int Class_1_80793F5E162C6353_Class_1_B601576051DF7BD1_TypeDefinitionIndex = 58010;

class Class_1_80793F5E162C6353_Class_1_B601576051DF7BD1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x29
	::System::Boolean Field_1_5; // 0x2A
	::System::Boolean Field_1_6; // 0x2B
	::System::Single Field_1_7; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353_CLASS_1_B601576051DF7BD1__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_5915AF106ADC73EB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80793F5E162C6353_CLASS_1_B601576051DF7BD1_METHOD_1_5915AF106ADC73EB_OFFSET))(this);
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
