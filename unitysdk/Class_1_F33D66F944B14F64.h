#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FunctionHudConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F33D66F944B14F64_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16DD8650)
#define CLASS_1_F33D66F944B14F64_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16DD8470)
#define CLASS_1_F33D66F944B14F64_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16DD7E30)
#define CLASS_1_F33D66F944B14F64_METHOD_1_8A909CB0967C120D_OFFSET UNITYSDK_OFFSET(0x16DD86A0)
#define CLASS_1_F33D66F944B14F64_METHOD_1_A55D2313628A8AB2_OFFSET UNITYSDK_OFFSET(0x16DD80E0)
#define CLASS_1_F33D66F944B14F64_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16DD8510)
#define CLASS_1_F33D66F944B14F64_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16DD8080)
#define CLASS_1_F33D66F944B14F64_METHOD_1_D356F1128E1F61A0_OFFSET UNITYSDK_OFFSET(0x16DD7DB0)
#define CLASS_1_F33D66F944B14F64_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16DD8430)
#define CLASS_1_F33D66F944B14F64_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16DD85B0)
#define CLASS_1_F33D66F944B14F64_METHOD_1_F71CDB910DB54966_OFFSET UNITYSDK_OFFSET(0x16DD8260)
#define CLASS_1_F33D66F944B14F64__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DD89B0)

inline static constexpr unsigned int Class_1_F33D66F944B14F64_TypeDefinitionIndex = 12149;

class Class_1_F33D66F944B14F64 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F33D66F944B14F64_TypeDefinitionIndex)->GetStaticField(0x17590);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunctionHudConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunctionHudConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F33D66F944B14F64_TypeDefinitionIndex)->GetStaticField(0x17598);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F33D66F944B14F64_TypeDefinitionIndex)->GetStaticField(0x175A0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F33D66F944B14F64_TypeDefinitionIndex)->GetStaticField(0x6A50);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F33D66F944B14F64_TypeDefinitionIndex)->GetStaticField(0x6A51);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F33D66F944B14F64__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunctionHudConfigRow*>* Method_1_D356F1128E1F61A0()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunctionHudConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F33D66F944B14F64_METHOD_1_D356F1128E1F61A0_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F33D66F944B14F64_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunctionHudConfigRow*> Method_1_A55D2313628A8AB2()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunctionHudConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F33D66F944B14F64_METHOD_1_A55D2313628A8AB2_OFFSET))();
	}

	static ::RPG::GameCore::FunctionHudConfigRow* Method_1_F71CDB910DB54966(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::FunctionHudConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F33D66F944B14F64_METHOD_1_F71CDB910DB54966_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F33D66F944B14F64_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F33D66F944B14F64_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F33D66F944B14F64_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F33D66F944B14F64_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F33D66F944B14F64_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F33D66F944B14F64_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_8A909CB0967C120D(::RPG::GameCore::FunctionHudConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::FunctionHudConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_F33D66F944B14F64_METHOD_1_8A909CB0967C120D_OFFSET))(a1);
	}
};
