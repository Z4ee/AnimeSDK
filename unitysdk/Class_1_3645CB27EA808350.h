#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_3645CB27EA808350_METHOD_1_4242D44AD199D100_OFFSET UNITYSDK_OFFSET(0x142345A0)
#define CLASS_1_3645CB27EA808350_METHOD_1_60DC879ACE99CF48_OFFSET UNITYSDK_OFFSET(0x14234120)
#define CLASS_1_3645CB27EA808350_METHOD_1_657C58CA56493C85_OFFSET UNITYSDK_OFFSET(0x142346B0)
#define CLASS_1_3645CB27EA808350_METHOD_1_76B6FC7A9A488CEF_OFFSET UNITYSDK_OFFSET(0x14234190)
#define CLASS_1_3645CB27EA808350_METHOD_1_9CB348C4974EFC77_OFFSET UNITYSDK_OFFSET(0x14234400)
#define CLASS_1_3645CB27EA808350_METHOD_1_EC06111B5EBE4753_OFFSET UNITYSDK_OFFSET(0x14234210)
#define CLASS_1_3645CB27EA808350__CCTOR_OFFSET UNITYSDK_OFFSET(0x14234000)

inline static constexpr unsigned int Class_1_3645CB27EA808350_TypeDefinitionIndex = 79597;

class Class_1_3645CB27EA808350 : public ::System::Object
{
public:
	static ::System::Text::StringBuilder** StaticGet_Field_1_0()
	{
		return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3645CB27EA808350_TypeDefinitionIndex)->GetStaticField(0x51280);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3645CB27EA808350_TypeDefinitionIndex)->GetStaticField(0x51288);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3645CB27EA808350__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_60DC879ACE99CF48(::System::String*& a1)
	{
		return ((::System::Void(*)(::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_3645CB27EA808350_METHOD_1_60DC879ACE99CF48_OFFSET))(a1);
	}

	static ::System::String* Method_1_76B6FC7A9A488CEF(::System::Type* a1)
	{
		return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_3645CB27EA808350_METHOD_1_76B6FC7A9A488CEF_OFFSET))(a1);
	}

	static ::System::String* Method_1_9CB348C4974EFC77(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3645CB27EA808350_METHOD_1_9CB348C4974EFC77_OFFSET))(a1);
	}

	static ::System::String* Method_1_EC06111B5EBE4753(::System::Type* a1)
	{
		return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_3645CB27EA808350_METHOD_1_EC06111B5EBE4753_OFFSET))(a1);
	}

	static ::System::String* Method_1_4242D44AD199D100(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_3645CB27EA808350_METHOD_1_4242D44AD199D100_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_657C58CA56493C85(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3645CB27EA808350_METHOD_1_657C58CA56493C85_OFFSET))(a1);
	}
};
