#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_19452D3A5E420E68.h"

class Class_0_16E4307DCC419505_904;
class Class_0_16E4307DCC419505_912;
class Class_4_2DE1F1A2CD3C3AF3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_362CDBADC0E9E34E_METHOD_3_74536FB86B1DF8C2_OFFSET UNITYSDK_OFFSET(0x16F6B730)
#define CLASS_3_362CDBADC0E9E34E_METHOD_3_F1418BE84C339826_OFFSET UNITYSDK_OFFSET(0x16F6B460)
#define CLASS_3_362CDBADC0E9E34E__CTOR_OFFSET UNITYSDK_OFFSET(0x16F6B420)

inline static constexpr unsigned int Class_3_362CDBADC0E9E34E_TypeDefinitionIndex = 64245;

class Class_3_362CDBADC0E9E34E : public ::Class_2_19452D3A5E420E68
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_912*>* Field_3_0; // 0x10
	::Class_0_16E4307DCC419505_904* Field_3_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_904* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_904*))((::PBYTE)hIl2Cpp + CLASS_3_362CDBADC0E9E34E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_F1418BE84C339826(::Class_4_2DE1F1A2CD3C3AF3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_2DE1F1A2CD3C3AF3*))((::PBYTE)hIl2Cpp + CLASS_3_362CDBADC0E9E34E_METHOD_3_F1418BE84C339826_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_912*>* Method_3_74536FB86B1DF8C2()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_912*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_362CDBADC0E9E34E_METHOD_3_74536FB86B1DF8C2_OFFSET))(this);
	}
};
