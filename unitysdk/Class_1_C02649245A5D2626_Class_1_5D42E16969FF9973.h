#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"
#include "unitysdk/System/Object.h"

class Class_1_C02649245A5D2626_Class_1_692633D2C6B68FCE;
namespace System { class String; }
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_1_C02649245A5D2626_CLASS_1_5D42E16969FF9973_METHOD_1_5885BE70B8D351A2_OFFSET UNITYSDK_OFFSET(0x1653B990)
#define CLASS_1_C02649245A5D2626_CLASS_1_5D42E16969FF9973__CTOR_OFFSET UNITYSDK_OFFSET(0x1653B980)

inline static constexpr unsigned int Class_1_C02649245A5D2626_Class_1_5D42E16969FF9973_TypeDefinitionIndex = 52551;

class Class_1_C02649245A5D2626_Class_1_5D42E16969FF9973 : public ::System::Object
{
public:
	::Class_1_C02649245A5D2626_Class_1_692633D2C6B68FCE* Field_1_0; // 0x10
	::Class_2_F16D73323D71766B<::System::String*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626_CLASS_1_5D42E16969FF9973__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5885BE70B8D351A2(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626_CLASS_1_5D42E16969FF9973_METHOD_1_5885BE70B8D351A2_OFFSET))(this, a1);
	}
};
