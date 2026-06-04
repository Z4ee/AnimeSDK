#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_070AF578428BDA1E__CTOR_OFFSET UNITYSDK_OFFSET(0x189E71B0)

inline static constexpr unsigned int Class_1_070AF578428BDA1E_TypeDefinitionIndex = 34845;

class Class_1_070AF578428BDA1E : public ::System::Object
{
public:
	::RPG::MVector3 Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070AF578428BDA1E__CTOR_OFFSET))(this);
	}
};
