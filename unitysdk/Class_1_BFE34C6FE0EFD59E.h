#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazePuzzleOrigamiRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BFE34C6FE0EFD59E_METHOD_1_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x18FEA770)
#define CLASS_1_BFE34C6FE0EFD59E_METHOD_1_0509164FAA9E034C_OFFSET UNITYSDK_OFFSET(0x18FEA680)
#define CLASS_1_BFE34C6FE0EFD59E_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18FEA2A0)
#define CLASS_1_BFE34C6FE0EFD59E_METHOD_1_490B5F1FAFC2A988_OFFSET UNITYSDK_OFFSET(0x18FE9A40)
#define CLASS_1_BFE34C6FE0EFD59E_METHOD_1_89D1F247B9D324EE_1_OFFSET UNITYSDK_OFFSET(0x18FEAC30)
#define CLASS_1_BFE34C6FE0EFD59E_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18FEA0D0)
#define CLASS_1_BFE34C6FE0EFD59E_METHOD_1_8AA8EEA45A7C2CA4_OFFSET UNITYSDK_OFFSET(0x18FE9E80)
#define CLASS_1_BFE34C6FE0EFD59E_METHOD_1_AAE70B857E8FDF35_OFFSET UNITYSDK_OFFSET(0x18FEA2F0)
#define CLASS_1_BFE34C6FE0EFD59E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18FEA160)
#define CLASS_1_BFE34C6FE0EFD59E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18FE9CF0)
#define CLASS_1_BFE34C6FE0EFD59E_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x18FE9AC0)
#define CLASS_1_BFE34C6FE0EFD59E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18FEA090)
#define CLASS_1_BFE34C6FE0EFD59E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18FEA200)
#define CLASS_1_BFE34C6FE0EFD59E_METHOD_1_F94FDC767D1C2238_OFFSET UNITYSDK_OFFSET(0x18FE9D50)
#define CLASS_1_BFE34C6FE0EFD59E__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FEACC0)

inline static constexpr unsigned int Class_1_BFE34C6FE0EFD59E_TypeDefinitionIndex = 13405;

class Class_1_BFE34C6FE0EFD59E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::MazePuzzleOrigamiRow*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::MazePuzzleOrigamiRow*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFE34C6FE0EFD59E_TypeDefinitionIndex)->GetStaticField(0x36990);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFE34C6FE0EFD59E_TypeDefinitionIndex)->GetStaticField(0x36998);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleOrigamiRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleOrigamiRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFE34C6FE0EFD59E_TypeDefinitionIndex)->GetStaticField(0x369A0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFE34C6FE0EFD59E_TypeDefinitionIndex)->GetStaticField(0x369A8);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFE34C6FE0EFD59E_TypeDefinitionIndex)->GetStaticField(0xAF30);
	}
	static ::System::Byte* StaticGet_Field_1_5()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFE34C6FE0EFD59E_TypeDefinitionIndex)->GetStaticField(0xAF31);
	}
	static ::System::Boolean* StaticGet_Field_1_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFE34C6FE0EFD59E_TypeDefinitionIndex)->GetStaticField(0xAF32);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BFE34C6FE0EFD59E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleOrigamiRow*>* Method_1_490B5F1FAFC2A988()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleOrigamiRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BFE34C6FE0EFD59E_METHOD_1_490B5F1FAFC2A988_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BFE34C6FE0EFD59E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleOrigamiRow*> Method_1_F94FDC767D1C2238()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleOrigamiRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_BFE34C6FE0EFD59E_METHOD_1_F94FDC767D1C2238_OFFSET))();
	}

	static ::RPG::GameCore::MazePuzzleOrigamiRow* Method_1_8AA8EEA45A7C2CA4(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::RPG::GameCore::MazePuzzleOrigamiRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BFE34C6FE0EFD59E_METHOD_1_8AA8EEA45A7C2CA4_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BFE34C6FE0EFD59E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BFE34C6FE0EFD59E_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BFE34C6FE0EFD59E_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BFE34C6FE0EFD59E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_BFE34C6FE0EFD59E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_BFE34C6FE0EFD59E_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_AAE70B857E8FDF35(::RPG::GameCore::MazePuzzleOrigamiRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MazePuzzleOrigamiRow*))((::PBYTE)hIl2Cpp + CLASS_1_BFE34C6FE0EFD59E_METHOD_1_AAE70B857E8FDF35_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::GameCore::MazePuzzleOrigamiRow*>* Method_1_0509164FAA9E034C(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::MazePuzzleOrigamiRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BFE34C6FE0EFD59E_METHOD_1_0509164FAA9E034C_OFFSET))(a1);
	}

	static ::System::Void Method_1_89D1F247B9D324EE_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BFE34C6FE0EFD59E_METHOD_1_89D1F247B9D324EE_1_OFFSET))();
	}

	static ::System::Void Method_1_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BFE34C6FE0EFD59E_METHOD_1_03C4FFAD29DE0852_OFFSET))();
	}
};
