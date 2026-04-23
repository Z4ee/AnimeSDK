#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MatchThreeDmgLimitRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_77281A754DE8125D_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18200300)
#define CLASS_1_77281A754DE8125D_METHOD_1_203FEC9B558A7513_OFFSET UNITYSDK_OFFSET(0x181FFF10)
#define CLASS_1_77281A754DE8125D_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18200120)
#define CLASS_1_77281A754DE8125D_METHOD_1_395E5E03422E7271_OFFSET UNITYSDK_OFFSET(0x181FFA30)
#define CLASS_1_77281A754DE8125D_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x181FFAB0)
#define CLASS_1_77281A754DE8125D_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x182001C0)
#define CLASS_1_77281A754DE8125D_METHOD_1_B0F45DA7BDE5194A_OFFSET UNITYSDK_OFFSET(0x181FFD60)
#define CLASS_1_77281A754DE8125D_METHOD_1_B30EA425A57468B7_OFFSET UNITYSDK_OFFSET(0x18200350)
#define CLASS_1_77281A754DE8125D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x181FFD00)
#define CLASS_1_77281A754DE8125D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x182000E0)
#define CLASS_1_77281A754DE8125D_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18200260)
#define CLASS_1_77281A754DE8125D__CCTOR_OFFSET UNITYSDK_OFFSET(0x182006B0)

inline static constexpr unsigned int Class_1_77281A754DE8125D_TypeDefinitionIndex = 11363;

class Class_1_77281A754DE8125D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeDmgLimitRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeDmgLimitRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77281A754DE8125D_TypeDefinitionIndex)->GetStaticField(0x20780);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77281A754DE8125D_TypeDefinitionIndex)->GetStaticField(0x20788);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77281A754DE8125D_TypeDefinitionIndex)->GetStaticField(0x20790);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_77281A754DE8125D_TypeDefinitionIndex)->GetStaticField(0x7E20);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_77281A754DE8125D_TypeDefinitionIndex)->GetStaticField(0x7E21);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_77281A754DE8125D__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeDmgLimitRow*>* Method_1_395E5E03422E7271()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeDmgLimitRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_77281A754DE8125D_METHOD_1_395E5E03422E7271_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_77281A754DE8125D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeDmgLimitRow*> Method_1_B0F45DA7BDE5194A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeDmgLimitRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_77281A754DE8125D_METHOD_1_B0F45DA7BDE5194A_OFFSET))();
	}

	static ::RPG::GameCore::MatchThreeDmgLimitRow* Method_1_203FEC9B558A7513(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MatchThreeDmgLimitRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_77281A754DE8125D_METHOD_1_203FEC9B558A7513_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_77281A754DE8125D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_77281A754DE8125D_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_77281A754DE8125D_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_77281A754DE8125D_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_77281A754DE8125D_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_77281A754DE8125D_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_B30EA425A57468B7(::RPG::GameCore::MatchThreeDmgLimitRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MatchThreeDmgLimitRow*))((::PBYTE)hIl2Cpp + CLASS_1_77281A754DE8125D_METHOD_1_B30EA425A57468B7_OFFSET))(a1);
	}
};
