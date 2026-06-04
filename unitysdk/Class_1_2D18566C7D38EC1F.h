#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ShareRewardConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2D18566C7D38EC1F_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1925AE70)
#define CLASS_1_2D18566C7D38EC1F_METHOD_1_1C5B173BB8702DCC_OFFSET UNITYSDK_OFFSET(0x1925B310)
#define CLASS_1_2D18566C7D38EC1F_METHOD_1_521643823AB9B9D7_OFFSET UNITYSDK_OFFSET(0x1925B230)
#define CLASS_1_2D18566C7D38EC1F_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1925ACA0)
#define CLASS_1_2D18566C7D38EC1F_METHOD_1_9A850A07AEBE8D6E_OFFSET UNITYSDK_OFFSET(0x1925B480)
#define CLASS_1_2D18566C7D38EC1F_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1925AD30)
#define CLASS_1_2D18566C7D38EC1F_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1925B2B0)
#define CLASS_1_2D18566C7D38EC1F_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1925AA70)
#define CLASS_1_2D18566C7D38EC1F_METHOD_1_EAD83214AF754055_OFFSET UNITYSDK_OFFSET(0x1925AEC0)
#define CLASS_1_2D18566C7D38EC1F_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1925AA30)
#define CLASS_1_2D18566C7D38EC1F_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1925ADD0)
#define CLASS_1_2D18566C7D38EC1F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1925B610)

inline static constexpr unsigned int Class_1_2D18566C7D38EC1F_TypeDefinitionIndex = 14364;

class Class_1_2D18566C7D38EC1F : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2D18566C7D38EC1F_TypeDefinitionIndex)->GetStaticField(0x51AB0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2D18566C7D38EC1F_TypeDefinitionIndex)->GetStaticField(0x51AB8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareRewardConfigRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareRewardConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2D18566C7D38EC1F_TypeDefinitionIndex)->GetStaticField(0x51AC0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2D18566C7D38EC1F_TypeDefinitionIndex)->GetStaticField(0x10060);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2D18566C7D38EC1F_TypeDefinitionIndex)->GetStaticField(0x10061);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2D18566C7D38EC1F__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2D18566C7D38EC1F_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2D18566C7D38EC1F_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2D18566C7D38EC1F_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2D18566C7D38EC1F_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_2D18566C7D38EC1F_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_2D18566C7D38EC1F_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_EAD83214AF754055(::RPG::GameCore::ShareRewardConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ShareRewardConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_2D18566C7D38EC1F_METHOD_1_EAD83214AF754055_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareRewardConfigRow*>* Method_1_521643823AB9B9D7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareRewardConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2D18566C7D38EC1F_METHOD_1_521643823AB9B9D7_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2D18566C7D38EC1F_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareRewardConfigRow*> Method_1_1C5B173BB8702DCC()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareRewardConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_2D18566C7D38EC1F_METHOD_1_1C5B173BB8702DCC_OFFSET))();
	}

	static ::RPG::GameCore::ShareRewardConfigRow* Method_1_9A850A07AEBE8D6E(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ShareRewardConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2D18566C7D38EC1F_METHOD_1_9A850A07AEBE8D6E_OFFSET))(a1);
	}
};
