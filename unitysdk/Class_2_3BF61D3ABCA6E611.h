#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_3_1A345EAE5F749316_1;
namespace System::Collections::Generic { template <typename T> class Queue_1; }
template <typename T> class Class_0_16E4307DCC419505_109;
template <typename T> class Class_0_16E4307DCC41950C_14;
template <typename T> class Class_1_DD0DD411D84DAED3;

#define CLASS_2_3BF61D3ABCA6E611_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x13166150)
#define CLASS_2_3BF61D3ABCA6E611_METHOD_2_35942D7A8A374AB0_OFFSET UNITYSDK_OFFSET(0x13166350)
#define CLASS_2_3BF61D3ABCA6E611_METHOD_2_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0x131662C0)
#define CLASS_2_3BF61D3ABCA6E611_METHOD_2_C8DD1A49CA68C8E2_OFFSET UNITYSDK_OFFSET(0x131665F0)
#define CLASS_2_3BF61D3ABCA6E611_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x131669F0)
#define CLASS_2_3BF61D3ABCA6E611_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x13166070)
#define CLASS_2_3BF61D3ABCA6E611__CTOR_OFFSET UNITYSDK_OFFSET(0x13166260)

inline static constexpr unsigned int Class_2_3BF61D3ABCA6E611_TypeDefinitionIndex = 45077;

class Class_2_3BF61D3ABCA6E611 : public ::Class_1_F4299CC27263318B
{
public:
	::Class_0_16E4307DCC419505_109<::System::Boolean>* Field_2_0; // 0x70
	::Class_0_16E4307DCC41950C_14<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>* Field_2_1; // 0x78
	::System::Collections::Generic::Queue_1<::Il2CppArray<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>*>* Field_2_2; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BF61D3ABCA6E611__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BF61D3ABCA6E611_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BF61D3ABCA6E611_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_51AC7912135C5E23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BF61D3ABCA6E611_METHOD_2_51AC7912135C5E23_OFFSET))(this);
	}

	::System::Void Method_2_C8DD1A49CA68C8E2(::Class_1_DD0DD411D84DAED3<::Class_3_1A345EAE5F749316_1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD0DD411D84DAED3<::Class_3_1A345EAE5F749316_1*>*))((::PBYTE)hIl2Cpp + CLASS_2_3BF61D3ABCA6E611_METHOD_2_C8DD1A49CA68C8E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BF61D3ABCA6E611_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_35942D7A8A374AB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BF61D3ABCA6E611_METHOD_2_35942D7A8A374AB0_OFFSET))(this);
	}
};
