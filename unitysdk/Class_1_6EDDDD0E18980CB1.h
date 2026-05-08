#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_34F7035555410463_1.h"
#include "unitysdk/MoleMole/LanguageVoiceType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_6EDDDD0E18980CB1_METHOD_1_36BE6F42A64CA1D6_OFFSET UNITYSDK_OFFSET(0x15174A70)
#define CLASS_1_6EDDDD0E18980CB1_METHOD_1_4B040FE5462B6B94_OFFSET UNITYSDK_OFFSET(0x15174B10)
#define CLASS_1_6EDDDD0E18980CB1_METHOD_1_51A29A57E771406D_OFFSET UNITYSDK_OFFSET(0x15174CF0)
#define CLASS_1_6EDDDD0E18980CB1_METHOD_1_AEFB92F609516AF8_OFFSET UNITYSDK_OFFSET(0x15174C50)
#define CLASS_1_6EDDDD0E18980CB1__CCTOR_OFFSET UNITYSDK_OFFSET(0x15174710)
#define CLASS_1_6EDDDD0E18980CB1__CTOR_OFFSET UNITYSDK_OFFSET(0x15174700)

inline static constexpr unsigned int Class_1_6EDDDD0E18980CB1_TypeDefinitionIndex = 51370;

class Class_1_6EDDDD0E18980CB1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageVoiceType, ::Il2CppArray<::Enum_3_34F7035555410463_1>*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageVoiceType, ::Il2CppArray<::Enum_3_34F7035555410463_1>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6EDDDD0E18980CB1_TypeDefinitionIndex)->GetStaticField(0x45020);
	}
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageVoiceType, ::Il2CppArray<::System::Int32>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageVoiceType, ::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6EDDDD0E18980CB1_TypeDefinitionIndex)->GetStaticField(0x45028);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EDDDD0E18980CB1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6EDDDD0E18980CB1__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* Method_1_36BE6F42A64CA1D6(::System::String* a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6EDDDD0E18980CB1_METHOD_1_36BE6F42A64CA1D6_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IReadOnlyList_1<::Enum_3_34F7035555410463_1>* Method_1_AEFB92F609516AF8(::System::String* a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Enum_3_34F7035555410463_1>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6EDDDD0E18980CB1_METHOD_1_AEFB92F609516AF8_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* Method_1_4B040FE5462B6B94(::MoleMole::LanguageVoiceType a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::MoleMole::LanguageVoiceType))((::PBYTE)hIl2Cpp + CLASS_1_6EDDDD0E18980CB1_METHOD_1_4B040FE5462B6B94_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IReadOnlyList_1<::Enum_3_34F7035555410463_1>* Method_1_51A29A57E771406D(::MoleMole::LanguageVoiceType a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Enum_3_34F7035555410463_1>*(*)(::MoleMole::LanguageVoiceType))((::PBYTE)hIl2Cpp + CLASS_1_6EDDDD0E18980CB1_METHOD_1_51A29A57E771406D_OFFSET))(a1);
	}
};
