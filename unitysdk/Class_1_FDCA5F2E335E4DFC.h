#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueAeonListConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FDCA5F2E335E4DFC_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x18D9E600)
#define CLASS_1_FDCA5F2E335E4DFC_METHOD_1_2A87A622312709DE_OFFSET UNITYSDK_OFFSET(0x18D9E210)
#define CLASS_1_FDCA5F2E335E4DFC_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18D9E420)
#define CLASS_1_FDCA5F2E335E4DFC_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18D9DDE0)
#define CLASS_1_FDCA5F2E335E4DFC_METHOD_1_80CBCC3A2410CE50_OFFSET UNITYSDK_OFFSET(0x18D9DD60)
#define CLASS_1_FDCA5F2E335E4DFC_METHOD_1_83DEE7DB6754F5B5_OFFSET UNITYSDK_OFFSET(0x18D9E650)
#define CLASS_1_FDCA5F2E335E4DFC_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18D9E4C0)
#define CLASS_1_FDCA5F2E335E4DFC_METHOD_1_BED12361F6317A46_OFFSET UNITYSDK_OFFSET(0x18D9E090)
#define CLASS_1_FDCA5F2E335E4DFC_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18D9E030)
#define CLASS_1_FDCA5F2E335E4DFC_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18D9E3E0)
#define CLASS_1_FDCA5F2E335E4DFC_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18D9E560)
#define CLASS_1_FDCA5F2E335E4DFC__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D9E960)

inline static constexpr unsigned int Class_1_FDCA5F2E335E4DFC_TypeDefinitionIndex = 14049;

class Class_1_FDCA5F2E335E4DFC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAeonListConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAeonListConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FDCA5F2E335E4DFC_TypeDefinitionIndex)->GetStaticField(0x270D0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FDCA5F2E335E4DFC_TypeDefinitionIndex)->GetStaticField(0x270D8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FDCA5F2E335E4DFC_TypeDefinitionIndex)->GetStaticField(0x270E0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FDCA5F2E335E4DFC_TypeDefinitionIndex)->GetStaticField(0xA570);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FDCA5F2E335E4DFC_TypeDefinitionIndex)->GetStaticField(0xA571);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDCA5F2E335E4DFC__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAeonListConfigRow*>* Method_1_80CBCC3A2410CE50()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAeonListConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDCA5F2E335E4DFC_METHOD_1_80CBCC3A2410CE50_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDCA5F2E335E4DFC_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAeonListConfigRow*> Method_1_BED12361F6317A46()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAeonListConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDCA5F2E335E4DFC_METHOD_1_BED12361F6317A46_OFFSET))();
	}

	static ::RPG::GameCore::RogueAeonListConfigRow* Method_1_2A87A622312709DE(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueAeonListConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FDCA5F2E335E4DFC_METHOD_1_2A87A622312709DE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDCA5F2E335E4DFC_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDCA5F2E335E4DFC_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDCA5F2E335E4DFC_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FDCA5F2E335E4DFC_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_FDCA5F2E335E4DFC_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_FDCA5F2E335E4DFC_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_83DEE7DB6754F5B5(::RPG::GameCore::RogueAeonListConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueAeonListConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_FDCA5F2E335E4DFC_METHOD_1_83DEE7DB6754F5B5_OFFSET))(a1);
	}
};
