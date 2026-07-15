#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1037;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_C616F330B6362345_CLASS_1_17809CFDCE3D87DA__CTOR_OFFSET UNITYSDK_OFFSET(0x1923E500)

inline static constexpr unsigned int Class_2_C616F330B6362345_Class_1_17809CFDCE3D87DA_TypeDefinitionIndex = 68316;

class Class_2_C616F330B6362345_Class_1_17809CFDCE3D87DA : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_1037* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C616F330B6362345_CLASS_1_17809CFDCE3D87DA__CTOR_OFFSET))(this);
	}
};
