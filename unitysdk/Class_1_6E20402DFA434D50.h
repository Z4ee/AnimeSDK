#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6E20402DFA434D50__CTOR_OFFSET UNITYSDK_OFFSET(0x169FEAB0)

inline static constexpr unsigned int Class_1_6E20402DFA434D50_TypeDefinitionIndex = 81224;

class Class_1_6E20402DFA434D50 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_3 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_0 = 0x3; // 0x0
	::MoleMole::EntityHandle Field_1_7; // 0x10
	::System::Int32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E20402DFA434D50__CTOR_OFFSET))(this);
	}
};
