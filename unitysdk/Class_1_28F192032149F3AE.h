#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarbleSealGroupConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_28F192032149F3AE_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1923DCA0)
#define CLASS_1_28F192032149F3AE_METHOD_1_12F0AAEF51CFA55B_OFFSET UNITYSDK_OFFSET(0x1923D790)
#define CLASS_1_28F192032149F3AE_METHOD_1_348B439194F93F1F_OFFSET UNITYSDK_OFFSET(0x1923D900)
#define CLASS_1_28F192032149F3AE_METHOD_1_3D509642A357A04E_OFFSET UNITYSDK_OFFSET(0x1923D480)
#define CLASS_1_28F192032149F3AE_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1923DAD0)
#define CLASS_1_28F192032149F3AE_METHOD_1_9D5F4BB03C3CC65A_OFFSET UNITYSDK_OFFSET(0x1923DCF0)
#define CLASS_1_28F192032149F3AE_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1923DB60)
#define CLASS_1_28F192032149F3AE_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1923D730)
#define CLASS_1_28F192032149F3AE_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1923D500)
#define CLASS_1_28F192032149F3AE_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1923DA90)
#define CLASS_1_28F192032149F3AE_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1923DC00)
#define CLASS_1_28F192032149F3AE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1923E060)

inline static constexpr unsigned int Class_1_28F192032149F3AE_TypeDefinitionIndex = 11350;

class Class_1_28F192032149F3AE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28F192032149F3AE_TypeDefinitionIndex)->GetStaticField(0x50A00);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealGroupConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealGroupConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28F192032149F3AE_TypeDefinitionIndex)->GetStaticField(0x50A08);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28F192032149F3AE_TypeDefinitionIndex)->GetStaticField(0x50A10);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_28F192032149F3AE_TypeDefinitionIndex)->GetStaticField(0xFC40);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_28F192032149F3AE_TypeDefinitionIndex)->GetStaticField(0xFC41);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_28F192032149F3AE__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealGroupConfigRow*>* Method_1_3D509642A357A04E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealGroupConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_28F192032149F3AE_METHOD_1_3D509642A357A04E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_28F192032149F3AE_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealGroupConfigRow*> Method_1_12F0AAEF51CFA55B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealGroupConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_28F192032149F3AE_METHOD_1_12F0AAEF51CFA55B_OFFSET))();
	}

	static ::RPG::GameCore::MarbleSealGroupConfigRow* Method_1_348B439194F93F1F(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MarbleSealGroupConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_28F192032149F3AE_METHOD_1_348B439194F93F1F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_28F192032149F3AE_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_28F192032149F3AE_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_28F192032149F3AE_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_28F192032149F3AE_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_28F192032149F3AE_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_28F192032149F3AE_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_9D5F4BB03C3CC65A(::RPG::GameCore::MarbleSealGroupConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MarbleSealGroupConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_28F192032149F3AE_METHOD_1_9D5F4BB03C3CC65A_OFFSET))(a1);
	}
};
