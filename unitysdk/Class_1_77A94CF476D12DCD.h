#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TarotBookRevealedCharacterRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_77A94CF476D12DCD_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x18989CC0)
#define CLASS_1_77A94CF476D12DCD_METHOD_1_1AFAC35A6109913E_OFFSET UNITYSDK_OFFSET(0x18989D10)
#define CLASS_1_77A94CF476D12DCD_METHOD_1_245DB24E893E788E_OFFSET UNITYSDK_OFFSET(0x18989770)
#define CLASS_1_77A94CF476D12DCD_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18989AE0)
#define CLASS_1_77A94CF476D12DCD_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x189894C0)
#define CLASS_1_77A94CF476D12DCD_METHOD_1_A75C5D61BBE6F77A_OFFSET UNITYSDK_OFFSET(0x18989920)
#define CLASS_1_77A94CF476D12DCD_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18989B80)
#define CLASS_1_77A94CF476D12DCD_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18989710)
#define CLASS_1_77A94CF476D12DCD_METHOD_1_E7337BDCE996E3B1_OFFSET UNITYSDK_OFFSET(0x18989440)
#define CLASS_1_77A94CF476D12DCD_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18989AA0)
#define CLASS_1_77A94CF476D12DCD_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18989C20)
#define CLASS_1_77A94CF476D12DCD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1898A020)

inline static constexpr unsigned int Class_1_77A94CF476D12DCD_TypeDefinitionIndex = 14434;

class Class_1_77A94CF476D12DCD : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77A94CF476D12DCD_TypeDefinitionIndex)->GetStaticField(0x21A90);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77A94CF476D12DCD_TypeDefinitionIndex)->GetStaticField(0x21A98);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookRevealedCharacterRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookRevealedCharacterRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77A94CF476D12DCD_TypeDefinitionIndex)->GetStaticField(0x21AA0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_77A94CF476D12DCD_TypeDefinitionIndex)->GetStaticField(0x8570);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_77A94CF476D12DCD_TypeDefinitionIndex)->GetStaticField(0x8571);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_77A94CF476D12DCD__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookRevealedCharacterRow*>* Method_1_E7337BDCE996E3B1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookRevealedCharacterRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_77A94CF476D12DCD_METHOD_1_E7337BDCE996E3B1_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_77A94CF476D12DCD_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookRevealedCharacterRow*> Method_1_245DB24E893E788E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookRevealedCharacterRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_77A94CF476D12DCD_METHOD_1_245DB24E893E788E_OFFSET))();
	}

	static ::RPG::GameCore::TarotBookRevealedCharacterRow* Method_1_A75C5D61BBE6F77A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::TarotBookRevealedCharacterRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_77A94CF476D12DCD_METHOD_1_A75C5D61BBE6F77A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_77A94CF476D12DCD_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_77A94CF476D12DCD_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_77A94CF476D12DCD_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_77A94CF476D12DCD_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_77A94CF476D12DCD_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_77A94CF476D12DCD_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_1AFAC35A6109913E(::RPG::GameCore::TarotBookRevealedCharacterRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TarotBookRevealedCharacterRow*))((::PBYTE)hIl2Cpp + CLASS_1_77A94CF476D12DCD_METHOD_1_1AFAC35A6109913E_OFFSET))(a1);
	}
};
