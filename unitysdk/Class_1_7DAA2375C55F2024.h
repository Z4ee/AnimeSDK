#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClockParkTalkTextRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7DAA2375C55F2024_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1B80DC50)
#define CLASS_1_7DAA2375C55F2024_METHOD_1_3C0F2189322BFE26_OFFSET UNITYSDK_OFFSET(0x1B80D430)
#define CLASS_1_7DAA2375C55F2024_METHOD_1_5417B6DFC7014FEF_OFFSET UNITYSDK_OFFSET(0x1B80D740)
#define CLASS_1_7DAA2375C55F2024_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B80DA80)
#define CLASS_1_7DAA2375C55F2024_METHOD_1_9E763ABD9EE932F0_OFFSET UNITYSDK_OFFSET(0x1B80DCA0)
#define CLASS_1_7DAA2375C55F2024_METHOD_1_AAEE083C51D14211_OFFSET UNITYSDK_OFFSET(0x1B80D8B0)
#define CLASS_1_7DAA2375C55F2024_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B80DB10)
#define CLASS_1_7DAA2375C55F2024_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B80D6E0)
#define CLASS_1_7DAA2375C55F2024_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B80D4B0)
#define CLASS_1_7DAA2375C55F2024_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B80DA40)
#define CLASS_1_7DAA2375C55F2024_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B80DBB0)
#define CLASS_1_7DAA2375C55F2024__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B80E010)

inline static constexpr unsigned int Class_1_7DAA2375C55F2024_TypeDefinitionIndex = 10804;

class Class_1_7DAA2375C55F2024 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7DAA2375C55F2024_TypeDefinitionIndex)->GetStaticField(0x652E0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalkTextRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalkTextRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7DAA2375C55F2024_TypeDefinitionIndex)->GetStaticField(0x652E8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7DAA2375C55F2024_TypeDefinitionIndex)->GetStaticField(0x652F0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7DAA2375C55F2024_TypeDefinitionIndex)->GetStaticField(0x13750);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7DAA2375C55F2024_TypeDefinitionIndex)->GetStaticField(0x13751);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7DAA2375C55F2024__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalkTextRow*>* Method_1_3C0F2189322BFE26()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalkTextRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7DAA2375C55F2024_METHOD_1_3C0F2189322BFE26_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7DAA2375C55F2024_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalkTextRow*> Method_1_5417B6DFC7014FEF()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkTalkTextRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_7DAA2375C55F2024_METHOD_1_5417B6DFC7014FEF_OFFSET))();
	}

	static ::RPG::GameCore::ClockParkTalkTextRow* Method_1_AAEE083C51D14211(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ClockParkTalkTextRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7DAA2375C55F2024_METHOD_1_AAEE083C51D14211_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7DAA2375C55F2024_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7DAA2375C55F2024_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7DAA2375C55F2024_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7DAA2375C55F2024_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_7DAA2375C55F2024_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_7DAA2375C55F2024_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_9E763ABD9EE932F0(::RPG::GameCore::ClockParkTalkTextRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ClockParkTalkTextRow*))((::PBYTE)hIl2Cpp + CLASS_1_7DAA2375C55F2024_METHOD_1_9E763ABD9EE932F0_OFFSET))(a1);
	}
};
