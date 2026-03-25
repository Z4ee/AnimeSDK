#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AtlasConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_266C2E151B3B02D6_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16BC4D50)
#define CLASS_1_266C2E151B3B02D6_METHOD_1_2072B4A9C1A8FBE0_OFFSET UNITYSDK_OFFSET(0x16BC4480)
#define CLASS_1_266C2E151B3B02D6_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16BC4B70)
#define CLASS_1_266C2E151B3B02D6_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16BC4500)
#define CLASS_1_266C2E151B3B02D6_METHOD_1_7704B9A716F6CCA2_OFFSET UNITYSDK_OFFSET(0x16BC4DA0)
#define CLASS_1_266C2E151B3B02D6_METHOD_1_9817DBF1C18EFB9D_OFFSET UNITYSDK_OFFSET(0x16BC47B0)
#define CLASS_1_266C2E151B3B02D6_METHOD_1_AC9E32C1B7931EEC_OFFSET UNITYSDK_OFFSET(0x16BC4960)
#define CLASS_1_266C2E151B3B02D6_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16BC4C10)
#define CLASS_1_266C2E151B3B02D6_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16BC4750)
#define CLASS_1_266C2E151B3B02D6_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16BC4B30)
#define CLASS_1_266C2E151B3B02D6_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16BC4CB0)
#define CLASS_1_266C2E151B3B02D6__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BC5100)

inline static constexpr unsigned int Class_1_266C2E151B3B02D6_TypeDefinitionIndex = 11564;

class Class_1_266C2E151B3B02D6 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_266C2E151B3B02D6_TypeDefinitionIndex)->GetStaticField(0x278E0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AtlasConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AtlasConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_266C2E151B3B02D6_TypeDefinitionIndex)->GetStaticField(0x278E8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_266C2E151B3B02D6_TypeDefinitionIndex)->GetStaticField(0x278F0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_266C2E151B3B02D6_TypeDefinitionIndex)->GetStaticField(0xCF00);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_266C2E151B3B02D6_TypeDefinitionIndex)->GetStaticField(0xCF01);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_266C2E151B3B02D6__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AtlasConfigRow*>* Method_1_2072B4A9C1A8FBE0()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AtlasConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_266C2E151B3B02D6_METHOD_1_2072B4A9C1A8FBE0_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_266C2E151B3B02D6_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AtlasConfigRow*> Method_1_9817DBF1C18EFB9D()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AtlasConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_266C2E151B3B02D6_METHOD_1_9817DBF1C18EFB9D_OFFSET))();
	}

	static ::RPG::GameCore::AtlasConfigRow* Method_1_AC9E32C1B7931EEC(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AtlasConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_266C2E151B3B02D6_METHOD_1_AC9E32C1B7931EEC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_266C2E151B3B02D6_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_266C2E151B3B02D6_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_266C2E151B3B02D6_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_266C2E151B3B02D6_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_266C2E151B3B02D6_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_266C2E151B3B02D6_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_7704B9A716F6CCA2(::RPG::GameCore::AtlasConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AtlasConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_266C2E151B3B02D6_METHOD_1_7704B9A716F6CCA2_OFFSET))(a1);
	}
};
