#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HeartDialSDFRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_037F7CD07F30BB4E_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19977260)
#define CLASS_1_037F7CD07F30BB4E_METHOD_1_3C07B7714D7296C6_OFFSET UNITYSDK_OFFSET(0x19976A80)
#define CLASS_1_037F7CD07F30BB4E_METHOD_1_6C4995B17CA02341_OFFSET UNITYSDK_OFFSET(0x19976F00)
#define CLASS_1_037F7CD07F30BB4E_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19977090)
#define CLASS_1_037F7CD07F30BB4E_METHOD_1_9D4DD482B1951DB7_OFFSET UNITYSDK_OFFSET(0x19976D90)
#define CLASS_1_037F7CD07F30BB4E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19977120)
#define CLASS_1_037F7CD07F30BB4E_METHOD_1_C69D4B54CFCB7933_OFFSET UNITYSDK_OFFSET(0x199772B0)
#define CLASS_1_037F7CD07F30BB4E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19976D30)
#define CLASS_1_037F7CD07F30BB4E_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19976B00)
#define CLASS_1_037F7CD07F30BB4E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19977050)
#define CLASS_1_037F7CD07F30BB4E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x199771C0)
#define CLASS_1_037F7CD07F30BB4E__CCTOR_OFFSET UNITYSDK_OFFSET(0x199775D0)

inline static constexpr unsigned int Class_1_037F7CD07F30BB4E_TypeDefinitionIndex = 13085;

class Class_1_037F7CD07F30BB4E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialSDFRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialSDFRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_037F7CD07F30BB4E_TypeDefinitionIndex)->GetStaticField(0x473A0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_037F7CD07F30BB4E_TypeDefinitionIndex)->GetStaticField(0x473A8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_037F7CD07F30BB4E_TypeDefinitionIndex)->GetStaticField(0x473B0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_037F7CD07F30BB4E_TypeDefinitionIndex)->GetStaticField(0xCF60);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_037F7CD07F30BB4E_TypeDefinitionIndex)->GetStaticField(0xCF61);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_037F7CD07F30BB4E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialSDFRow*>* Method_1_3C07B7714D7296C6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialSDFRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_037F7CD07F30BB4E_METHOD_1_3C07B7714D7296C6_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_037F7CD07F30BB4E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialSDFRow*> Method_1_9D4DD482B1951DB7()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialSDFRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_037F7CD07F30BB4E_METHOD_1_9D4DD482B1951DB7_OFFSET))();
	}

	static ::RPG::GameCore::HeartDialSDFRow* Method_1_6C4995B17CA02341(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::HeartDialSDFRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_037F7CD07F30BB4E_METHOD_1_6C4995B17CA02341_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_037F7CD07F30BB4E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_037F7CD07F30BB4E_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_037F7CD07F30BB4E_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_037F7CD07F30BB4E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_037F7CD07F30BB4E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_037F7CD07F30BB4E_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_C69D4B54CFCB7933(::RPG::GameCore::HeartDialSDFRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::HeartDialSDFRow*))((::PBYTE)hIl2Cpp + CLASS_1_037F7CD07F30BB4E_METHOD_1_C69D4B54CFCB7933_OFFSET))(a1);
	}
};
