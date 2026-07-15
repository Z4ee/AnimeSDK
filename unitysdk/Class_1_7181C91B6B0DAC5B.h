#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueHandBookEventTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7181C91B6B0DAC5B_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0xBAF4950)
#define CLASS_1_7181C91B6B0DAC5B_METHOD_1_19C33A5BCB8FAF7B_OFFSET UNITYSDK_OFFSET(0xBAF4170)
#define CLASS_1_7181C91B6B0DAC5B_METHOD_1_547620B0C28E95EE_OFFSET UNITYSDK_OFFSET(0xBAF45F0)
#define CLASS_1_7181C91B6B0DAC5B_METHOD_1_78973AA84673A27C_OFFSET UNITYSDK_OFFSET(0xBAF4480)
#define CLASS_1_7181C91B6B0DAC5B_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xBAF4780)
#define CLASS_1_7181C91B6B0DAC5B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0xBAF4810)
#define CLASS_1_7181C91B6B0DAC5B_METHOD_1_AE85096EF9F15E30_OFFSET UNITYSDK_OFFSET(0xBAF49A0)
#define CLASS_1_7181C91B6B0DAC5B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0xBAF4420)
#define CLASS_1_7181C91B6B0DAC5B_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0xBAF41F0)
#define CLASS_1_7181C91B6B0DAC5B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xBAF4740)
#define CLASS_1_7181C91B6B0DAC5B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0xBAF48B0)
#define CLASS_1_7181C91B6B0DAC5B__CCTOR_OFFSET UNITYSDK_OFFSET(0xBAF4CC0)

inline static constexpr unsigned int Class_1_7181C91B6B0DAC5B_TypeDefinitionIndex = 14249;

class Class_1_7181C91B6B0DAC5B : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7181C91B6B0DAC5B_TypeDefinitionIndex)->GetStaticField(0x4F1B0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandBookEventTypeRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandBookEventTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7181C91B6B0DAC5B_TypeDefinitionIndex)->GetStaticField(0x4F1B8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7181C91B6B0DAC5B_TypeDefinitionIndex)->GetStaticField(0x4F1C0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7181C91B6B0DAC5B_TypeDefinitionIndex)->GetStaticField(0xE330);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7181C91B6B0DAC5B_TypeDefinitionIndex)->GetStaticField(0xE331);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7181C91B6B0DAC5B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandBookEventTypeRow*>* Method_1_19C33A5BCB8FAF7B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandBookEventTypeRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7181C91B6B0DAC5B_METHOD_1_19C33A5BCB8FAF7B_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7181C91B6B0DAC5B_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandBookEventTypeRow*> Method_1_78973AA84673A27C()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandBookEventTypeRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_7181C91B6B0DAC5B_METHOD_1_78973AA84673A27C_OFFSET))();
	}

	static ::RPG::GameCore::RogueHandBookEventTypeRow* Method_1_547620B0C28E95EE(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueHandBookEventTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7181C91B6B0DAC5B_METHOD_1_547620B0C28E95EE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7181C91B6B0DAC5B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7181C91B6B0DAC5B_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7181C91B6B0DAC5B_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7181C91B6B0DAC5B_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_7181C91B6B0DAC5B_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_7181C91B6B0DAC5B_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_AE85096EF9F15E30(::RPG::GameCore::RogueHandBookEventTypeRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueHandBookEventTypeRow*))((::PBYTE)hIl2Cpp + CLASS_1_7181C91B6B0DAC5B_METHOD_1_AE85096EF9F15E30_OFFSET))(a1);
	}
};
