#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PreAvatarLevelingTemplateDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F323F79215DA18C9_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16C66380)
#define CLASS_1_F323F79215DA18C9_METHOD_1_138CB270085E517B_OFFSET UNITYSDK_OFFSET(0x16C65F50)
#define CLASS_1_F323F79215DA18C9_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C661A0)
#define CLASS_1_F323F79215DA18C9_METHOD_1_4A8D376EA865CF8B_OFFSET UNITYSDK_OFFSET(0x16C663D0)
#define CLASS_1_F323F79215DA18C9_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16C65AF0)
#define CLASS_1_F323F79215DA18C9_METHOD_1_77563867EF4D7E75_OFFSET UNITYSDK_OFFSET(0x16C65A70)
#define CLASS_1_F323F79215DA18C9_METHOD_1_786FBD71E0D6FCCE_OFFSET UNITYSDK_OFFSET(0x16C65DA0)
#define CLASS_1_F323F79215DA18C9_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16C66240)
#define CLASS_1_F323F79215DA18C9_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C65D40)
#define CLASS_1_F323F79215DA18C9_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16C66160)
#define CLASS_1_F323F79215DA18C9_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16C662E0)
#define CLASS_1_F323F79215DA18C9__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C66780)

inline static constexpr unsigned int Class_1_F323F79215DA18C9_TypeDefinitionIndex = 13284;

class Class_1_F323F79215DA18C9 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F323F79215DA18C9_TypeDefinitionIndex)->GetStaticField(0x1C30);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F323F79215DA18C9_TypeDefinitionIndex)->GetStaticField(0x1C38);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PreAvatarLevelingTemplateDataRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PreAvatarLevelingTemplateDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F323F79215DA18C9_TypeDefinitionIndex)->GetStaticField(0x1C40);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F323F79215DA18C9_TypeDefinitionIndex)->GetStaticField(0x2250);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F323F79215DA18C9_TypeDefinitionIndex)->GetStaticField(0x2251);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F323F79215DA18C9__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PreAvatarLevelingTemplateDataRow*>* Method_1_77563867EF4D7E75()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PreAvatarLevelingTemplateDataRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F323F79215DA18C9_METHOD_1_77563867EF4D7E75_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F323F79215DA18C9_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PreAvatarLevelingTemplateDataRow*> Method_1_786FBD71E0D6FCCE()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PreAvatarLevelingTemplateDataRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F323F79215DA18C9_METHOD_1_786FBD71E0D6FCCE_OFFSET))();
	}

	static ::RPG::GameCore::PreAvatarLevelingTemplateDataRow* Method_1_138CB270085E517B(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::PreAvatarLevelingTemplateDataRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F323F79215DA18C9_METHOD_1_138CB270085E517B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F323F79215DA18C9_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F323F79215DA18C9_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F323F79215DA18C9_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F323F79215DA18C9_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F323F79215DA18C9_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F323F79215DA18C9_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_4A8D376EA865CF8B(::RPG::GameCore::PreAvatarLevelingTemplateDataRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PreAvatarLevelingTemplateDataRow*))((::PBYTE)hIl2Cpp + CLASS_1_F323F79215DA18C9_METHOD_1_4A8D376EA865CF8B_OFFSET))(a1);
	}
};
