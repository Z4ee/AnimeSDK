#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/Struct_2_90E529DB4DCB014F.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_978858B86AA44864__CTOR_OFFSET UNITYSDK_OFFSET(0x1556B7D0)

inline static constexpr unsigned int Class_1_978858B86AA44864_TypeDefinitionIndex = 62521;

class Class_1_978858B86AA44864 : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowChessboardUID Field_1_6; // 0x10
	::Struct_2_90E529DB4DCB014F Field_1_0; // 0x18
	::Struct_2_90E529DB4DCB014F Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_978858B86AA44864__CTOR_OFFSET))(this);
	}
};
