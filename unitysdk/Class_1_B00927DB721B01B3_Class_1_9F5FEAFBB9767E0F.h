#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_1_B00927DB721B01B3_Class_1_9F46BF8D9EADF75C;

#define CLASS_1_B00927DB721B01B3_CLASS_1_9F5FEAFBB9767E0F_METHOD_1_6D58CBDA5C4846F1_OFFSET UNITYSDK_OFFSET(0x141BF4F0)
#define CLASS_1_B00927DB721B01B3_CLASS_1_9F5FEAFBB9767E0F__CTOR_OFFSET UNITYSDK_OFFSET(0x141BF4E0)

inline static constexpr unsigned int Class_1_B00927DB721B01B3_Class_1_9F5FEAFBB9767E0F_TypeDefinitionIndex = 54462;

class Class_1_B00927DB721B01B3_Class_1_9F5FEAFBB9767E0F : public ::System::Object
{
public:
	::Class_1_B00927DB721B01B3_Class_1_9F46BF8D9EADF75C* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B00927DB721B01B3_CLASS_1_9F5FEAFBB9767E0F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6D58CBDA5C4846F1(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_B00927DB721B01B3_CLASS_1_9F5FEAFBB9767E0F_METHOD_1_6D58CBDA5C4846F1_OFFSET))(this, a1, a2);
	}
};
