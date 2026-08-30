#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MenuItemNameRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CA56ED7CB2CFEA14_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1D64FA40)
#define CLASS_1_CA56ED7CB2CFEA14_METHOD_1_54BDDA79556993E4_OFFSET UNITYSDK_OFFSET(0x1D64FA90)
#define CLASS_1_CA56ED7CB2CFEA14_METHOD_1_5DA00D4D4D7B6D45_OFFSET UNITYSDK_OFFSET(0x1D64F530)
#define CLASS_1_CA56ED7CB2CFEA14_METHOD_1_802B51C84AA09B88_OFFSET UNITYSDK_OFFSET(0x1D64F220)
#define CLASS_1_CA56ED7CB2CFEA14_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D64F870)
#define CLASS_1_CA56ED7CB2CFEA14_METHOD_1_8F98EB0D104A7D7D_OFFSET UNITYSDK_OFFSET(0x1D64F6A0)
#define CLASS_1_CA56ED7CB2CFEA14_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D64F900)
#define CLASS_1_CA56ED7CB2CFEA14_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D64F4D0)
#define CLASS_1_CA56ED7CB2CFEA14_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D64F2A0)
#define CLASS_1_CA56ED7CB2CFEA14_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D64F830)
#define CLASS_1_CA56ED7CB2CFEA14_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D64F9A0)
#define CLASS_1_CA56ED7CB2CFEA14__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D64FE00)

inline static constexpr unsigned int Class_1_CA56ED7CB2CFEA14_TypeDefinitionIndex = 13027;

class Class_1_CA56ED7CB2CFEA14 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MenuItemNameRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MenuItemNameRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA56ED7CB2CFEA14_TypeDefinitionIndex)->GetStaticField(0x5B50);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA56ED7CB2CFEA14_TypeDefinitionIndex)->GetStaticField(0x5B58);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA56ED7CB2CFEA14_TypeDefinitionIndex)->GetStaticField(0x5B60);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA56ED7CB2CFEA14_TypeDefinitionIndex)->GetStaticField(0x1AE0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA56ED7CB2CFEA14_TypeDefinitionIndex)->GetStaticField(0x1AE1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA56ED7CB2CFEA14__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MenuItemNameRow*>* Method_1_802B51C84AA09B88()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MenuItemNameRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA56ED7CB2CFEA14_METHOD_1_802B51C84AA09B88_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA56ED7CB2CFEA14_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MenuItemNameRow*> Method_1_5DA00D4D4D7B6D45()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MenuItemNameRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA56ED7CB2CFEA14_METHOD_1_5DA00D4D4D7B6D45_OFFSET))();
	}

	static ::RPG::GameCore::MenuItemNameRow* Method_1_8F98EB0D104A7D7D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MenuItemNameRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CA56ED7CB2CFEA14_METHOD_1_8F98EB0D104A7D7D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA56ED7CB2CFEA14_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA56ED7CB2CFEA14_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA56ED7CB2CFEA14_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CA56ED7CB2CFEA14_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_CA56ED7CB2CFEA14_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_CA56ED7CB2CFEA14_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_54BDDA79556993E4(::RPG::GameCore::MenuItemNameRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MenuItemNameRow*))((::PBYTE)hIl2Cpp + CLASS_1_CA56ED7CB2CFEA14_METHOD_1_54BDDA79556993E4_OFFSET))(a1);
	}
};
