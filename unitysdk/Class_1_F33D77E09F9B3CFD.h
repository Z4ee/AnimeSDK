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

#define CLASS_1_F33D77E09F9B3CFD_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x193A4650)
#define CLASS_1_F33D77E09F9B3CFD_METHOD_1_17B5CF164B4D55C1_OFFSET UNITYSDK_OFFSET(0x193A3E70)
#define CLASS_1_F33D77E09F9B3CFD_METHOD_1_2A9DFB9FE362095F_OFFSET UNITYSDK_OFFSET(0x193A4180)
#define CLASS_1_F33D77E09F9B3CFD_METHOD_1_6AB339A48EA4F4A2_OFFSET UNITYSDK_OFFSET(0x193A46A0)
#define CLASS_1_F33D77E09F9B3CFD_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x193A4480)
#define CLASS_1_F33D77E09F9B3CFD_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x193A4510)
#define CLASS_1_F33D77E09F9B3CFD_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x193A4120)
#define CLASS_1_F33D77E09F9B3CFD_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x193A3EF0)
#define CLASS_1_F33D77E09F9B3CFD_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x193A4440)
#define CLASS_1_F33D77E09F9B3CFD_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x193A45B0)
#define CLASS_1_F33D77E09F9B3CFD_METHOD_1_F97B0A21178DB150_OFFSET UNITYSDK_OFFSET(0x193A42B0)
#define CLASS_1_F33D77E09F9B3CFD__CCTOR_OFFSET UNITYSDK_OFFSET(0x193A49C0)

inline static constexpr unsigned int Class_1_F33D77E09F9B3CFD_TypeDefinitionIndex = 12300;

class Class_1_F33D77E09F9B3CFD : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F33D77E09F9B3CFD_TypeDefinitionIndex)->GetStaticField(0x58520);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F33D77E09F9B3CFD_TypeDefinitionIndex)->GetStaticField(0x58528);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakePerformanceConfigRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakePerformanceConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F33D77E09F9B3CFD_TypeDefinitionIndex)->GetStaticField(0x58530);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F33D77E09F9B3CFD_TypeDefinitionIndex)->GetStaticField(0x118C0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F33D77E09F9B3CFD_TypeDefinitionIndex)->GetStaticField(0x118C1);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakePerformanceConfigRow*> Method_1_2A9DFB9FE362095F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakePerformanceConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F33D77E09F9B3CFD_METHOD_1_2A9DFB9FE362095F_OFFSET))();
	}

	static ::RPG::GameCore::CakePerformanceConfigRow* Method_1_F97B0A21178DB150(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakePerformanceConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F33D77E09F9B3CFD_METHOD_1_F97B0A21178DB150_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F33D77E09F9B3CFD_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F33D77E09F9B3CFD_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F33D77E09F9B3CFD_METHOD_1_89D1F247B9D324EE_OFFSET))();
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
