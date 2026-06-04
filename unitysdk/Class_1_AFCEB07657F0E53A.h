#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityRogueAreaConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AFCEB07657F0E53A_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19141360)
#define CLASS_1_AFCEB07657F0E53A_METHOD_1_11D8703457881F64_OFFSET UNITYSDK_OFFSET(0x191413B0)
#define CLASS_1_AFCEB07657F0E53A_METHOD_1_5C6EEEE0D41E41ED_OFFSET UNITYSDK_OFFSET(0x19140E90)
#define CLASS_1_AFCEB07657F0E53A_METHOD_1_6FD5FA2E7C54F0B7_OFFSET UNITYSDK_OFFSET(0x19140B80)
#define CLASS_1_AFCEB07657F0E53A_METHOD_1_89D1F247B9D324EE_1_OFFSET UNITYSDK_OFFSET(0x19141E40)
#define CLASS_1_AFCEB07657F0E53A_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19141190)
#define CLASS_1_AFCEB07657F0E53A_METHOD_1_8DE11DB825A47DE3_OFFSET UNITYSDK_OFFSET(0x19141BB0)
#define CLASS_1_AFCEB07657F0E53A_METHOD_1_8EA9BD2AF580952E_OFFSET UNITYSDK_OFFSET(0x191416D0)
#define CLASS_1_AFCEB07657F0E53A_METHOD_1_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x19141900)
#define CLASS_1_AFCEB07657F0E53A_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19141220)
#define CLASS_1_AFCEB07657F0E53A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19140E30)
#define CLASS_1_AFCEB07657F0E53A_METHOD_1_DA85CE68ADF38C06_OFFSET UNITYSDK_OFFSET(0x19140FC0)
#define CLASS_1_AFCEB07657F0E53A_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19140C00)
#define CLASS_1_AFCEB07657F0E53A_METHOD_1_F08EBC1D72778600_OFFSET UNITYSDK_OFFSET(0x19141C70)
#define CLASS_1_AFCEB07657F0E53A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19141150)
#define CLASS_1_AFCEB07657F0E53A_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x191412C0)
#define CLASS_1_AFCEB07657F0E53A__CCTOR_OFFSET UNITYSDK_OFFSET(0x19141ED0)

inline static constexpr unsigned int Class_1_AFCEB07657F0E53A_TypeDefinitionIndex = 11763;

class Class_1_AFCEB07657F0E53A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRogueAreaConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRogueAreaConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AFCEB07657F0E53A_TypeDefinitionIndex)->GetStaticField(0x49530);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AFCEB07657F0E53A_TypeDefinitionIndex)->GetStaticField(0x49538);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AFCEB07657F0E53A_TypeDefinitionIndex)->GetStaticField(0x49540);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AFCEB07657F0E53A_TypeDefinitionIndex)->GetStaticField(0x49548);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AFCEB07657F0E53A_TypeDefinitionIndex)->GetStaticField(0xDAE0);
	}
	static ::System::Boolean* StaticGet_Field_1_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AFCEB07657F0E53A_TypeDefinitionIndex)->GetStaticField(0xDAE1);
	}
	static ::System::Byte* StaticGet_Field_1_6()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AFCEB07657F0E53A_TypeDefinitionIndex)->GetStaticField(0xDAE2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AFCEB07657F0E53A__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRogueAreaConfigRow*>* Method_1_6FD5FA2E7C54F0B7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRogueAreaConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AFCEB07657F0E53A_METHOD_1_6FD5FA2E7C54F0B7_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_AFCEB07657F0E53A_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRogueAreaConfigRow*> Method_1_5C6EEEE0D41E41ED()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRogueAreaConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_AFCEB07657F0E53A_METHOD_1_5C6EEEE0D41E41ED_OFFSET))();
	}

	static ::RPG::GameCore::ActivityRogueAreaConfigRow* Method_1_DA85CE68ADF38C06(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityRogueAreaConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AFCEB07657F0E53A_METHOD_1_DA85CE68ADF38C06_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_AFCEB07657F0E53A_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AFCEB07657F0E53A_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AFCEB07657F0E53A_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AFCEB07657F0E53A_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_AFCEB07657F0E53A_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_AFCEB07657F0E53A_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_11D8703457881F64(::RPG::GameCore::ActivityRogueAreaConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityRogueAreaConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_AFCEB07657F0E53A_METHOD_1_11D8703457881F64_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_8EA9BD2AF580952E(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AFCEB07657F0E53A_METHOD_1_8EA9BD2AF580952E_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::UInt32>* Method_1_8DE11DB825A47DE3(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AFCEB07657F0E53A_METHOD_1_8DE11DB825A47DE3_OFFSET))(a1);
	}

	static ::System::Void Method_1_907E24F785836BA0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AFCEB07657F0E53A_METHOD_1_907E24F785836BA0_OFFSET))();
	}

	static ::System::Void Method_1_F08EBC1D72778600(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AFCEB07657F0E53A_METHOD_1_F08EBC1D72778600_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_89D1F247B9D324EE_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AFCEB07657F0E53A_METHOD_1_89D1F247B9D324EE_1_OFFSET))();
	}
};
