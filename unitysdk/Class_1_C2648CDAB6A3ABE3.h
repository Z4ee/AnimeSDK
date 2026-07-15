#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/RaidConfigType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RaidTypeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C2648CDAB6A3ABE3_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B2F5390)
#define CLASS_1_C2648CDAB6A3ABE3_METHOD_1_0E705C5CFEC87163_OFFSET UNITYSDK_OFFSET(0x1B2F4B70)
#define CLASS_1_C2648CDAB6A3ABE3_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B2F51C0)
#define CLASS_1_C2648CDAB6A3ABE3_METHOD_1_954468A1D1715AF4_OFFSET UNITYSDK_OFFSET(0x1B2F4E80)
#define CLASS_1_C2648CDAB6A3ABE3_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B2F5250)
#define CLASS_1_C2648CDAB6A3ABE3_METHOD_1_CC2A32DEE41493EE_OFFSET UNITYSDK_OFFSET(0x1B2F4FF0)
#define CLASS_1_C2648CDAB6A3ABE3_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B2F4E20)
#define CLASS_1_C2648CDAB6A3ABE3_METHOD_1_D5BEBD4503F6CF41_OFFSET UNITYSDK_OFFSET(0x1B2F53E0)
#define CLASS_1_C2648CDAB6A3ABE3_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B2F4BF0)
#define CLASS_1_C2648CDAB6A3ABE3_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B2F5180)
#define CLASS_1_C2648CDAB6A3ABE3_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B2F52F0)
#define CLASS_1_C2648CDAB6A3ABE3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2F5750)

inline static constexpr unsigned int Class_1_C2648CDAB6A3ABE3_TypeDefinitionIndex = 14023;

class Class_1_C2648CDAB6A3ABE3 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C2648CDAB6A3ABE3_TypeDefinitionIndex)->GetStaticField(0x4E310);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidTypeConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidTypeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C2648CDAB6A3ABE3_TypeDefinitionIndex)->GetStaticField(0x4E318);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C2648CDAB6A3ABE3_TypeDefinitionIndex)->GetStaticField(0x4E320);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C2648CDAB6A3ABE3_TypeDefinitionIndex)->GetStaticField(0xDF00);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C2648CDAB6A3ABE3_TypeDefinitionIndex)->GetStaticField(0xDF01);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C2648CDAB6A3ABE3__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidTypeConfigRow*>* Method_1_0E705C5CFEC87163()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidTypeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C2648CDAB6A3ABE3_METHOD_1_0E705C5CFEC87163_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C2648CDAB6A3ABE3_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidTypeConfigRow*> Method_1_954468A1D1715AF4()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidTypeConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C2648CDAB6A3ABE3_METHOD_1_954468A1D1715AF4_OFFSET))();
	}

	static ::RPG::GameCore::RaidTypeConfigRow* Method_1_CC2A32DEE41493EE(::RPG::GameCore::RaidConfigType a1)
	{
		return ((::RPG::GameCore::RaidTypeConfigRow*(*)(::RPG::GameCore::RaidConfigType))((::PBYTE)hIl2Cpp + CLASS_1_C2648CDAB6A3ABE3_METHOD_1_CC2A32DEE41493EE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C2648CDAB6A3ABE3_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C2648CDAB6A3ABE3_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C2648CDAB6A3ABE3_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C2648CDAB6A3ABE3_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C2648CDAB6A3ABE3_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_C2648CDAB6A3ABE3_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_D5BEBD4503F6CF41(::RPG::GameCore::RaidTypeConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RaidTypeConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_C2648CDAB6A3ABE3_METHOD_1_D5BEBD4503F6CF41_OFFSET))(a1);
	}
};
