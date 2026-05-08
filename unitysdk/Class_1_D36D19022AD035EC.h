#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_1_1C46DBAB65E43874;
class Class_2_ED6948B5924B9BC1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D36D19022AD035EC_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x11F18C70)
#define CLASS_1_D36D19022AD035EC__CTOR_OFFSET UNITYSDK_OFFSET(0x11F18BF0)

inline static constexpr unsigned int Class_1_D36D19022AD035EC_TypeDefinitionIndex = 65572;

class Class_1_D36D19022AD035EC : public ::System::Object
{
public:
	::Class_2_ED6948B5924B9BC1* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_1_D36D19022AD035EC__CTOR_OFFSET))(this, a1);
	}

	::Class_1_1C46DBAB65E43874* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_1C46DBAB65E43874*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D36D19022AD035EC_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}
};
