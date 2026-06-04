#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GachaBasicInfoConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CC557D0F0FDB095F_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x190E5BA0)
#define CLASS_1_CC557D0F0FDB095F_METHOD_1_10D1BBDA09B1B01C_OFFSET UNITYSDK_OFFSET(0x190E5760)
#define CLASS_1_CC557D0F0FDB095F_METHOD_1_144F099FFEB4865F_OFFSET UNITYSDK_OFFSET(0x190E5680)
#define CLASS_1_CC557D0F0FDB095F_METHOD_1_1D281D087D78F9FC_OFFSET UNITYSDK_OFFSET(0x190E5BF0)
#define CLASS_1_CC557D0F0FDB095F_METHOD_1_22210CD2BFD02C3A_OFFSET UNITYSDK_OFFSET(0x190E58D0)
#define CLASS_1_CC557D0F0FDB095F_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x190A5AB0)
#define CLASS_1_CC557D0F0FDB095F_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x190E5A60)
#define CLASS_1_CC557D0F0FDB095F_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x190E5700)
#define CLASS_1_CC557D0F0FDB095F_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19028BE0)
#define CLASS_1_CC557D0F0FDB095F_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x190E5A20)
#define CLASS_1_CC557D0F0FDB095F_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x190E5B00)
#define CLASS_1_CC557D0F0FDB095F__CCTOR_OFFSET UNITYSDK_OFFSET(0x190E5F10)

inline static constexpr unsigned int Class_1_CC557D0F0FDB095F_TypeDefinitionIndex = 12718;

class Class_1_CC557D0F0FDB095F : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaBasicInfoConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaBasicInfoConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CC557D0F0FDB095F_TypeDefinitionIndex)->GetStaticField(0x51100);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CC557D0F0FDB095F_TypeDefinitionIndex)->GetStaticField(0x51108);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CC557D0F0FDB095F_TypeDefinitionIndex)->GetStaticField(0x51110);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CC557D0F0FDB095F_TypeDefinitionIndex)->GetStaticField(0xFDF0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CC557D0F0FDB095F_TypeDefinitionIndex)->GetStaticField(0xFDF1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC557D0F0FDB095F__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaBasicInfoConfigRow*>* Method_1_144F099FFEB4865F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaBasicInfoConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC557D0F0FDB095F_METHOD_1_144F099FFEB4865F_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC557D0F0FDB095F_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaBasicInfoConfigRow*> Method_1_10D1BBDA09B1B01C()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaBasicInfoConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC557D0F0FDB095F_METHOD_1_10D1BBDA09B1B01C_OFFSET))();
	}

	static ::RPG::GameCore::GachaBasicInfoConfigRow* Method_1_22210CD2BFD02C3A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GachaBasicInfoConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CC557D0F0FDB095F_METHOD_1_22210CD2BFD02C3A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC557D0F0FDB095F_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC557D0F0FDB095F_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC557D0F0FDB095F_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CC557D0F0FDB095F_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_CC557D0F0FDB095F_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_CC557D0F0FDB095F_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_1D281D087D78F9FC(::RPG::GameCore::GachaBasicInfoConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GachaBasicInfoConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_CC557D0F0FDB095F_METHOD_1_1D281D087D78F9FC_OFFSET))(a1);
	}
};
