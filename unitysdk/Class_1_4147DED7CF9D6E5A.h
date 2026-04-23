#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityQuestTabGroupUIRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4147DED7CF9D6E5A_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1898EE80)
#define CLASS_1_4147DED7CF9D6E5A_METHOD_1_146D7AB3E99E57C5_OFFSET UNITYSDK_OFFSET(0x1898E8E0)
#define CLASS_1_4147DED7CF9D6E5A_METHOD_1_224A6C9A06E7FDE8_OFFSET UNITYSDK_OFFSET(0x1898E5B0)
#define CLASS_1_4147DED7CF9D6E5A_METHOD_1_2AEA96F083FC030C_OFFSET UNITYSDK_OFFSET(0x1898EA90)
#define CLASS_1_4147DED7CF9D6E5A_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1898ECA0)
#define CLASS_1_4147DED7CF9D6E5A_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1898E630)
#define CLASS_1_4147DED7CF9D6E5A_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1898ED40)
#define CLASS_1_4147DED7CF9D6E5A_METHOD_1_C0283D31F6CAB692_OFFSET UNITYSDK_OFFSET(0x1898EED0)
#define CLASS_1_4147DED7CF9D6E5A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1898E880)
#define CLASS_1_4147DED7CF9D6E5A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1898EC60)
#define CLASS_1_4147DED7CF9D6E5A_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1898EDE0)
#define CLASS_1_4147DED7CF9D6E5A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1898F230)

inline static constexpr unsigned int Class_1_4147DED7CF9D6E5A_TypeDefinitionIndex = 11641;

class Class_1_4147DED7CF9D6E5A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestTabGroupUIRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestTabGroupUIRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4147DED7CF9D6E5A_TypeDefinitionIndex)->GetStaticField(0x21D70);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4147DED7CF9D6E5A_TypeDefinitionIndex)->GetStaticField(0x21D78);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4147DED7CF9D6E5A_TypeDefinitionIndex)->GetStaticField(0x21D80);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4147DED7CF9D6E5A_TypeDefinitionIndex)->GetStaticField(0x8690);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4147DED7CF9D6E5A_TypeDefinitionIndex)->GetStaticField(0x8691);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4147DED7CF9D6E5A__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestTabGroupUIRow*>* Method_1_224A6C9A06E7FDE8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestTabGroupUIRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4147DED7CF9D6E5A_METHOD_1_224A6C9A06E7FDE8_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4147DED7CF9D6E5A_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestTabGroupUIRow*> Method_1_146D7AB3E99E57C5()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestTabGroupUIRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_4147DED7CF9D6E5A_METHOD_1_146D7AB3E99E57C5_OFFSET))();
	}

	static ::RPG::GameCore::ActivityQuestTabGroupUIRow* Method_1_2AEA96F083FC030C(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityQuestTabGroupUIRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4147DED7CF9D6E5A_METHOD_1_2AEA96F083FC030C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4147DED7CF9D6E5A_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4147DED7CF9D6E5A_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4147DED7CF9D6E5A_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4147DED7CF9D6E5A_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_4147DED7CF9D6E5A_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_4147DED7CF9D6E5A_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_C0283D31F6CAB692(::RPG::GameCore::ActivityQuestTabGroupUIRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityQuestTabGroupUIRow*))((::PBYTE)hIl2Cpp + CLASS_1_4147DED7CF9D6E5A_METHOD_1_C0283D31F6CAB692_OFFSET))(a1);
	}
};
