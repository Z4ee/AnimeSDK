#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_159;

#define CLASS_2_D307EFECA425B258_METHOD_2_0D8F92E2795A8CEB_OFFSET UNITYSDK_OFFSET(0x16FFDAF0)
#define CLASS_2_D307EFECA425B258_METHOD_2_E9716B62F7D8AAB6_OFFSET UNITYSDK_OFFSET(0x16FFDE60)
#define CLASS_2_D307EFECA425B258_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x16FFD9D0)
#define CLASS_2_D307EFECA425B258__CTOR_OFFSET UNITYSDK_OFFSET(0x16FFDAE0)

inline static constexpr unsigned int Class_2_D307EFECA425B258_TypeDefinitionIndex = 91433;

class Class_2_D307EFECA425B258 : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_0_16E4307DCC419505_159<::System::String*>* Field_2_7; // 0x80
	::Class_0_16E4307DCC419505_159<::System::Int32>* Field_2_5; // 0x88
	::Class_0_16E4307DCC419505_159<::System::Int32>* Field_2_0; // 0x90
	::Class_0_16E4307DCC419505_159<::System::Int32>* Field_2_6; // 0x98
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_4; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D307EFECA425B258__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D307EFECA425B258_ONCREATEPROPERTY_OFFSET))(this);
	}

	static ::Class_2_D307EFECA425B258* Method_2_0D8F92E2795A8CEB(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_2_D307EFECA425B258*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D307EFECA425B258_METHOD_2_0D8F92E2795A8CEB_OFFSET))(a1, a2);
	}

	::System::Void Method_2_E9716B62F7D8AAB6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D307EFECA425B258_METHOD_2_E9716B62F7D8AAB6_OFFSET))(this, a1);
	}
};
