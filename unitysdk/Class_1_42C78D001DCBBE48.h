#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_42C78D001DCBBE48_METHOD_1_1B3B950EA3EACA3B_OFFSET UNITYSDK_OFFSET(0x1306F230)
#define CLASS_1_42C78D001DCBBE48_METHOD_1_928833A66E8E2912_OFFSET UNITYSDK_OFFSET(0x1306F3F0)
#define CLASS_1_42C78D001DCBBE48_METHOD_1_FD7990DAF09A3519_OFFSET UNITYSDK_OFFSET(0x1306EEC0)
#define CLASS_1_42C78D001DCBBE48__CCTOR_OFFSET UNITYSDK_OFFSET(0x1306EA20)
#define CLASS_1_42C78D001DCBBE48__CTOR_OFFSET UNITYSDK_OFFSET(0x1306EA10)

inline static constexpr unsigned int Class_1_42C78D001DCBBE48_TypeDefinitionIndex = 69414;

class Class_1_42C78D001DCBBE48 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageType, ::Foundation::AssetPath>** StaticGet_Field_1_17()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageType, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_42C78D001DCBBE48_TypeDefinitionIndex)->GetStaticField(0x30410);
	}
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageType, ::Foundation::AssetPath>** StaticGet_Field_1_18()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageType, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_42C78D001DCBBE48_TypeDefinitionIndex)->GetStaticField(0x30418);
	}
	static ::System::Boolean* StaticGet_Field_1_16()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_42C78D001DCBBE48_TypeDefinitionIndex)->GetStaticField(0xBAD0);
	}
	static ::System::Boolean* StaticGet_Field_1_15()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_42C78D001DCBBE48_TypeDefinitionIndex)->GetStaticField(0xBAD1);
	}
	static ::System::Boolean* StaticGet_Field_1_14()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_42C78D001DCBBE48_TypeDefinitionIndex)->GetStaticField(0xBAD2);
	}
	// static const ::System::Int32 Field_1_0 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_13 = 0xB; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42C78D001DCBBE48__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_42C78D001DCBBE48__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_FD7990DAF09A3519(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_42C78D001DCBBE48_METHOD_1_FD7990DAF09A3519_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1B3B950EA3EACA3B()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_42C78D001DCBBE48_METHOD_1_1B3B950EA3EACA3B_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_928833A66E8E2912()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_42C78D001DCBBE48_METHOD_1_928833A66E8E2912_OFFSET))();
	}
};
