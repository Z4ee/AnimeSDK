#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveSpecialChatRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_14F7D7F3913DD47E_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x193D3A50)
#define CLASS_1_14F7D7F3913DD47E_METHOD_1_0E68E1EDFB2027CF_OFFSET UNITYSDK_OFFSET(0x193D36B0)
#define CLASS_1_14F7D7F3913DD47E_METHOD_1_5BB9B9269022D846_OFFSET UNITYSDK_OFFSET(0x193D3230)
#define CLASS_1_14F7D7F3913DD47E_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x193D3880)
#define CLASS_1_14F7D7F3913DD47E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x193D3910)
#define CLASS_1_14F7D7F3913DD47E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x193D34E0)
#define CLASS_1_14F7D7F3913DD47E_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x193D32B0)
#define CLASS_1_14F7D7F3913DD47E_METHOD_1_E04D01494589778F_OFFSET UNITYSDK_OFFSET(0x193D3540)
#define CLASS_1_14F7D7F3913DD47E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x193D3840)
#define CLASS_1_14F7D7F3913DD47E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x193D39B0)
#define CLASS_1_14F7D7F3913DD47E_METHOD_1_FECB3FC564190C4A_OFFSET UNITYSDK_OFFSET(0x193D3AA0)
#define CLASS_1_14F7D7F3913DD47E__CCTOR_OFFSET UNITYSDK_OFFSET(0x193D3E10)

inline static constexpr unsigned int Class_1_14F7D7F3913DD47E_TypeDefinitionIndex = 11373;

class Class_1_14F7D7F3913DD47E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpecialChatRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpecialChatRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14F7D7F3913DD47E_TypeDefinitionIndex)->GetStaticField(0x67FD0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14F7D7F3913DD47E_TypeDefinitionIndex)->GetStaticField(0x67FD8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14F7D7F3913DD47E_TypeDefinitionIndex)->GetStaticField(0x67FE0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_14F7D7F3913DD47E_TypeDefinitionIndex)->GetStaticField(0x14240);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_14F7D7F3913DD47E_TypeDefinitionIndex)->GetStaticField(0x14241);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_14F7D7F3913DD47E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpecialChatRow*>* Method_1_5BB9B9269022D846()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpecialChatRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_14F7D7F3913DD47E_METHOD_1_5BB9B9269022D846_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_14F7D7F3913DD47E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpecialChatRow*> Method_1_E04D01494589778F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpecialChatRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_14F7D7F3913DD47E_METHOD_1_E04D01494589778F_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveSpecialChatRow* Method_1_0E68E1EDFB2027CF(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveSpecialChatRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14F7D7F3913DD47E_METHOD_1_0E68E1EDFB2027CF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_14F7D7F3913DD47E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_14F7D7F3913DD47E_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_14F7D7F3913DD47E_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_14F7D7F3913DD47E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_14F7D7F3913DD47E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_14F7D7F3913DD47E_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_FECB3FC564190C4A(::RPG::GameCore::IdleLiveSpecialChatRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveSpecialChatRow*))((::PBYTE)hIl2Cpp + CLASS_1_14F7D7F3913DD47E_METHOD_1_FECB3FC564190C4A_OFFSET))(a1);
	}
};
