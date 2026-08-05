#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_27BF0D06F6EF97EC.h"
#include "unitysdk/Enum_3_AB9CCA0B2E05A401.h"
#include "unitysdk/Foundation/Tuple_2.h"
#include "unitysdk/System/Object.h"

class Class_2_C7E76916F561CEB8;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_60E55DB695D9B39B_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x145861A0)
#define CLASS_1_60E55DB695D9B39B_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x14586100)
#define CLASS_1_60E55DB695D9B39B_METHOD_1_77984DE08FE49DAE_OFFSET UNITYSDK_OFFSET(0x14586200)
#define CLASS_1_60E55DB695D9B39B_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x14586260)
#define CLASS_1_60E55DB695D9B39B_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x145861F0)
#define CLASS_1_60E55DB695D9B39B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14586160)
#define CLASS_1_60E55DB695D9B39B__CTOR_OFFSET UNITYSDK_OFFSET(0x14585810)

inline static constexpr unsigned int Class_1_60E55DB695D9B39B_TypeDefinitionIndex = 65898;

class Class_1_60E55DB695D9B39B : public ::System::Object
{
public:
	::Class_2_C7E76916F561CEB8* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_1_7; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_1_6; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::Tuple_2<::System::Int32, ::System::String*>>* Field_1_4; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::Tuple_2<::System::Int32, ::System::String*>>* Field_1_11; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_5; // 0x38
	::System::Int32 Field_1_2; // 0x40
	::System::Int32 Field_1_3; // 0x44
	::Enum_3_27BF0D06F6EF97EC Field_1_1; // 0x48
	::System::Int32 Field_1_10; // 0x4C
	::System::Int32 Field_1_9; // 0x50

	::System::Void _ctor(::Class_2_C7E76916F561CEB8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C7E76916F561CEB8*))((::PBYTE)hIl2Cpp + CLASS_1_60E55DB695D9B39B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E55DB695D9B39B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E55DB695D9B39B_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E55DB695D9B39B_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E55DB695D9B39B_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_77984DE08FE49DAE(::Enum_3_AB9CCA0B2E05A401 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_AB9CCA0B2E05A401))((::PBYTE)hIl2Cpp + CLASS_1_60E55DB695D9B39B_METHOD_1_77984DE08FE49DAE_OFFSET))(this, a1);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_60E55DB695D9B39B_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}
};
