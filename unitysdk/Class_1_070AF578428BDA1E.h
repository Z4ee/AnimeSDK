#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_070AF578428BDA1E__CTOR_OFFSET UNITYSDK_OFFSET(0x17DC92A0)

inline static constexpr unsigned int Class_1_070AF578428BDA1E_TypeDefinitionIndex = 34562;

class Class_1_070AF578428BDA1E : public ::System::Object
{
public:
	::System::Single Field_1_1; // 0x10
	::RPG::MVector3 Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070AF578428BDA1E__CTOR_OFFSET))(this);
	}
};
