#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarDemoModuleConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DE1D62B40CB728AB_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1772C700)
#define CLASS_1_DE1D62B40CB728AB_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1772C520)
#define CLASS_1_DE1D62B40CB728AB_METHOD_1_5AD772ED4837C8A7_OFFSET UNITYSDK_OFFSET(0x1772BE60)
#define CLASS_1_DE1D62B40CB728AB_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1772BEE0)
#define CLASS_1_DE1D62B40CB728AB_METHOD_1_70AFD662506DDB8F_OFFSET UNITYSDK_OFFSET(0x1772C190)
#define CLASS_1_DE1D62B40CB728AB_METHOD_1_7CDD5A2BBA0540C6_OFFSET UNITYSDK_OFFSET(0x1772C750)
#define CLASS_1_DE1D62B40CB728AB_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1772C5C0)
#define CLASS_1_DE1D62B40CB728AB_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1772C130)
#define CLASS_1_DE1D62B40CB728AB_METHOD_1_EEB0FACB5CA36C3B_OFFSET UNITYSDK_OFFSET(0x1772C310)
#define CLASS_1_DE1D62B40CB728AB_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1772C4E0)
#define CLASS_1_DE1D62B40CB728AB_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1772C660)
#define CLASS_1_DE1D62B40CB728AB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1772CA60)

inline static constexpr unsigned int Class_1_DE1D62B40CB728AB_TypeDefinitionIndex = 11664;

class Class_1_DE1D62B40CB728AB : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE1D62B40CB728AB_TypeDefinitionIndex)->GetStaticField(0x204A0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoModuleConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoModuleConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE1D62B40CB728AB_TypeDefinitionIndex)->GetStaticField(0x204A8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE1D62B40CB728AB_TypeDefinitionIndex)->GetStaticField(0x204B0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE1D62B40CB728AB_TypeDefinitionIndex)->GetStaticField(0x8880);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE1D62B40CB728AB_TypeDefinitionIndex)->GetStaticField(0x8881);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE1D62B40CB728AB__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoModuleConfigRow*>* Method_1_5AD772ED4837C8A7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoModuleConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE1D62B40CB728AB_METHOD_1_5AD772ED4837C8A7_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE1D62B40CB728AB_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoModuleConfigRow*> Method_1_70AFD662506DDB8F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoModuleConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE1D62B40CB728AB_METHOD_1_70AFD662506DDB8F_OFFSET))();
	}

	static ::RPG::GameCore::AvatarDemoModuleConfigRow* Method_1_EEB0FACB5CA36C3B(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AvatarDemoModuleConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE1D62B40CB728AB_METHOD_1_EEB0FACB5CA36C3B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE1D62B40CB728AB_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE1D62B40CB728AB_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE1D62B40CB728AB_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DE1D62B40CB728AB_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_DE1D62B40CB728AB_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_DE1D62B40CB728AB_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_7CDD5A2BBA0540C6(::RPG::GameCore::AvatarDemoModuleConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarDemoModuleConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_DE1D62B40CB728AB_METHOD_1_7CDD5A2BBA0540C6_OFFSET))(a1);
	}
};
