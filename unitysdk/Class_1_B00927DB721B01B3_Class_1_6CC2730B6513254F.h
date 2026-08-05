#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_2_F8FDA7DB08D27C5C;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_B00927DB721B01B3_CLASS_1_6CC2730B6513254F__CTOR_OFFSET UNITYSDK_OFFSET(0x141BF4D0)

inline static constexpr unsigned int Class_1_B00927DB721B01B3_Class_1_6CC2730B6513254F_TypeDefinitionIndex = 54463;

class Class_1_B00927DB721B01B3_Class_1_6CC2730B6513254F : public ::System::Object
{
public:
	::Class_2_F8FDA7DB08D27C5C* Field_1_7; // 0x10
	::System::Action_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B00927DB721B01B3_CLASS_1_6CC2730B6513254F__CTOR_OFFSET))(this);
	}
};
