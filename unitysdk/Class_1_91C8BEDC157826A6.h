#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_1_BB6D76999072F2AC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_91C8BEDC157826A6_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x12290E80)
#define CLASS_1_91C8BEDC157826A6_METHOD_1_CFE5D2FE9AFDE05F_OFFSET UNITYSDK_OFFSET(0x12290B80)
#define CLASS_1_91C8BEDC157826A6_METHOD_1_E14A7FCF78650419_OFFSET UNITYSDK_OFFSET(0x12290F10)
#define CLASS_1_91C8BEDC157826A6__CTOR_OFFSET UNITYSDK_OFFSET(0x12290B00)

inline static constexpr unsigned int Class_1_91C8BEDC157826A6_TypeDefinitionIndex = 59247;

class Class_1_91C8BEDC157826A6 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_BB6D76999072F2AC*>* Field_1_1; // 0x18
	::System::Action* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91C8BEDC157826A6__CTOR_OFFSET))(this);
	}

	::Class_1_91C8BEDC157826A6* Method_1_CFE5D2FE9AFDE05F(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::Class_1_91C8BEDC157826A6*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_91C8BEDC157826A6_METHOD_1_CFE5D2FE9AFDE05F_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91C8BEDC157826A6_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::Class_1_BB6D76999072F2AC* Method_1_E14A7FCF78650419()
	{
		return ((::Class_1_BB6D76999072F2AC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91C8BEDC157826A6_METHOD_1_E14A7FCF78650419_OFFSET))(this);
	}
};
