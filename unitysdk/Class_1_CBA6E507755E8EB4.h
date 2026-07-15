#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_CBA6E507755E8EB4__CTOR_OFFSET UNITYSDK_OFFSET(0x168705D0)

inline static constexpr unsigned int Class_1_CBA6E507755E8EB4_TypeDefinitionIndex = 53470;

class Class_1_CBA6E507755E8EB4 : public ::System::Object
{
public:
	::System::Double Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::RPG::GameCore::FixPoint Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBA6E507755E8EB4__CTOR_OFFSET))(this);
	}
};
