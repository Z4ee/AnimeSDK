#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesDialogStyleType.h"
#include "unitysdk/RPG/GameCore/ChenLingFesToastStyleType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_41247AE36FE8E03B_METHOD_1_443209CCA2CC4D13_OFFSET UNITYSDK_OFFSET(0xB446020)
#define CLASS_1_41247AE36FE8E03B_METHOD_1_B20B4A5343A4561F_OFFSET UNITYSDK_OFFSET(0xB445DA0)
#define CLASS_1_41247AE36FE8E03B_METHOD_1_D7C68144747E5ADE_OFFSET UNITYSDK_OFFSET(0xB445EE0)
#define CLASS_1_41247AE36FE8E03B__CCTOR_OFFSET UNITYSDK_OFFSET(0xB446160)

inline static constexpr unsigned int Class_1_41247AE36FE8E03B_TypeDefinitionIndex = 80031;

class Class_1_41247AE36FE8E03B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChenLingFesDialogStyleType, ::System::String*>** StaticGet_KILMAKECMBL()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChenLingFesDialogStyleType, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_41247AE36FE8E03B_TypeDefinitionIndex)->GetStaticField(0x5F9A0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChenLingFesToastStyleType, ::System::String*>** StaticGet_KFELEMDFEGK()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChenLingFesToastStyleType, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_41247AE36FE8E03B_TypeDefinitionIndex)->GetStaticField(0x5F9A8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>** StaticGet_KCJKPDBIIBK()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_41247AE36FE8E03B_TypeDefinitionIndex)->GetStaticField(0x5F9B0);
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
