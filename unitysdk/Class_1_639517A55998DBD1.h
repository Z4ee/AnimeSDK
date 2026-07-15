#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GiftDanmuContentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_639517A55998DBD1_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1C0F39C0)
#define CLASS_1_639517A55998DBD1_METHOD_1_130015ACE07328ED_OFFSET UNITYSDK_OFFSET(0x1C0F3D80)
#define CLASS_1_639517A55998DBD1_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C0F37F0)
#define CLASS_1_639517A55998DBD1_METHOD_1_8C87A421CD9523B2_OFFSET UNITYSDK_OFFSET(0x1C0F3E60)
#define CLASS_1_639517A55998DBD1_METHOD_1_9F682E924E67C633_OFFSET UNITYSDK_OFFSET(0x1C0F3A10)
#define CLASS_1_639517A55998DBD1_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C0F3880)
#define CLASS_1_639517A55998DBD1_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C0F3E00)
#define CLASS_1_639517A55998DBD1_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C0F35C0)
#define CLASS_1_639517A55998DBD1_METHOD_1_DE80BCB98CB031A8_OFFSET UNITYSDK_OFFSET(0x1C0F3FD0)
#define CLASS_1_639517A55998DBD1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C0F3580)
#define CLASS_1_639517A55998DBD1_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C0F3920)
#define CLASS_1_639517A55998DBD1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0F4160)

inline static constexpr unsigned int Class_1_639517A55998DBD1_TypeDefinitionIndex = 14590;

class Class_1_639517A55998DBD1 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_639517A55998DBD1_TypeDefinitionIndex)->GetStaticField(0x478D0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GiftDanmuContentRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GiftDanmuContentRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_639517A55998DBD1_TypeDefinitionIndex)->GetStaticField(0x478D8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_639517A55998DBD1_TypeDefinitionIndex)->GetStaticField(0x478E0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_639517A55998DBD1_TypeDefinitionIndex)->GetStaticField(0xC9C0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_639517A55998DBD1_TypeDefinitionIndex)->GetStaticField(0xC9C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_639517A55998DBD1__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_639517A55998DBD1_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_639517A55998DBD1_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_639517A55998DBD1_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_639517A55998DBD1_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_639517A55998DBD1_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_639517A55998DBD1_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_9F682E924E67C633(::RPG::GameCore::GiftDanmuContentRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GiftDanmuContentRow*))((::PBYTE)hIl2Cpp + CLASS_1_639517A55998DBD1_METHOD_1_9F682E924E67C633_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GiftDanmuContentRow*>* Method_1_130015ACE07328ED()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GiftDanmuContentRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_639517A55998DBD1_METHOD_1_130015ACE07328ED_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_639517A55998DBD1_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GiftDanmuContentRow*> Method_1_8C87A421CD9523B2()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GiftDanmuContentRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_639517A55998DBD1_METHOD_1_8C87A421CD9523B2_OFFSET))();
	}

	static ::RPG::GameCore::GiftDanmuContentRow* Method_1_DE80BCB98CB031A8(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GiftDanmuContentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_639517A55998DBD1_METHOD_1_DE80BCB98CB031A8_OFFSET))(a1);
	}
};
