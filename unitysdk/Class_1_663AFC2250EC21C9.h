#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_663AFC2250EC21C9_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x16A2BFF0)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_20E9ED77B87BE404_OFFSET UNITYSDK_OFFSET(0x16A2C4A0)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x16A2C3A0)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_5009BD3C08788261_OFFSET UNITYSDK_OFFSET(0x16A2CE00)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_5191FD5DEE8127E6_OFFSET UNITYSDK_OFFSET(0x16A2C8C0)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_59343D742BA08444_OFFSET UNITYSDK_OFFSET(0x16A2C2F0)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_7A2FEB79E771260C_OFFSET UNITYSDK_OFFSET(0x16A2C0E0)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_9EB31C7564DC7A94_OFFSET UNITYSDK_OFFSET(0x16A2CD00)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_AEEAC3E3FC92548B_OFFSET UNITYSDK_OFFSET(0x16A2C1F0)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_B793DFE2B3595557_OFFSET UNITYSDK_OFFSET(0x16A2C620)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_B931DB9EE891755B_OFFSET UNITYSDK_OFFSET(0x16A2CB30)
#define CLASS_1_663AFC2250EC21C9_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x16A2C5B0)
#define CLASS_1_663AFC2250EC21C9__CTOR_OFFSET UNITYSDK_OFFSET(0x16A2C0D0)

inline static constexpr unsigned int Class_1_663AFC2250EC21C9_TypeDefinitionIndex = 55986;

class Class_1_663AFC2250EC21C9 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_BEFORERECYCLE_OFFSET))(this);
	}

	::System::Boolean Method_1_7A2FEB79E771260C(::System::String* a1, ::System::Double& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Double&))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_7A2FEB79E771260C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_AEEAC3E3FC92548B(::System::String* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_AEEAC3E3FC92548B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_59343D742BA08444(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_59343D742BA08444_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Boolean Method_1_20E9ED77B87BE404(::System::String* a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_20E9ED77B87BE404_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::Class_1_663AFC2250EC21C9* Method_1_B793DFE2B3595557()
	{
		return ((::Class_1_663AFC2250EC21C9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_B793DFE2B3595557_OFFSET))(this);
	}

	::System::Boolean Method_1_5191FD5DEE8127E6(::System::String* a1, ::System::Double a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_5191FD5DEE8127E6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_B931DB9EE891755B(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_B931DB9EE891755B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9EB31C7564DC7A94(::System::String* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_9EB31C7564DC7A94_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5009BD3C08788261(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_663AFC2250EC21C9_METHOD_1_5009BD3C08788261_OFFSET))(this, a1);
	}
};
