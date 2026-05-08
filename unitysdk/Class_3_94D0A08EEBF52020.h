#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F5EA751E57657302.h"
#include "unitysdk/Struct_2_0B8A00E6770FCC03.h"

class Class_0_16E4307DCC419505_430;
class Class_1_B920C49EB192B015;
class Class_1_E04739D1A87B45E5;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_94D0A08EEBF52020_METHOD_3_191F7866D25E9ABE_OFFSET UNITYSDK_OFFSET(0x12C59710)
#define CLASS_3_94D0A08EEBF52020_METHOD_3_3B2051C60621D523_OFFSET UNITYSDK_OFFSET(0x12C59B00)
#define CLASS_3_94D0A08EEBF52020_METHOD_3_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x12C598B0)
#define CLASS_3_94D0A08EEBF52020_METHOD_3_E1513374C600EBEC_OFFSET UNITYSDK_OFFSET(0x12C59960)
#define CLASS_3_94D0A08EEBF52020__CTOR_OFFSET UNITYSDK_OFFSET(0x12C59630)

inline static constexpr unsigned int Class_3_94D0A08EEBF52020_TypeDefinitionIndex = 60839;

class Class_3_94D0A08EEBF52020 : public ::Class_2_F5EA751E57657302<::Class_3_94D0A08EEBF52020*>
{
public:
	// static const ::System::Int32 Field_3_1 = 0x12C; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_430*>* Field_3_0; // 0x10
	::System::Int32 Field_3_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_94D0A08EEBF52020__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_191F7866D25E9ABE(::Class_1_E04739D1A87B45E5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E04739D1A87B45E5*))((::PBYTE)hIl2Cpp + CLASS_3_94D0A08EEBF52020_METHOD_3_191F7866D25E9ABE_OFFSET))(this, a1);
	}

	::System::Void Method_3_6BCEDD4814D8A8D9(::Struct_2_0B8A00E6770FCC03& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_0B8A00E6770FCC03&))((::PBYTE)hIl2Cpp + CLASS_3_94D0A08EEBF52020_METHOD_3_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void Method_3_E1513374C600EBEC(::Class_1_B920C49EB192B015* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B920C49EB192B015*))((::PBYTE)hIl2Cpp + CLASS_3_94D0A08EEBF52020_METHOD_3_E1513374C600EBEC_OFFSET))(this, a1);
	}

	::System::Void Method_3_3B2051C60621D523()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_94D0A08EEBF52020_METHOD_3_3B2051C60621D523_OFFSET))(this);
	}
};
