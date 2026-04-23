#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakePerformanceConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F33D77E09F9B3CFD_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1917DCC0)
#define CLASS_1_F33D77E09F9B3CFD_METHOD_1_17B5CF164B4D55C1_OFFSET UNITYSDK_OFFSET(0x1917D420)
#define CLASS_1_F33D77E09F9B3CFD_METHOD_1_2066334835AFD85F_OFFSET UNITYSDK_OFFSET(0x1917D8D0)
#define CLASS_1_F33D77E09F9B3CFD_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1917DAE0)
#define CLASS_1_F33D77E09F9B3CFD_METHOD_1_390CA2AE7D4F6395_OFFSET UNITYSDK_OFFSET(0x1917D750)
#define CLASS_1_F33D77E09F9B3CFD_METHOD_1_6AB339A48EA4F4A2_OFFSET UNITYSDK_OFFSET(0x1917DD10)
#define CLASS_1_F33D77E09F9B3CFD_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1917D4A0)
#define CLASS_1_F33D77E09F9B3CFD_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1917DB80)
#define CLASS_1_F33D77E09F9B3CFD_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1917D6F0)
#define CLASS_1_F33D77E09F9B3CFD_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1917DAA0)
#define CLASS_1_F33D77E09F9B3CFD_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1917DC20)
#define CLASS_1_F33D77E09F9B3CFD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1917E020)

inline static constexpr unsigned int Class_1_F33D77E09F9B3CFD_TypeDefinitionIndex = 12215;

class Class_1_F33D77E09F9B3CFD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F33D77E09F9B3CFD_TypeDefinitionIndex)->GetStaticField(0x43240);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakePerformanceConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakePerformanceConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F33D77E09F9B3CFD_TypeDefinitionIndex)->GetStaticField(0x43248);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F33D77E09F9B3CFD_TypeDefinitionIndex)->GetStaticField(0x43250);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F33D77E09F9B3CFD_TypeDefinitionIndex)->GetStaticField(0xF0C0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F33D77E09F9B3CFD_TypeDefinitionIndex)->GetStaticField(0xF0C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F33D77E09F9B3CFD__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakePerformanceConfigRow*>* Method_1_17B5CF164B4D55C1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakePerformanceConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F33D77E09F9B3CFD_METHOD_1_17B5CF164B4D55C1_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F33D77E09F9B3CFD_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakePerformanceConfigRow*> Method_1_390CA2AE7D4F6395()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakePerformanceConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F33D77E09F9B3CFD_METHOD_1_390CA2AE7D4F6395_OFFSET))();
	}

	static ::RPG::GameCore::CakePerformanceConfigRow* Method_1_2066334835AFD85F(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakePerformanceConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F33D77E09F9B3CFD_METHOD_1_2066334835AFD85F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F33D77E09F9B3CFD_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F33D77E09F9B3CFD_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F33D77E09F9B3CFD_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F33D77E09F9B3CFD_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F33D77E09F9B3CFD_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F33D77E09F9B3CFD_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_6AB339A48EA4F4A2(::RPG::GameCore::CakePerformanceConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::CakePerformanceConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_F33D77E09F9B3CFD_METHOD_1_6AB339A48EA4F4A2_OFFSET))(a1);
	}
};
