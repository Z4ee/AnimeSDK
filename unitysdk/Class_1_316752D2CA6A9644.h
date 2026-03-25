#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemMultiMaterialConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_316752D2CA6A9644_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16B73040)
#define CLASS_1_316752D2CA6A9644_METHOD_1_0D876EFE597957C6_OFFSET UNITYSDK_OFFSET(0x16B72C50)
#define CLASS_1_316752D2CA6A9644_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16B72E60)
#define CLASS_1_316752D2CA6A9644_METHOD_1_479FD5E03759EA28_OFFSET UNITYSDK_OFFSET(0x16B727A0)
#define CLASS_1_316752D2CA6A9644_METHOD_1_600C15F28B5E9E3D_OFFSET UNITYSDK_OFFSET(0x16B73090)
#define CLASS_1_316752D2CA6A9644_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16B72820)
#define CLASS_1_316752D2CA6A9644_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16B72F00)
#define CLASS_1_316752D2CA6A9644_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16B72A70)
#define CLASS_1_316752D2CA6A9644_METHOD_1_D67B2CBA7BED5802_OFFSET UNITYSDK_OFFSET(0x16B72AD0)
#define CLASS_1_316752D2CA6A9644_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16B72E20)
#define CLASS_1_316752D2CA6A9644_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16B72FA0)
#define CLASS_1_316752D2CA6A9644__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B733A0)

inline static constexpr unsigned int Class_1_316752D2CA6A9644_TypeDefinitionIndex = 12699;

class Class_1_316752D2CA6A9644 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_316752D2CA6A9644_TypeDefinitionIndex)->GetStaticField(0x2A9F0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemMultiMaterialConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemMultiMaterialConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_316752D2CA6A9644_TypeDefinitionIndex)->GetStaticField(0x2A9F8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_316752D2CA6A9644_TypeDefinitionIndex)->GetStaticField(0x2AA00);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_316752D2CA6A9644_TypeDefinitionIndex)->GetStaticField(0xE0F0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_316752D2CA6A9644_TypeDefinitionIndex)->GetStaticField(0xE0F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_316752D2CA6A9644__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemMultiMaterialConfigRow*>* Method_1_479FD5E03759EA28()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemMultiMaterialConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_316752D2CA6A9644_METHOD_1_479FD5E03759EA28_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_316752D2CA6A9644_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemMultiMaterialConfigRow*> Method_1_D67B2CBA7BED5802()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemMultiMaterialConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_316752D2CA6A9644_METHOD_1_D67B2CBA7BED5802_OFFSET))();
	}

	static ::RPG::GameCore::ItemMultiMaterialConfigRow* Method_1_0D876EFE597957C6(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ItemMultiMaterialConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_316752D2CA6A9644_METHOD_1_0D876EFE597957C6_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_316752D2CA6A9644_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_316752D2CA6A9644_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_316752D2CA6A9644_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_316752D2CA6A9644_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_316752D2CA6A9644_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_316752D2CA6A9644_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_600C15F28B5E9E3D(::RPG::GameCore::ItemMultiMaterialConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ItemMultiMaterialConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_316752D2CA6A9644_METHOD_1_600C15F28B5E9E3D_OFFSET))(a1);
	}
};
