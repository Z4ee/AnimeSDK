#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_378;
class Class_1_A94C39525D598219;
class Class_1_FCDE6902B216D9E2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_35EF8ACF9B94E295_GET_CONVERTER_OFFSET UNITYSDK_OFFSET(0x9A3B880)
#define CLASS_1_35EF8ACF9B94E295_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x9A3B860)
#define CLASS_1_35EF8ACF9B94E295_METHOD_1_999899B7B18770E2_OFFSET UNITYSDK_OFFSET(0x9A3B8A0)
#define CLASS_1_35EF8ACF9B94E295_SET_CONVERTER_OFFSET UNITYSDK_OFFSET(0x9A3B890)
#define CLASS_1_35EF8ACF9B94E295_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0x9A3B870)
#define CLASS_1_35EF8ACF9B94E295__CTOR_OFFSET UNITYSDK_OFFSET(0x9A3BA80)

inline static constexpr unsigned int Class_1_35EF8ACF9B94E295_TypeDefinitionIndex = 57837;

class Class_1_35EF8ACF9B94E295 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_378* _Converter_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_BC950E36747FB4C9, ::Class_1_A94C39525D598219*>* Field_1_0; // 0x18
	::Class_1_FCDE6902B216D9E2* _Factory_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35EF8ACF9B94E295__CTOR_OFFSET))(this);
	}

	::Class_1_FCDE6902B216D9E2* get_Factory()
	{
		return ((::Class_1_FCDE6902B216D9E2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35EF8ACF9B94E295_GET_FACTORY_OFFSET))(this);
	}

	::System::Void set_Factory(::Class_1_FCDE6902B216D9E2* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FCDE6902B216D9E2*))((::PBYTE)hIl2Cpp + CLASS_1_35EF8ACF9B94E295_SET_FACTORY_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_378* get_Converter()
	{
		return ((::Class_0_16E4307DCC419505_378*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35EF8ACF9B94E295_GET_CONVERTER_OFFSET))(this);
	}

	::System::Void set_Converter(::Class_0_16E4307DCC419505_378* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_378*))((::PBYTE)hIl2Cpp + CLASS_1_35EF8ACF9B94E295_SET_CONVERTER_OFFSET))(this, value);
	}

	::Class_1_A94C39525D598219* Method_1_999899B7B18770E2(::Struct_2_BC950E36747FB4C9& a1)
	{
		return ((::Class_1_A94C39525D598219*(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&))((::PBYTE)hIl2Cpp + CLASS_1_35EF8ACF9B94E295_METHOD_1_999899B7B18770E2_OFFSET))(this, a1);
	}
};
