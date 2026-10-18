#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_19452D3A5E420E68.h"

class Class_0_16E4307DCC419505_1059;
class Class_0_16E4307DCC419505_1067;
class Class_4_2DE1F1A2CD3C3AF3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_362CDBADC0E9E34E_METHOD_3_74536FB86B1DF8C2_OFFSET UNITYSDK_OFFSET(0x15C503F0)
#define CLASS_3_362CDBADC0E9E34E_METHOD_3_F1418BE84C339826_OFFSET UNITYSDK_OFFSET(0x15C50120)
#define CLASS_3_362CDBADC0E9E34E__CTOR_OFFSET UNITYSDK_OFFSET(0x15C500E0)

inline static constexpr unsigned int Class_3_362CDBADC0E9E34E_TypeDefinitionIndex = 67242;

class Class_3_362CDBADC0E9E34E : public ::Class_2_19452D3A5E420E68
{
public:
	::Class_0_16E4307DCC419505_1059* NABLOINKCCC; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1067*>* JPHNLHGEIFL; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_1059* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1059*))((::PBYTE)hIl2Cpp + CLASS_3_362CDBADC0E9E34E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_F1418BE84C339826(::Class_4_2DE1F1A2CD3C3AF3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_2DE1F1A2CD3C3AF3*))((::PBYTE)hIl2Cpp + CLASS_3_362CDBADC0E9E34E_METHOD_3_F1418BE84C339826_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1067*>* Method_3_74536FB86B1DF8C2()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1067*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_362CDBADC0E9E34E_METHOD_3_74536FB86B1DF8C2_OFFSET))(this);
	}
};
