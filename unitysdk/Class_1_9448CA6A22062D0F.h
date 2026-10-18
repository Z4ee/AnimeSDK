#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_9448CA6A22062D0F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C591FB0)

inline static constexpr unsigned int Class_1_9448CA6A22062D0F_TypeDefinitionIndex = 36563;

class Class_1_9448CA6A22062D0F : public ::System::Object
{
public:
	::System::Boolean GECBBOEPHFC; // 0x10
	::RPG::MVector3 DPKMOFJOHKB; // 0x14
	::System::Single JGBLHPBKIFP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9448CA6A22062D0F__CTOR_OFFSET))(this);
	}
};
