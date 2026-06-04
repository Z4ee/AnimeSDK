#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesDialogStyleType.h"
#include "unitysdk/RPG/GameCore/ChenLingFesToastStyleType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_41247AE36FE8E03B_METHOD_1_443209CCA2CC4D13_OFFSET UNITYSDK_OFFSET(0xA399E10)
#define CLASS_1_41247AE36FE8E03B_METHOD_1_B20B4A5343A4561F_OFFSET UNITYSDK_OFFSET(0xA399B90)
#define CLASS_1_41247AE36FE8E03B_METHOD_1_D7C68144747E5ADE_OFFSET UNITYSDK_OFFSET(0xA399CD0)
#define CLASS_1_41247AE36FE8E03B__CCTOR_OFFSET UNITYSDK_OFFSET(0xA399F50)

inline static constexpr unsigned int Class_1_41247AE36FE8E03B_TypeDefinitionIndex = 74015;

class Class_1_41247AE36FE8E03B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChenLingFesToastStyleType, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChenLingFesToastStyleType, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_41247AE36FE8E03B_TypeDefinitionIndex)->GetStaticField(0x18EA0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_41247AE36FE8E03B_TypeDefinitionIndex)->GetStaticField(0x18EA8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChenLingFesDialogStyleType, ::System::String*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChenLingFesDialogStyleType, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_41247AE36FE8E03B_TypeDefinitionIndex)->GetStaticField(0x18EB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_41247AE36FE8E03B__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_B20B4A5343A4561F(::RPG::GameCore::ChenLingFesDialogStyleType a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::ChenLingFesDialogStyleType, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_41247AE36FE8E03B_METHOD_1_B20B4A5343A4561F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D7C68144747E5ADE(::RPG::GameCore::ChenLingFesToastStyleType a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::ChenLingFesToastStyleType, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_41247AE36FE8E03B_METHOD_1_D7C68144747E5ADE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_443209CCA2CC4D13(::System::String* a1, ::System::Type*& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Type*&))((::PBYTE)hIl2Cpp + CLASS_1_41247AE36FE8E03B_METHOD_1_443209CCA2CC4D13_OFFSET))(a1, a2);
	}
};
