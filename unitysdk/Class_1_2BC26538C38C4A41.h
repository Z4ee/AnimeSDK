#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemGiftPackDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2BC26538C38C4A41_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16F37C20)
#define CLASS_1_2BC26538C38C4A41_METHOD_1_0F4E273F47614B83_OFFSET UNITYSDK_OFFSET(0x16F37C70)
#define CLASS_1_2BC26538C38C4A41_METHOD_1_2B11D5F3796F38D6_OFFSET UNITYSDK_OFFSET(0x16F37840)
#define CLASS_1_2BC26538C38C4A41_METHOD_1_739A58B312044786_OFFSET UNITYSDK_OFFSET(0x16F376D0)
#define CLASS_1_2BC26538C38C4A41_METHOD_1_82A01C5571091ED5_OFFSET UNITYSDK_OFFSET(0x16F373C0)
#define CLASS_1_2BC26538C38C4A41_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x16F37A50)
#define CLASS_1_2BC26538C38C4A41_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16F37AE0)
#define CLASS_1_2BC26538C38C4A41_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16F37670)
#define CLASS_1_2BC26538C38C4A41_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x16F37440)
#define CLASS_1_2BC26538C38C4A41_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16F37A10)
#define CLASS_1_2BC26538C38C4A41_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16F37B80)
#define CLASS_1_2BC26538C38C4A41__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F38010)

inline static constexpr unsigned int Class_1_2BC26538C38C4A41_TypeDefinitionIndex = 13767;

class Class_1_2BC26538C38C4A41 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BC26538C38C4A41_TypeDefinitionIndex)->GetStaticField(0x3AE20);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemGiftPackDataRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemGiftPackDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BC26538C38C4A41_TypeDefinitionIndex)->GetStaticField(0x3AE28);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BC26538C38C4A41_TypeDefinitionIndex)->GetStaticField(0x3AE30);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BC26538C38C4A41_TypeDefinitionIndex)->GetStaticField(0xF1A0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BC26538C38C4A41_TypeDefinitionIndex)->GetStaticField(0xF1A1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BC26538C38C4A41__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemGiftPackDataRow*>* Method_1_82A01C5571091ED5()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemGiftPackDataRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BC26538C38C4A41_METHOD_1_82A01C5571091ED5_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BC26538C38C4A41_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemGiftPackDataRow*> Method_1_739A58B312044786()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemGiftPackDataRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BC26538C38C4A41_METHOD_1_739A58B312044786_OFFSET))();
	}

	static ::RPG::GameCore::ItemGiftPackDataRow* Method_1_2B11D5F3796F38D6(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::ItemGiftPackDataRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2BC26538C38C4A41_METHOD_1_2B11D5F3796F38D6_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BC26538C38C4A41_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BC26538C38C4A41_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BC26538C38C4A41_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2BC26538C38C4A41_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_2BC26538C38C4A41_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_2BC26538C38C4A41_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_0F4E273F47614B83(::RPG::GameCore::ItemGiftPackDataRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ItemGiftPackDataRow*))((::PBYTE)hIl2Cpp + CLASS_1_2BC26538C38C4A41_METHOD_1_0F4E273F47614B83_OFFSET))(a1);
	}
};
