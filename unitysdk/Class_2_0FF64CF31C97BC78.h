#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelGraphType.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_0FF64CF31C97BC78__CTOR_OFFSET UNITYSDK_OFFSET(0x18343E90)

inline static constexpr unsigned int Class_2_0FF64CF31C97BC78_TypeDefinitionIndex = 23660;

class Class_2_0FF64CF31C97BC78 : public ::System::Attribute
{
public:
	::Il2CppArray<::RPG::GameCore::LevelGraphType>* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FF64CF31C97BC78__CTOR_OFFSET))(this);
	}
};
