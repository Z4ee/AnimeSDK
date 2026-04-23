#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveStarRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9E3195860C5E73DD_METHOD_1_033EECAFFBD4F713_OFFSET UNITYSDK_OFFSET(0x1847D650)
#define CLASS_1_9E3195860C5E73DD_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1847DA40)
#define CLASS_1_9E3195860C5E73DD_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1847D860)
#define CLASS_1_9E3195860C5E73DD_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1847D1F0)
#define CLASS_1_9E3195860C5E73DD_METHOD_1_71F481910EFBCD97_OFFSET UNITYSDK_OFFSET(0x1847DA90)
#define CLASS_1_9E3195860C5E73DD_METHOD_1_AADA692433F5CD61_OFFSET UNITYSDK_OFFSET(0x1847D170)
#define CLASS_1_9E3195860C5E73DD_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1847D900)
#define CLASS_1_9E3195860C5E73DD_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1847D440)
#define CLASS_1_9E3195860C5E73DD_METHOD_1_D4D65D334223236A_OFFSET UNITYSDK_OFFSET(0x1847D4A0)
#define CLASS_1_9E3195860C5E73DD_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1847D820)
#define CLASS_1_9E3195860C5E73DD_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1847D9A0)
#define CLASS_1_9E3195860C5E73DD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1847DDF0)

inline static constexpr unsigned int Class_1_9E3195860C5E73DD_TypeDefinitionIndex = 11250;

class Class_1_9E3195860C5E73DD : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E3195860C5E73DD_TypeDefinitionIndex)->GetStaticField(0x2FA30);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveStarRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveStarRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E3195860C5E73DD_TypeDefinitionIndex)->GetStaticField(0x2FA38);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E3195860C5E73DD_TypeDefinitionIndex)->GetStaticField(0x2FA40);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E3195860C5E73DD_TypeDefinitionIndex)->GetStaticField(0xBF30);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E3195860C5E73DD_TypeDefinitionIndex)->GetStaticField(0xBF31);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E3195860C5E73DD__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveStarRow*>* Method_1_AADA692433F5CD61()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveStarRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E3195860C5E73DD_METHOD_1_AADA692433F5CD61_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E3195860C5E73DD_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveStarRow*> Method_1_D4D65D334223236A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveStarRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E3195860C5E73DD_METHOD_1_D4D65D334223236A_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveStarRow* Method_1_033EECAFFBD4F713(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveStarRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E3195860C5E73DD_METHOD_1_033EECAFFBD4F713_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E3195860C5E73DD_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E3195860C5E73DD_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E3195860C5E73DD_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E3195860C5E73DD_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9E3195860C5E73DD_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_9E3195860C5E73DD_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_71F481910EFBCD97(::RPG::GameCore::IdleLiveStarRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveStarRow*))((::PBYTE)hIl2Cpp + CLASS_1_9E3195860C5E73DD_METHOD_1_71F481910EFBCD97_OFFSET))(a1);
	}
};
