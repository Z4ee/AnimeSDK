#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6770BC9DDC5C458C;
class Class_1_CC4789213986EBB7_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2839EDE8633A54DD_2_GET_FUNS_OFFSET UNITYSDK_OFFSET(0x1781D190)
#define CLASS_1_2839EDE8633A54DD_2_METHOD_1_CA99028638214CFF_OFFSET UNITYSDK_OFFSET(0x1781D220)
#define CLASS_1_2839EDE8633A54DD_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1781D1A0)

inline static constexpr unsigned int Class_1_2839EDE8633A54DD_2_TypeDefinitionIndex = 63987;

class Class_1_2839EDE8633A54DD_2 : public ::System::Object
{
public:
	::Class_1_CC4789213986EBB7_1* JKOCLNODAJD; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6770BC9DDC5C458C*>* _Funs_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_CC4789213986EBB7_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CC4789213986EBB7_1*))((::PBYTE)hIl2Cpp + CLASS_1_2839EDE8633A54DD_2__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6770BC9DDC5C458C*>* get_Funs()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6770BC9DDC5C458C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2839EDE8633A54DD_2_GET_FUNS_OFFSET))(this);
	}

	::Class_1_6770BC9DDC5C458C* Method_1_CA99028638214CFF(::System::UInt32 a1)
	{
		return ((::Class_1_6770BC9DDC5C458C*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2839EDE8633A54DD_2_METHOD_1_CA99028638214CFF_OFFSET))(this, a1);
	}
};
