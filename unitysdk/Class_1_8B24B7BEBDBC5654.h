#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_0AFACF733846A6F9.h"
#include "unitysdk/System/Object.h"

class Class_1_B5199E29CF4E68F9;

#define CLASS_1_8B24B7BEBDBC5654__CTOR_OFFSET UNITYSDK_OFFSET(0x11EA7B20)

inline static constexpr unsigned int Class_1_8B24B7BEBDBC5654_TypeDefinitionIndex = 72304;

class Class_1_8B24B7BEBDBC5654 : public ::System::Object
{
public:
	::Class_1_B5199E29CF4E68F9* Field_1_2; // 0x10
	::Struct_2_0AFACF733846A6F9 Field_1_1; // 0x18
	::MoleMole::HollowChessboard::HollowCell Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B24B7BEBDBC5654__CTOR_OFFSET))(this);
	}
};
