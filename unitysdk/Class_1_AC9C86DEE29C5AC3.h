#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_31;
namespace RPG::GameCore { class FiveDimWindowControllerComponentConfig; }

#define CLASS_1_AC9C86DEE29C5AC3__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE6470)

inline static constexpr unsigned int Class_1_AC9C86DEE29C5AC3_TypeDefinitionIndex = 40156;

class Class_1_AC9C86DEE29C5AC3 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimWindowControllerComponentConfig* Field_1_0; // 0x10
	::Class_1_43BD383C98B4C0C5_31* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC9C86DEE29C5AC3__CTOR_OFFSET))(this);
	}
};
