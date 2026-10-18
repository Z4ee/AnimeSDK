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

#define CLASS_1_6DE51D3F75FD0A05_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1D1BAFC0)
#define CLASS_1_6DE51D3F75FD0A05_METHOD_1_4080D36733FF83D6_OFFSET UNITYSDK_OFFSET(0x1D1BAAB0)
#define CLASS_1_6DE51D3F75FD0A05_METHOD_1_5A5207063EADBDE1_OFFSET UNITYSDK_OFFSET(0x1D1BA7A0)
#define CLASS_1_6DE51D3F75FD0A05_METHOD_1_70B3D71138705BC7_OFFSET UNITYSDK_OFFSET(0x1D1BB010)
#define CLASS_1_6DE51D3F75FD0A05_METHOD_1_7BB7AAC8E70586F4_OFFSET UNITYSDK_OFFSET(0x1D1BAC20)
#define CLASS_1_6DE51D3F75FD0A05_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D1BADF0)
#define CLASS_1_6DE51D3F75FD0A05_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D1BAE80)
#define CLASS_1_6DE51D3F75FD0A05_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D1BAA50)
#define CLASS_1_6DE51D3F75FD0A05_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D1BA820)
#define CLASS_1_6DE51D3F75FD0A05_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D1BADB0)
#define CLASS_1_6DE51D3F75FD0A05_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D1BAF20)
#define CLASS_1_6DE51D3F75FD0A05__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1BB380)

inline static constexpr unsigned int Class_1_6DE51D3F75FD0A05_TypeDefinitionIndex = 13059;

class Class_1_6DE51D3F75FD0A05 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChooseDeliveryGroupRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChooseDeliveryGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DE51D3F75FD0A05_TypeDefinitionIndex)->GetStaticField(0x3DF60);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DE51D3F75FD0A05_TypeDefinitionIndex)->GetStaticField(0x3DF68);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DE51D3F75FD0A05_TypeDefinitionIndex)->GetStaticField(0x3DF70);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DE51D3F75FD0A05_TypeDefinitionIndex)->GetStaticField(0xE9F0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DE51D3F75FD0A05_TypeDefinitionIndex)->GetStaticField(0xE9F1);
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
