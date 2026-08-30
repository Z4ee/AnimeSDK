#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_9448CA6A22062D0F__CTOR_OFFSET UNITYSDK_OFFSET(0x162736B0)

inline static constexpr unsigned int Class_1_9448CA6A22062D0F_TypeDefinitionIndex = 35876;

class Class_1_9448CA6A22062D0F : public ::System::Object
{
public:
	::RPG::MVector3 DPKMOFJOHKB; // 0x10
	::System::Single JGBLHPBKIFP; // 0x1C
	::System::Boolean GECBBOEPHFC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9448CA6A22062D0F__CTOR_OFFSET))(this);
	}
};
