#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_5_78B1EAE4D1A36E33;
class Class_5_A6F8D19602712D95;
class Class_5_DCFF91E03A93C03C;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_5_78B1EAE4D1A36E33_CLASS_1_7DF9AF2BB910205D_METHOD_1_71BB222C65B6343D_OFFSET UNITYSDK_OFFSET(0x1457C030)
#define CLASS_5_78B1EAE4D1A36E33_CLASS_1_7DF9AF2BB910205D__CTOR_OFFSET UNITYSDK_OFFSET(0x1457C020)

inline static constexpr unsigned int Class_5_78B1EAE4D1A36E33_Class_1_7DF9AF2BB910205D_TypeDefinitionIndex = 58082;

class Class_5_78B1EAE4D1A36E33_Class_1_7DF9AF2BB910205D : public ::System::Object
{
public:
	::Class_5_78B1EAE4D1A36E33* Field_1_1; // 0x10
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_2; // 0x18
	::Class_5_DCFF91E03A93C03C* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_CLASS_1_7DF9AF2BB910205D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_71BB222C65B6343D(::Class_5_A6F8D19602712D95* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_CLASS_1_7DF9AF2BB910205D_METHOD_1_71BB222C65B6343D_OFFSET))(this, a1);
	}
};
