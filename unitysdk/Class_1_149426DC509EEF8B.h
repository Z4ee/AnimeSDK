#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MatchThreeOpponentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_149426DC509EEF8B_METHOD_1_09DB6E6245DD1E00_OFFSET UNITYSDK_OFFSET(0x1822B580)
#define CLASS_1_149426DC509EEF8B_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1822BAD0)
#define CLASS_1_149426DC509EEF8B_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1822B8F0)
#define CLASS_1_149426DC509EEF8B_METHOD_1_3FB086BC4258BB10_OFFSET UNITYSDK_OFFSET(0x1822BB20)
#define CLASS_1_149426DC509EEF8B_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1822B2D0)
#define CLASS_1_149426DC509EEF8B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1822B990)
#define CLASS_1_149426DC509EEF8B_METHOD_1_CC854DFA44F4D38B_OFFSET UNITYSDK_OFFSET(0x1822B250)
#define CLASS_1_149426DC509EEF8B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1822B520)
#define CLASS_1_149426DC509EEF8B_METHOD_1_CE87B2974026A774_OFFSET UNITYSDK_OFFSET(0x1822B730)
#define CLASS_1_149426DC509EEF8B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1822B8B0)
#define CLASS_1_149426DC509EEF8B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1822BA30)
#define CLASS_1_149426DC509EEF8B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1822BE30)

inline static constexpr unsigned int Class_1_149426DC509EEF8B_TypeDefinitionIndex = 11341;

class Class_1_149426DC509EEF8B : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_149426DC509EEF8B_TypeDefinitionIndex)->GetStaticField(0x22CB0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeOpponentRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeOpponentRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_149426DC509EEF8B_TypeDefinitionIndex)->GetStaticField(0x22CB8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_149426DC509EEF8B_TypeDefinitionIndex)->GetStaticField(0x22CC0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_149426DC509EEF8B_TypeDefinitionIndex)->GetStaticField(0x8D00);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_149426DC509EEF8B_TypeDefinitionIndex)->GetStaticField(0x8D01);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_149426DC509EEF8B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeOpponentRow*>* Method_1_CC854DFA44F4D38B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeOpponentRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_149426DC509EEF8B_METHOD_1_CC854DFA44F4D38B_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_149426DC509EEF8B_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeOpponentRow*> Method_1_09DB6E6245DD1E00()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeOpponentRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_149426DC509EEF8B_METHOD_1_09DB6E6245DD1E00_OFFSET))();
	}

	static ::RPG::GameCore::MatchThreeOpponentRow* Method_1_CE87B2974026A774(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MatchThreeOpponentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_149426DC509EEF8B_METHOD_1_CE87B2974026A774_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_149426DC509EEF8B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_149426DC509EEF8B_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_149426DC509EEF8B_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_149426DC509EEF8B_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_149426DC509EEF8B_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_149426DC509EEF8B_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_3FB086BC4258BB10(::RPG::GameCore::MatchThreeOpponentRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MatchThreeOpponentRow*))((::PBYTE)hIl2Cpp + CLASS_1_149426DC509EEF8B_METHOD_1_3FB086BC4258BB10_OFFSET))(a1);
	}
};
