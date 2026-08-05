#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_19.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_1_C9DFE5EE7107C629;

#define CLASS_1_4BD7B665C4CA18EA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14E47100)
#define CLASS_1_4BD7B665C4CA18EA__CTOR_OFFSET UNITYSDK_OFFSET(0x14E470F0)

inline static constexpr unsigned int Class_1_4BD7B665C4CA18EA_TypeDefinitionIndex = 70762;

class Class_1_4BD7B665C4CA18EA : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowCell Field_1_1; // 0x10
	::Enum_3_4608E37A1B3D374A_19 Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BD7B665C4CA18EA__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C9DFE5EE7107C629* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629*))((::PBYTE)hIl2Cpp + CLASS_1_4BD7B665C4CA18EA__CTOR_1_OFFSET))(this, a1);
	}
};
