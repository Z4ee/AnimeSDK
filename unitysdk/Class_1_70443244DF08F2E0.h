#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_70443244DF08F2E0__CTOR_OFFSET UNITYSDK_OFFSET(0x134E25E0)

inline static constexpr unsigned int Class_1_70443244DF08F2E0_TypeDefinitionIndex = 53932;

class Class_1_70443244DF08F2E0 : public ::System::Object
{
public:
	::System::Nullable_1<::RPG::MVector3> Field_1_0; // 0x10
	::RPG::MVector3 Field_1_1; // 0x20
	::System::Single Field_1_2; // 0x2C
	::RPG::MVector3 Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70443244DF08F2E0__CTOR_OFFSET))(this);
	}
};
