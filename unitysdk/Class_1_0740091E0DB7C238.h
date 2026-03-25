#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemAutoTransferRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0740091E0DB7C238_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x179118A0)
#define CLASS_1_0740091E0DB7C238_METHOD_1_1A2FE322ADB410D4_OFFSET UNITYSDK_OFFSET(0x17750A10)
#define CLASS_1_0740091E0DB7C238_METHOD_1_1B44E4B66E5814E0_OFFSET UNITYSDK_OFFSET(0x179118F0)
#define CLASS_1_0740091E0DB7C238_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x179116C0)
#define CLASS_1_0740091E0DB7C238_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x17911430)
#define CLASS_1_0740091E0DB7C238_METHOD_1_7441D749DB9799EA_OFFSET UNITYSDK_OFFSET(0x17911260)
#define CLASS_1_0740091E0DB7C238_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x17911760)
#define CLASS_1_0740091E0DB7C238_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x17750A90)
#define CLASS_1_0740091E0DB7C238_METHOD_1_DE82ACD570BC7EE5_OFFSET UNITYSDK_OFFSET(0x17750AF0)
#define CLASS_1_0740091E0DB7C238_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x17911680)
#define CLASS_1_0740091E0DB7C238_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x17911800)
#define CLASS_1_0740091E0DB7C238__CCTOR_OFFSET UNITYSDK_OFFSET(0x17911C50)

inline static constexpr unsigned int Class_1_0740091E0DB7C238_TypeDefinitionIndex = 12706;

class Class_1_0740091E0DB7C238 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0740091E0DB7C238_TypeDefinitionIndex)->GetStaticField(0x214E0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemAutoTransferRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemAutoTransferRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0740091E0DB7C238_TypeDefinitionIndex)->GetStaticField(0x214E8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0740091E0DB7C238_TypeDefinitionIndex)->GetStaticField(0x214F0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0740091E0DB7C238_TypeDefinitionIndex)->GetStaticField(0x8CD0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0740091E0DB7C238_TypeDefinitionIndex)->GetStaticField(0x8CD1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0740091E0DB7C238__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemAutoTransferRow*>* Method_1_1A2FE322ADB410D4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemAutoTransferRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0740091E0DB7C238_METHOD_1_1A2FE322ADB410D4_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0740091E0DB7C238_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemAutoTransferRow*> Method_1_DE82ACD570BC7EE5()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemAutoTransferRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_0740091E0DB7C238_METHOD_1_DE82ACD570BC7EE5_OFFSET))();
	}

	static ::RPG::GameCore::ItemAutoTransferRow* Method_1_7441D749DB9799EA(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ItemAutoTransferRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0740091E0DB7C238_METHOD_1_7441D749DB9799EA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0740091E0DB7C238_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0740091E0DB7C238_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0740091E0DB7C238_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0740091E0DB7C238_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_0740091E0DB7C238_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_0740091E0DB7C238_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_1B44E4B66E5814E0(::RPG::GameCore::ItemAutoTransferRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ItemAutoTransferRow*))((::PBYTE)hIl2Cpp + CLASS_1_0740091E0DB7C238_METHOD_1_1B44E4B66E5814E0_OFFSET))(a1);
	}
};
