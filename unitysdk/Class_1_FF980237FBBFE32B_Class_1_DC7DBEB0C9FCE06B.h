#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_1_FF980237FBBFE32B;
class Class_5_DCFF91E03A93C03C;
namespace MoleMole::Config { class ConfigHollowChessboard; }

#define CLASS_1_FF980237FBBFE32B_CLASS_1_DC7DBEB0C9FCE06B_METHOD_1_6D84001547624ECB_OFFSET UNITYSDK_OFFSET(0x135BDA90)
#define CLASS_1_FF980237FBBFE32B_CLASS_1_DC7DBEB0C9FCE06B__CTOR_OFFSET UNITYSDK_OFFSET(0x135BD9B0)

inline static constexpr unsigned int Class_1_FF980237FBBFE32B_Class_1_DC7DBEB0C9FCE06B_TypeDefinitionIndex = 67196;

class Class_1_FF980237FBBFE32B_Class_1_DC7DBEB0C9FCE06B : public ::System::Object
{
public:
	::Class_5_DCFF91E03A93C03C* Field_1_2; // 0x10
	::MoleMole::Config::ConfigHollowChessboard* Field_1_0; // 0x18
	::Class_1_FF980237FBBFE32B* Field_1_1; // 0x20

	::System::Void _ctor(::Class_5_DCFF91E03A93C03C* a1, ::Class_1_FF980237FBBFE32B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*, ::Class_1_FF980237FBBFE32B*))((::PBYTE)hIl2Cpp + CLASS_1_FF980237FBBFE32B_CLASS_1_DC7DBEB0C9FCE06B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6D84001547624ECB(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_FF980237FBBFE32B_CLASS_1_DC7DBEB0C9FCE06B_METHOD_1_6D84001547624ECB_OFFSET))(this, a1);
	}
};
