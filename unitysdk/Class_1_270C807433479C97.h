#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RechargeBenefitConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_270C807433479C97_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x18462560)
#define CLASS_1_270C807433479C97_METHOD_1_18E20199C2BE7DFF_OFFSET UNITYSDK_OFFSET(0x18461CE0)
#define CLASS_1_270C807433479C97_METHOD_1_2599B64981EB8970_OFFSET UNITYSDK_OFFSET(0x184621C0)
#define CLASS_1_270C807433479C97_METHOD_1_2B192E87F7A4C718_OFFSET UNITYSDK_OFFSET(0x18462010)
#define CLASS_1_270C807433479C97_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18462380)
#define CLASS_1_270C807433479C97_METHOD_1_3C640DA2E8F810F4_OFFSET UNITYSDK_OFFSET(0x184625B0)
#define CLASS_1_270C807433479C97_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18461D60)
#define CLASS_1_270C807433479C97_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18462420)
#define CLASS_1_270C807433479C97_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18461FB0)
#define CLASS_1_270C807433479C97_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18462340)
#define CLASS_1_270C807433479C97_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x184624C0)
#define CLASS_1_270C807433479C97__CCTOR_OFFSET UNITYSDK_OFFSET(0x184628C0)

inline static constexpr unsigned int Class_1_270C807433479C97_TypeDefinitionIndex = 13820;

class Class_1_270C807433479C97 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeBenefitConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeBenefitConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_270C807433479C97_TypeDefinitionIndex)->GetStaticField(0x2E8B0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_270C807433479C97_TypeDefinitionIndex)->GetStaticField(0x2E8B8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_270C807433479C97_TypeDefinitionIndex)->GetStaticField(0x2E8C0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_270C807433479C97_TypeDefinitionIndex)->GetStaticField(0xB900);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_270C807433479C97_TypeDefinitionIndex)->GetStaticField(0xB901);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_270C807433479C97__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeBenefitConfigRow*>* Method_1_18E20199C2BE7DFF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeBenefitConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_270C807433479C97_METHOD_1_18E20199C2BE7DFF_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_270C807433479C97_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeBenefitConfigRow*> Method_1_2B192E87F7A4C718()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeBenefitConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_270C807433479C97_METHOD_1_2B192E87F7A4C718_OFFSET))();
	}

	static ::RPG::GameCore::RechargeBenefitConfigRow* Method_1_2599B64981EB8970(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RechargeBenefitConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_270C807433479C97_METHOD_1_2599B64981EB8970_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_270C807433479C97_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_270C807433479C97_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_270C807433479C97_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_270C807433479C97_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_270C807433479C97_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_270C807433479C97_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_3C640DA2E8F810F4(::RPG::GameCore::RechargeBenefitConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RechargeBenefitConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_270C807433479C97_METHOD_1_3C640DA2E8F810F4_OFFSET))(a1);
	}
};
