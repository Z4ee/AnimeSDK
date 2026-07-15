#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SceneTVMenuDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E96A8BA9A207F592_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B5A9860)
#define CLASS_1_E96A8BA9A207F592_METHOD_1_2199077E871773FF_OFFSET UNITYSDK_OFFSET(0x1B5A98B0)
#define CLASS_1_E96A8BA9A207F592_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B5A9690)
#define CLASS_1_E96A8BA9A207F592_METHOD_1_9C9DED693038535E_OFFSET UNITYSDK_OFFSET(0x1B5A93D0)
#define CLASS_1_E96A8BA9A207F592_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B5A9720)
#define CLASS_1_E96A8BA9A207F592_METHOD_1_B6CA47D5A86D945D_OFFSET UNITYSDK_OFFSET(0x1B5A9500)
#define CLASS_1_E96A8BA9A207F592_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B5A9370)
#define CLASS_1_E96A8BA9A207F592_METHOD_1_DD569D340B5C3CA2_OFFSET UNITYSDK_OFFSET(0x1B5A90C0)
#define CLASS_1_E96A8BA9A207F592_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B5A9140)
#define CLASS_1_E96A8BA9A207F592_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B5A9650)
#define CLASS_1_E96A8BA9A207F592_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B5A97C0)
#define CLASS_1_E96A8BA9A207F592__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5A9BD0)

inline static constexpr unsigned int Class_1_E96A8BA9A207F592_TypeDefinitionIndex = 13980;

class Class_1_E96A8BA9A207F592 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SceneTVMenuDataRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SceneTVMenuDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E96A8BA9A207F592_TypeDefinitionIndex)->GetStaticField(0x41070);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E96A8BA9A207F592_TypeDefinitionIndex)->GetStaticField(0x41078);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E96A8BA9A207F592_TypeDefinitionIndex)->GetStaticField(0x41080);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E96A8BA9A207F592_TypeDefinitionIndex)->GetStaticField(0xAF20);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E96A8BA9A207F592_TypeDefinitionIndex)->GetStaticField(0xAF21);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E96A8BA9A207F592__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SceneTVMenuDataRow*>* Method_1_DD569D340B5C3CA2()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SceneTVMenuDataRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E96A8BA9A207F592_METHOD_1_DD569D340B5C3CA2_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E96A8BA9A207F592_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SceneTVMenuDataRow*> Method_1_9C9DED693038535E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SceneTVMenuDataRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_E96A8BA9A207F592_METHOD_1_9C9DED693038535E_OFFSET))();
	}

	static ::RPG::GameCore::SceneTVMenuDataRow* Method_1_B6CA47D5A86D945D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::SceneTVMenuDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E96A8BA9A207F592_METHOD_1_B6CA47D5A86D945D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E96A8BA9A207F592_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E96A8BA9A207F592_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E96A8BA9A207F592_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E96A8BA9A207F592_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E96A8BA9A207F592_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_E96A8BA9A207F592_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_2199077E871773FF(::RPG::GameCore::SceneTVMenuDataRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::SceneTVMenuDataRow*))((::PBYTE)hIl2Cpp + CLASS_1_E96A8BA9A207F592_METHOD_1_2199077E871773FF_OFFSET))(a1);
	}
};
