#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FunctionHudSpecialConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_EC5D439945DC52D7_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1AF78440)
#define CLASS_1_EC5D439945DC52D7_METHOD_1_15EE89B14FE04744_OFFSET UNITYSDK_OFFSET(0x1AF78490)
#define CLASS_1_EC5D439945DC52D7_METHOD_1_59AEE2EE46A1E557_OFFSET UNITYSDK_OFFSET(0x1AF77CA0)
#define CLASS_1_EC5D439945DC52D7_METHOD_1_7BDFFD31DA88E2B2_OFFSET UNITYSDK_OFFSET(0x1AF780E0)
#define CLASS_1_EC5D439945DC52D7_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1AF78270)
#define CLASS_1_EC5D439945DC52D7_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1AF78300)
#define CLASS_1_EC5D439945DC52D7_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1AF77F50)
#define CLASS_1_EC5D439945DC52D7_METHOD_1_D1A5B17AAE215159_OFFSET UNITYSDK_OFFSET(0x1AF77FB0)
#define CLASS_1_EC5D439945DC52D7_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1AF77D20)
#define CLASS_1_EC5D439945DC52D7_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1AF78230)
#define CLASS_1_EC5D439945DC52D7_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1AF783A0)
#define CLASS_1_EC5D439945DC52D7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF787B0)

inline static constexpr unsigned int Class_1_EC5D439945DC52D7_TypeDefinitionIndex = 12812;

class Class_1_EC5D439945DC52D7 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EC5D439945DC52D7_TypeDefinitionIndex)->GetStaticField(0x66C70);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunctionHudSpecialConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunctionHudSpecialConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EC5D439945DC52D7_TypeDefinitionIndex)->GetStaticField(0x66C78);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EC5D439945DC52D7_TypeDefinitionIndex)->GetStaticField(0x66C80);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EC5D439945DC52D7_TypeDefinitionIndex)->GetStaticField(0x13D20);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EC5D439945DC52D7_TypeDefinitionIndex)->GetStaticField(0x13D21);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EC5D439945DC52D7__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunctionHudSpecialConfigRow*>* Method_1_59AEE2EE46A1E557()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunctionHudSpecialConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EC5D439945DC52D7_METHOD_1_59AEE2EE46A1E557_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_EC5D439945DC52D7_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunctionHudSpecialConfigRow*> Method_1_D1A5B17AAE215159()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunctionHudSpecialConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_EC5D439945DC52D7_METHOD_1_D1A5B17AAE215159_OFFSET))();
	}

	static ::RPG::GameCore::FunctionHudSpecialConfigRow* Method_1_7BDFFD31DA88E2B2(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::FunctionHudSpecialConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EC5D439945DC52D7_METHOD_1_7BDFFD31DA88E2B2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_EC5D439945DC52D7_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EC5D439945DC52D7_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EC5D439945DC52D7_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EC5D439945DC52D7_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_EC5D439945DC52D7_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_EC5D439945DC52D7_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_15EE89B14FE04744(::RPG::GameCore::FunctionHudSpecialConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::FunctionHudSpecialConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_EC5D439945DC52D7_METHOD_1_15EE89B14FE04744_OFFSET))(a1);
	}
};
