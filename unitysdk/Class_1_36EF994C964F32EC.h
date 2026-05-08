#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_36EF994C964F32EC_METHOD_1_5F696D55FD23C40C_OFFSET UNITYSDK_OFFSET(0xFF3BB90)
#define CLASS_1_36EF994C964F32EC_METHOD_1_8F020F016C8261B9_OFFSET UNITYSDK_OFFSET(0xFF3BCE0)
#define CLASS_1_36EF994C964F32EC_METHOD_1_BDC38D7A72465587_OFFSET UNITYSDK_OFFSET(0xFF3BC10)
#define CLASS_1_36EF994C964F32EC__CTOR_OFFSET UNITYSDK_OFFSET(0xFF3BAD0)

inline static constexpr unsigned int Class_1_36EF994C964F32EC_TypeDefinitionIndex = 59066;

class Class_1_36EF994C964F32EC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36EF994C964F32EC__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_5F696D55FD23C40C(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_36EF994C964F32EC_METHOD_1_5F696D55FD23C40C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_BDC38D7A72465587(::MoleMole::HollowChessboard::HollowCell a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_36EF994C964F32EC_METHOD_1_BDC38D7A72465587_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8F020F016C8261B9(::MoleMole::HollowChessboard::HollowCell a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_36EF994C964F32EC_METHOD_1_8F020F016C8261B9_OFFSET))(this, a1, a2);
	}
};
