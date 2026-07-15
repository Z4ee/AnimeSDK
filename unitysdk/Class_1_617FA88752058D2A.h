#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesAwardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_617FA88752058D2A_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1AF7B4B0)
#define CLASS_1_617FA88752058D2A_METHOD_1_6100F968882A75D9_OFFSET UNITYSDK_OFFSET(0x1AF7B110)
#define CLASS_1_617FA88752058D2A_METHOD_1_6A6D4E549A078CF9_OFFSET UNITYSDK_OFFSET(0x1AF7AFA0)
#define CLASS_1_617FA88752058D2A_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1AF7B2E0)
#define CLASS_1_617FA88752058D2A_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1AF7B370)
#define CLASS_1_617FA88752058D2A_METHOD_1_BC614206968397D8_OFFSET UNITYSDK_OFFSET(0x1AF7B500)
#define CLASS_1_617FA88752058D2A_METHOD_1_C03FC27DFAC2E758_OFFSET UNITYSDK_OFFSET(0x1AF7AC90)
#define CLASS_1_617FA88752058D2A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1AF7AF40)
#define CLASS_1_617FA88752058D2A_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1AF7AD10)
#define CLASS_1_617FA88752058D2A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1AF7B2A0)
#define CLASS_1_617FA88752058D2A_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1AF7B410)
#define CLASS_1_617FA88752058D2A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF7B870)

inline static constexpr unsigned int Class_1_617FA88752058D2A_TypeDefinitionIndex = 10716;

class Class_1_617FA88752058D2A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesAwardRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesAwardRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_617FA88752058D2A_TypeDefinitionIndex)->GetStaticField(0x66CD0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_617FA88752058D2A_TypeDefinitionIndex)->GetStaticField(0x66CD8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_617FA88752058D2A_TypeDefinitionIndex)->GetStaticField(0x66CE0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_617FA88752058D2A_TypeDefinitionIndex)->GetStaticField(0x13D50);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_617FA88752058D2A_TypeDefinitionIndex)->GetStaticField(0x13D51);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_617FA88752058D2A__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesAwardRow*>* Method_1_C03FC27DFAC2E758()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesAwardRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_617FA88752058D2A_METHOD_1_C03FC27DFAC2E758_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_617FA88752058D2A_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesAwardRow*> Method_1_6A6D4E549A078CF9()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesAwardRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_617FA88752058D2A_METHOD_1_6A6D4E549A078CF9_OFFSET))();
	}

	static ::RPG::GameCore::ChenLingFesAwardRow* Method_1_6100F968882A75D9(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChenLingFesAwardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_617FA88752058D2A_METHOD_1_6100F968882A75D9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_617FA88752058D2A_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_617FA88752058D2A_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_617FA88752058D2A_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_617FA88752058D2A_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_617FA88752058D2A_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_617FA88752058D2A_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_BC614206968397D8(::RPG::GameCore::ChenLingFesAwardRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChenLingFesAwardRow*))((::PBYTE)hIl2Cpp + CLASS_1_617FA88752058D2A_METHOD_1_BC614206968397D8_OFFSET))(a1);
	}
};
