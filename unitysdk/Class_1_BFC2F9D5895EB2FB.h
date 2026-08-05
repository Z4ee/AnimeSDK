#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BFC2F9D5895EB2FB_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1A897380)
#define CLASS_1_BFC2F9D5895EB2FB_METHOD_1_06033EC2B8E06C90_OFFSET UNITYSDK_OFFSET(0x1A897DB0)
#define CLASS_1_BFC2F9D5895EB2FB_METHOD_1_20E9ED77B87BE404_OFFSET UNITYSDK_OFFSET(0x1A897F80)
#define CLASS_1_BFC2F9D5895EB2FB_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1A898090)
#define CLASS_1_BFC2F9D5895EB2FB_METHOD_1_5009BD3C08788261_OFFSET UNITYSDK_OFFSET(0x1A898190)
#define CLASS_1_BFC2F9D5895EB2FB_METHOD_1_5191FD5DEE8127E6_OFFSET UNITYSDK_OFFSET(0x1A897B40)
#define CLASS_1_BFC2F9D5895EB2FB_METHOD_1_59343D742BA08444_OFFSET UNITYSDK_OFFSET(0x1A8976F0)
#define CLASS_1_BFC2F9D5895EB2FB_METHOD_1_7A2FEB79E771260C_OFFSET UNITYSDK_OFFSET(0x1A897470)
#define CLASS_1_BFC2F9D5895EB2FB_METHOD_1_9EB31C7564DC7A94_OFFSET UNITYSDK_OFFSET(0x1A897580)
#define CLASS_1_BFC2F9D5895EB2FB_METHOD_1_AEEAC3E3FC92548B_OFFSET UNITYSDK_OFFSET(0x1A8977A0)
#define CLASS_1_BFC2F9D5895EB2FB_METHOD_1_B793DFE2B3595557_OFFSET UNITYSDK_OFFSET(0x1A8978A0)
#define CLASS_1_BFC2F9D5895EB2FB_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x1A897680)
#define CLASS_1_BFC2F9D5895EB2FB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A897460)

inline static constexpr unsigned int Class_1_BFC2F9D5895EB2FB_TypeDefinitionIndex = 89607;

class Class_1_BFC2F9D5895EB2FB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFC2F9D5895EB2FB__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFC2F9D5895EB2FB_BEFORERECYCLE_OFFSET))(this);
	}

	::System::Boolean Method_1_7A2FEB79E771260C(::System::String* a1, ::System::Double& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Double&))((::PBYTE)hIl2Cpp + CLASS_1_BFC2F9D5895EB2FB_METHOD_1_7A2FEB79E771260C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9EB31C7564DC7A94(::System::String* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_BFC2F9D5895EB2FB_METHOD_1_9EB31C7564DC7A94_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFC2F9D5895EB2FB_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Boolean Method_1_59343D742BA08444(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BFC2F9D5895EB2FB_METHOD_1_59343D742BA08444_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AEEAC3E3FC92548B(::System::String* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_BFC2F9D5895EB2FB_METHOD_1_AEEAC3E3FC92548B_OFFSET))(this, a1, a2);
	}

	::Class_1_BFC2F9D5895EB2FB* Method_1_B793DFE2B3595557()
	{
		return ((::Class_1_BFC2F9D5895EB2FB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFC2F9D5895EB2FB_METHOD_1_B793DFE2B3595557_OFFSET))(this);
	}

	::System::Boolean Method_1_06033EC2B8E06C90(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BFC2F9D5895EB2FB_METHOD_1_06033EC2B8E06C90_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_20E9ED77B87BE404(::System::String* a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_BFC2F9D5895EB2FB_METHOD_1_20E9ED77B87BE404_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFC2F9D5895EB2FB_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Boolean Method_1_5009BD3C08788261(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BFC2F9D5895EB2FB_METHOD_1_5009BD3C08788261_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5191FD5DEE8127E6(::System::String* a1, ::System::Double a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_BFC2F9D5895EB2FB_METHOD_1_5191FD5DEE8127E6_OFFSET))(this, a1, a2);
	}
};
