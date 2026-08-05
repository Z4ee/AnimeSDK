#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageVoiceType.h"
#include "unitysdk/System/Object.h"

class Class_1_EB2E85C92DACFBF6;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2F3E6C0E4503461B_METHOD_1_0E7420739E72ED23_OFFSET UNITYSDK_OFFSET(0x145CA9F0)
#define CLASS_1_2F3E6C0E4503461B_METHOD_1_19ED9DE4E1D12CB7_1_OFFSET UNITYSDK_OFFSET(0x145CABD0)
#define CLASS_1_2F3E6C0E4503461B_METHOD_1_19ED9DE4E1D12CB7_OFFSET UNITYSDK_OFFSET(0x145CA630)
#define CLASS_1_2F3E6C0E4503461B_METHOD_1_3781EA5972785950_OFFSET UNITYSDK_OFFSET(0x145CA450)
#define CLASS_1_2F3E6C0E4503461B_METHOD_1_4FB9AEEBB8BF0C32_OFFSET UNITYSDK_OFFSET(0x145CA330)
#define CLASS_1_2F3E6C0E4503461B_METHOD_1_C3259EFC4345F895_1_OFFSET UNITYSDK_OFFSET(0x145CAED0)
#define CLASS_1_2F3E6C0E4503461B_METHOD_1_C3259EFC4345F895_OFFSET UNITYSDK_OFFSET(0x145CAE10)
#define CLASS_1_2F3E6C0E4503461B__CCTOR_OFFSET UNITYSDK_OFFSET(0x145CA200)

inline static constexpr unsigned int Class_1_2F3E6C0E4503461B_TypeDefinitionIndex = 65595;

class Class_1_2F3E6C0E4503461B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_EB2E85C92DACFBF6*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_EB2E85C92DACFBF6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F3E6C0E4503461B_TypeDefinitionIndex)->GetStaticField(0x46520);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_EB2E85C92DACFBF6*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_EB2E85C92DACFBF6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F3E6C0E4503461B_TypeDefinitionIndex)->GetStaticField(0x46528);
	}
	static ::MoleMole::LanguageVoiceType* StaticGet_Field_1_7()
	{
		return (::MoleMole::LanguageVoiceType*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F3E6C0E4503461B_TypeDefinitionIndex)->GetStaticField(0x104B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F3E6C0E4503461B__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_4FB9AEEBB8BF0C32(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2F3E6C0E4503461B_METHOD_1_4FB9AEEBB8BF0C32_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_EB2E85C92DACFBF6* Method_1_19ED9DE4E1D12CB7(::System::String* a1)
	{
		return ((::Class_1_EB2E85C92DACFBF6*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2F3E6C0E4503461B_METHOD_1_19ED9DE4E1D12CB7_OFFSET))(a1);
	}

	static ::System::Void Method_1_3781EA5972785950(::System::Boolean a1, ::System::Action* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F3E6C0E4503461B_METHOD_1_3781EA5972785950_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_EB2E85C92DACFBF6* Method_1_19ED9DE4E1D12CB7_1(::System::String* a1)
	{
		return ((::Class_1_EB2E85C92DACFBF6*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2F3E6C0E4503461B_METHOD_1_19ED9DE4E1D12CB7_1_OFFSET))(a1);
	}

	static ::Class_1_EB2E85C92DACFBF6* Method_1_0E7420739E72ED23(::System::String* a1)
	{
		return ((::Class_1_EB2E85C92DACFBF6*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2F3E6C0E4503461B_METHOD_1_0E7420739E72ED23_OFFSET))(a1);
	}

	static ::System::Single Method_1_C3259EFC4345F895(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2F3E6C0E4503461B_METHOD_1_C3259EFC4345F895_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_C3259EFC4345F895_1(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2F3E6C0E4503461B_METHOD_1_C3259EFC4345F895_1_OFFSET))(a1, a2);
	}
};
