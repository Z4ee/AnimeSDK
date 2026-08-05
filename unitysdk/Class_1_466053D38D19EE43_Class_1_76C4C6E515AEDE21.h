#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_4_AC6D98911872E0CE;
class Class_5_DCFF91E03A93C03C;

#define CLASS_1_466053D38D19EE43_CLASS_1_76C4C6E515AEDE21_METHOD_1_F9A402D7AFEB1D88_OFFSET UNITYSDK_OFFSET(0x140389D0)
#define CLASS_1_466053D38D19EE43_CLASS_1_76C4C6E515AEDE21__CTOR_OFFSET UNITYSDK_OFFSET(0x140389C0)

inline static constexpr unsigned int Class_1_466053D38D19EE43_Class_1_76C4C6E515AEDE21_TypeDefinitionIndex = 72735;

class Class_1_466053D38D19EE43_Class_1_76C4C6E515AEDE21 : public ::System::Object
{
public:
	::Class_5_DCFF91E03A93C03C* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_466053D38D19EE43_CLASS_1_76C4C6E515AEDE21__CTOR_OFFSET))(this);
	}

	::Class_4_AC6D98911872E0CE* Method_1_F9A402D7AFEB1D88(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::Class_4_AC6D98911872E0CE*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_466053D38D19EE43_CLASS_1_76C4C6E515AEDE21_METHOD_1_F9A402D7AFEB1D88_OFFSET))(this, a1);
	}
};
