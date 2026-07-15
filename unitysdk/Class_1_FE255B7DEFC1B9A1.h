#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MechanismBarConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FE255B7DEFC1B9A1_METHOD_1_00898EC75CCCFC2E_OFFSET UNITYSDK_OFFSET(0x1B8F93F0)
#define CLASS_1_FE255B7DEFC1B9A1_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B8F9900)
#define CLASS_1_FE255B7DEFC1B9A1_METHOD_1_2014BFBBC5370678_OFFSET UNITYSDK_OFFSET(0x1B8F9560)
#define CLASS_1_FE255B7DEFC1B9A1_METHOD_1_2799F9610C6B90A5_OFFSET UNITYSDK_OFFSET(0x1B8F90E0)
#define CLASS_1_FE255B7DEFC1B9A1_METHOD_1_7A6BEDA52EF186C3_OFFSET UNITYSDK_OFFSET(0x1B8F9950)
#define CLASS_1_FE255B7DEFC1B9A1_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B8F9730)
#define CLASS_1_FE255B7DEFC1B9A1_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B8F97C0)
#define CLASS_1_FE255B7DEFC1B9A1_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B8F9390)
#define CLASS_1_FE255B7DEFC1B9A1_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B8F9160)
#define CLASS_1_FE255B7DEFC1B9A1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B8F96F0)
#define CLASS_1_FE255B7DEFC1B9A1_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B8F9860)
#define CLASS_1_FE255B7DEFC1B9A1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8F9CC0)

inline static constexpr unsigned int Class_1_FE255B7DEFC1B9A1_TypeDefinitionIndex = 13598;

class Class_1_FE255B7DEFC1B9A1 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE255B7DEFC1B9A1_TypeDefinitionIndex)->GetStaticField(0x422B0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MechanismBarConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MechanismBarConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE255B7DEFC1B9A1_TypeDefinitionIndex)->GetStaticField(0x422B8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE255B7DEFC1B9A1_TypeDefinitionIndex)->GetStaticField(0x422C0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE255B7DEFC1B9A1_TypeDefinitionIndex)->GetStaticField(0xB380);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE255B7DEFC1B9A1_TypeDefinitionIndex)->GetStaticField(0xB381);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE255B7DEFC1B9A1__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MechanismBarConfigRow*>* Method_1_2799F9610C6B90A5()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MechanismBarConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE255B7DEFC1B9A1_METHOD_1_2799F9610C6B90A5_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE255B7DEFC1B9A1_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MechanismBarConfigRow*> Method_1_00898EC75CCCFC2E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MechanismBarConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE255B7DEFC1B9A1_METHOD_1_00898EC75CCCFC2E_OFFSET))();
	}

	static ::RPG::GameCore::MechanismBarConfigRow* Method_1_2014BFBBC5370678(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MechanismBarConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FE255B7DEFC1B9A1_METHOD_1_2014BFBBC5370678_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE255B7DEFC1B9A1_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE255B7DEFC1B9A1_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE255B7DEFC1B9A1_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FE255B7DEFC1B9A1_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_FE255B7DEFC1B9A1_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_FE255B7DEFC1B9A1_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_7A6BEDA52EF186C3(::RPG::GameCore::MechanismBarConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MechanismBarConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_FE255B7DEFC1B9A1_METHOD_1_7A6BEDA52EF186C3_OFFSET))(a1);
	}
};
