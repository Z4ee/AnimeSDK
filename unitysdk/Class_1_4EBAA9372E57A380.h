#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_41142451489A287D;
class Class_1_4EBAA9372E57A380_Class_1_04A718CFB2B0DB18_2;
class Class_2_208CC9941471731A_663;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4EBAA9372E57A380_METHOD_1_996B9749A311D0D4_OFFSET UNITYSDK_OFFSET(0x1693D890)
#define CLASS_1_4EBAA9372E57A380_METHOD_1_BDCF5E8865BEDF6E_OFFSET UNITYSDK_OFFSET(0x1693DDE0)
#define CLASS_1_4EBAA9372E57A380_METHOD_1_F9B57DBF3518EF48_OFFSET UNITYSDK_OFFSET(0x1693D880)
#define CLASS_1_4EBAA9372E57A380__CTOR_OFFSET UNITYSDK_OFFSET(0x1693D7F0)

inline static constexpr unsigned int Class_1_4EBAA9372E57A380_TypeDefinitionIndex = 17251;

class Class_1_4EBAA9372E57A380 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_4EBAA9372E57A380_Class_1_04A718CFB2B0DB18_2*>* Field_1_1; // 0x10
	::Class_1_41142451489A287D* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EBAA9372E57A380__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F9B57DBF3518EF48(::Class_1_41142451489A287D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_41142451489A287D*))((::PBYTE)hIl2Cpp + CLASS_1_4EBAA9372E57A380_METHOD_1_F9B57DBF3518EF48_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_663* Method_1_BDCF5E8865BEDF6E(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_2_208CC9941471731A_663*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4EBAA9372E57A380_METHOD_1_BDCF5E8865BEDF6E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_996B9749A311D0D4(::Class_1_41142451489A287D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_41142451489A287D*))((::PBYTE)hIl2Cpp + CLASS_1_4EBAA9372E57A380_METHOD_1_996B9749A311D0D4_OFFSET))(this, a1);
	}
};
