#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityHipplenStatConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8931737063ABD956_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16D835A0)
#define CLASS_1_8931737063ABD956_METHOD_1_0E334894295CFBB4_OFFSET UNITYSDK_OFFSET(0x16D82CD0)
#define CLASS_1_8931737063ABD956_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16D833C0)
#define CLASS_1_8931737063ABD956_METHOD_1_5C0F33354CEBCD76_OFFSET UNITYSDK_OFFSET(0x16D835F0)
#define CLASS_1_8931737063ABD956_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16D82D50)
#define CLASS_1_8931737063ABD956_METHOD_1_965FBD4D87FA2EF4_OFFSET UNITYSDK_OFFSET(0x16D831B0)
#define CLASS_1_8931737063ABD956_METHOD_1_9A6687BBBEFE5711_OFFSET UNITYSDK_OFFSET(0x16D83000)
#define CLASS_1_8931737063ABD956_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16D83460)
#define CLASS_1_8931737063ABD956_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16D82FA0)
#define CLASS_1_8931737063ABD956_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16D83380)
#define CLASS_1_8931737063ABD956_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16D83500)
#define CLASS_1_8931737063ABD956__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D83950)

inline static constexpr unsigned int Class_1_8931737063ABD956_TypeDefinitionIndex = 10859;

class Class_1_8931737063ABD956 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8931737063ABD956_TypeDefinitionIndex)->GetStaticField(0x14A60);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenStatConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenStatConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8931737063ABD956_TypeDefinitionIndex)->GetStaticField(0x14A68);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8931737063ABD956_TypeDefinitionIndex)->GetStaticField(0x14A70);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8931737063ABD956_TypeDefinitionIndex)->GetStaticField(0x6050);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8931737063ABD956_TypeDefinitionIndex)->GetStaticField(0x6051);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8931737063ABD956__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenStatConfigRow*>* Method_1_0E334894295CFBB4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenStatConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8931737063ABD956_METHOD_1_0E334894295CFBB4_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8931737063ABD956_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenStatConfigRow*> Method_1_9A6687BBBEFE5711()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenStatConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_8931737063ABD956_METHOD_1_9A6687BBBEFE5711_OFFSET))();
	}

	static ::RPG::GameCore::ActivityHipplenStatConfigRow* Method_1_965FBD4D87FA2EF4(::RPG::GameCore::HipplenStatType a1)
	{
		return ((::RPG::GameCore::ActivityHipplenStatConfigRow*(*)(::RPG::GameCore::HipplenStatType))((::PBYTE)hIl2Cpp + CLASS_1_8931737063ABD956_METHOD_1_965FBD4D87FA2EF4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8931737063ABD956_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8931737063ABD956_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8931737063ABD956_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8931737063ABD956_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8931737063ABD956_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_8931737063ABD956_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_5C0F33354CEBCD76(::RPG::GameCore::ActivityHipplenStatConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenStatConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_8931737063ABD956_METHOD_1_5C0F33354CEBCD76_OFFSET))(a1);
	}
};
