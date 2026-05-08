#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_04D2D5A24B84A434_METHOD_1_255034B0584F09F8_OFFSET UNITYSDK_OFFSET(0xFA75FB0)
#define CLASS_1_04D2D5A24B84A434_METHOD_1_611142A6ECF0D805_OFFSET UNITYSDK_OFFSET(0xFA75F00)
#define CLASS_1_04D2D5A24B84A434_METHOD_1_A67DB048D1249214_OFFSET UNITYSDK_OFFSET(0xFA75E00)
#define CLASS_1_04D2D5A24B84A434_METHOD_1_A74F1CF3E25BC135_OFFSET UNITYSDK_OFFSET(0xFA75CA0)
#define CLASS_1_04D2D5A24B84A434_METHOD_1_DB8575F6AA34B1AB_OFFSET UNITYSDK_OFFSET(0xFA76010)
#define CLASS_1_04D2D5A24B84A434_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xFA76000)
#define CLASS_1_04D2D5A24B84A434__CTOR_OFFSET UNITYSDK_OFFSET(0xFA75C00)

inline static constexpr unsigned int Class_1_04D2D5A24B84A434_TypeDefinitionIndex = 80693;

class Class_1_04D2D5A24B84A434 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_1_2; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Boolean Field_1_3; // 0x19
	::System::Boolean Field_1_0; // 0x1A

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_04D2D5A24B84A434__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_A67DB048D1249214(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_04D2D5A24B84A434_METHOD_1_A67DB048D1249214_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_611142A6ECF0D805(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_04D2D5A24B84A434_METHOD_1_611142A6ECF0D805_OFFSET))(this, a1);
	}

	::System::Void Method_1_255034B0584F09F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04D2D5A24B84A434_METHOD_1_255034B0584F09F8_OFFSET))(this);
	}

	::System::Void Method_1_A74F1CF3E25BC135()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04D2D5A24B84A434_METHOD_1_A74F1CF3E25BC135_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04D2D5A24B84A434_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_DB8575F6AA34B1AB(::System::String* a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_04D2D5A24B84A434_METHOD_1_DB8575F6AA34B1AB_OFFSET))(this, a1, a2);
	}
};
