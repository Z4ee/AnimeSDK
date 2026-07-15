#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChooseDeliveryGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6DE51D3F75FD0A05_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1AF0ED70)
#define CLASS_1_6DE51D3F75FD0A05_METHOD_1_4080D36733FF83D6_OFFSET UNITYSDK_OFFSET(0x1AF0E860)
#define CLASS_1_6DE51D3F75FD0A05_METHOD_1_5A5207063EADBDE1_OFFSET UNITYSDK_OFFSET(0x1AF0E550)
#define CLASS_1_6DE51D3F75FD0A05_METHOD_1_70B3D71138705BC7_OFFSET UNITYSDK_OFFSET(0x1AF0EDC0)
#define CLASS_1_6DE51D3F75FD0A05_METHOD_1_7BB7AAC8E70586F4_OFFSET UNITYSDK_OFFSET(0x1AF0E9D0)
#define CLASS_1_6DE51D3F75FD0A05_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1AF0EBA0)
#define CLASS_1_6DE51D3F75FD0A05_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1AF0EC30)
#define CLASS_1_6DE51D3F75FD0A05_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1AF0E800)
#define CLASS_1_6DE51D3F75FD0A05_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1AF0E5D0)
#define CLASS_1_6DE51D3F75FD0A05_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1AF0EB60)
#define CLASS_1_6DE51D3F75FD0A05_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1AF0ECD0)
#define CLASS_1_6DE51D3F75FD0A05__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF0F130)

inline static constexpr unsigned int Class_1_6DE51D3F75FD0A05_TypeDefinitionIndex = 12562;

class Class_1_6DE51D3F75FD0A05 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChooseDeliveryGroupRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChooseDeliveryGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DE51D3F75FD0A05_TypeDefinitionIndex)->GetStaticField(0x3FA0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DE51D3F75FD0A05_TypeDefinitionIndex)->GetStaticField(0x3FA8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DE51D3F75FD0A05_TypeDefinitionIndex)->GetStaticField(0x3FB0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DE51D3F75FD0A05_TypeDefinitionIndex)->GetStaticField(0x2980);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DE51D3F75FD0A05_TypeDefinitionIndex)->GetStaticField(0x2981);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DE51D3F75FD0A05__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChooseDeliveryGroupRow*>* Method_1_5A5207063EADBDE1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChooseDeliveryGroupRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DE51D3F75FD0A05_METHOD_1_5A5207063EADBDE1_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DE51D3F75FD0A05_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChooseDeliveryGroupRow*> Method_1_4080D36733FF83D6()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChooseDeliveryGroupRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DE51D3F75FD0A05_METHOD_1_4080D36733FF83D6_OFFSET))();
	}

	static ::RPG::GameCore::ChooseDeliveryGroupRow* Method_1_7BB7AAC8E70586F4(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChooseDeliveryGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6DE51D3F75FD0A05_METHOD_1_7BB7AAC8E70586F4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DE51D3F75FD0A05_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DE51D3F75FD0A05_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DE51D3F75FD0A05_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6DE51D3F75FD0A05_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_6DE51D3F75FD0A05_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_6DE51D3F75FD0A05_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_70B3D71138705BC7(::RPG::GameCore::ChooseDeliveryGroupRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChooseDeliveryGroupRow*))((::PBYTE)hIl2Cpp + CLASS_1_6DE51D3F75FD0A05_METHOD_1_70B3D71138705BC7_OFFSET))(a1);
	}
};
