#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"
#include "unitysdk/Enum_3_7609C87F8335DE37_2.h"

class Class_2_9CF591E9FCB0B5F1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_683EE6564D299599_METHOD_2_13CC54082E9757C7_OFFSET UNITYSDK_OFFSET(0x100C85A0)
#define CLASS_2_683EE6564D299599_METHOD_2_6242B2526D287466_OFFSET UNITYSDK_OFFSET(0x100C83A0)
#define CLASS_2_683EE6564D299599_METHOD_2_98731A8D0085C0C4_OFFSET UNITYSDK_OFFSET(0x100C8ED0)
#define CLASS_2_683EE6564D299599_METHOD_2_B3A8877A146D62E8_OFFSET UNITYSDK_OFFSET(0x100C8710)
#define CLASS_2_683EE6564D299599_METHOD_2_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0x100C8E30)
#define CLASS_2_683EE6564D299599_METHOD_2_DE7E67C6E4A905B8_OFFSET UNITYSDK_OFFSET(0x100C8860)
#define CLASS_2_683EE6564D299599_METHOD_2_F05310C81E52C6E2_OFFSET UNITYSDK_OFFSET(0x100C88D0)
#define CLASS_2_683EE6564D299599__CCTOR_OFFSET UNITYSDK_OFFSET(0x100C8390)
#define CLASS_2_683EE6564D299599__CTOR_OFFSET UNITYSDK_OFFSET(0x100C82C0)

inline static constexpr unsigned int Class_2_683EE6564D299599_TypeDefinitionIndex = 46788;

class Class_2_683EE6564D299599 : public ::Class_1_BE149A7D6310B037
{
public:
	static ::Class_2_9CF591E9FCB0B5F1** StaticGet_Field_2_3()
	{
		return (::Class_2_9CF591E9FCB0B5F1**)Il2CppClass::FromTypeDefinitionIndex(Class_2_683EE6564D299599_TypeDefinitionIndex)->GetStaticField(0x3D9F0);
	}
	static ::System::Boolean* StaticGet_Field_2_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_683EE6564D299599_TypeDefinitionIndex)->GetStaticField(0xF050);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_9CF591E9FCB0B5F1*>* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_683EE6564D299599__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_683EE6564D299599__CCTOR_OFFSET))();
	}

	static ::Class_2_9CF591E9FCB0B5F1* Method_2_6242B2526D287466()
	{
		return ((::Class_2_9CF591E9FCB0B5F1*(*)())((::PBYTE)hIl2Cpp + CLASS_2_683EE6564D299599_METHOD_2_6242B2526D287466_OFFSET))();
	}

	::System::Void Method_2_B3A8877A146D62E8(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_683EE6564D299599_METHOD_2_B3A8877A146D62E8_OFFSET))(this, a1);
	}

	::System::Void Method_2_DE7E67C6E4A905B8(::Enum_3_7609C87F8335DE37_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7609C87F8335DE37_2))((::PBYTE)hIl2Cpp + CLASS_2_683EE6564D299599_METHOD_2_DE7E67C6E4A905B8_OFFSET))(this, a1);
	}

	::Class_2_9CF591E9FCB0B5F1* Method_2_F05310C81E52C6E2(::Enum_3_7609C87F8335DE37_2 a1)
	{
		return ((::Class_2_9CF591E9FCB0B5F1*(*)(::PVOID, ::Enum_3_7609C87F8335DE37_2))((::PBYTE)hIl2Cpp + CLASS_2_683EE6564D299599_METHOD_2_F05310C81E52C6E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_98731A8D0085C0C4(::Enum_3_7609C87F8335DE37_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7609C87F8335DE37_2))((::PBYTE)hIl2Cpp + CLASS_2_683EE6564D299599_METHOD_2_98731A8D0085C0C4_OFFSET))(this, a1);
	}

	::Class_2_9CF591E9FCB0B5F1* Method_2_13CC54082E9757C7()
	{
		return ((::Class_2_9CF591E9FCB0B5F1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_683EE6564D299599_METHOD_2_13CC54082E9757C7_OFFSET))(this);
	}

	::System::Void Method_2_C50A2293958CA940(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_683EE6564D299599_METHOD_2_C50A2293958CA940_OFFSET))(this, a1);
	}
};
