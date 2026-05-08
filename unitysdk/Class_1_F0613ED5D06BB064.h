#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F0613ED5D06BB064_METHOD_1_198D47022AB6E84F_OFFSET UNITYSDK_OFFSET(0x16655B30)
#define CLASS_1_F0613ED5D06BB064_METHOD_1_4C7260A34C99BD5B_OFFSET UNITYSDK_OFFSET(0x166558D0)
#define CLASS_1_F0613ED5D06BB064_METHOD_1_FDDC5A41F149A0CC_OFFSET UNITYSDK_OFFSET(0x166557C0)
#define CLASS_1_F0613ED5D06BB064__CCTOR_OFFSET UNITYSDK_OFFSET(0x16655720)

inline static constexpr unsigned int Class_1_F0613ED5D06BB064_TypeDefinitionIndex = 40011;

class Class_1_F0613ED5D06BB064 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F0613ED5D06BB064_TypeDefinitionIndex)->GetStaticField(0x39D80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F0613ED5D06BB064__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_FDDC5A41F149A0CC(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F0613ED5D06BB064_METHOD_1_FDDC5A41F149A0CC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_4C7260A34C99BD5B(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F0613ED5D06BB064_METHOD_1_4C7260A34C99BD5B_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_198D47022AB6E84F(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F0613ED5D06BB064_METHOD_1_198D47022AB6E84F_OFFSET))(a1);
	}
};
