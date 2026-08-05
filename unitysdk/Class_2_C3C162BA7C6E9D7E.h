#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_360.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_977.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_C3C162BA7C6E9D7E_METHOD_2_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0x175206A0)
#define CLASS_2_C3C162BA7C6E9D7E_METHOD_2_1777D4391FE95E07_OFFSET UNITYSDK_OFFSET(0x175200F0)
#define CLASS_2_C3C162BA7C6E9D7E_METHOD_2_59C17FC28FEC37ED_OFFSET UNITYSDK_OFFSET(0x175205B0)
#define CLASS_2_C3C162BA7C6E9D7E_METHOD_2_E2B57196A1328236_OFFSET UNITYSDK_OFFSET(0x17520270)
#define CLASS_2_C3C162BA7C6E9D7E_METHOD_2_EFCC463CE38033CF_OFFSET UNITYSDK_OFFSET(0x17520180)
#define CLASS_2_C3C162BA7C6E9D7E__CTOR_OFFSET UNITYSDK_OFFSET(0x1751FFC0)

inline static constexpr unsigned int Class_2_C3C162BA7C6E9D7E_TypeDefinitionIndex = 73748;

class Class_2_C3C162BA7C6E9D7E : public ::Class_1_5DA2E7556103D5A3_360
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_0; // 0xF0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_2_1; // 0xF8

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_977 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_977, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_C3C162BA7C6E9D7E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1777D4391FE95E07(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C3C162BA7C6E9D7E_METHOD_2_1777D4391FE95E07_OFFSET))(this, a1);
	}

	::System::Single Method_2_EFCC463CE38033CF(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C3C162BA7C6E9D7E_METHOD_2_EFCC463CE38033CF_OFFSET))(this, a1);
	}

	::System::Void Method_2_E2B57196A1328236(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C3C162BA7C6E9D7E_METHOD_2_E2B57196A1328236_OFFSET))(this, a1);
	}

	::System::String* Method_2_59C17FC28FEC37ED(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C3C162BA7C6E9D7E_METHOD_2_59C17FC28FEC37ED_OFFSET))(this, a1);
	}

	::System::Void Method_2_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3C162BA7C6E9D7E_METHOD_2_03A81715BD2AFEF3_OFFSET))(this);
	}
};
