#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveFinalActGiftRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_22F3C05877174DCF_METHOD_1_008AA6E817659415_OFFSET UNITYSDK_OFFSET(0x1B808E90)
#define CLASS_1_22F3C05877174DCF_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1B808E40)
#define CLASS_1_22F3C05877174DCF_METHOD_1_42B309970E211830_OFFSET UNITYSDK_OFFSET(0x1B808930)
#define CLASS_1_22F3C05877174DCF_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B808C70)
#define CLASS_1_22F3C05877174DCF_METHOD_1_8A7B6403B328733E_OFFSET UNITYSDK_OFFSET(0x1B808AA0)
#define CLASS_1_22F3C05877174DCF_METHOD_1_8C73E08A4867A517_OFFSET UNITYSDK_OFFSET(0x1B808620)
#define CLASS_1_22F3C05877174DCF_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B808D00)
#define CLASS_1_22F3C05877174DCF_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B8088D0)
#define CLASS_1_22F3C05877174DCF_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B8086A0)
#define CLASS_1_22F3C05877174DCF_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B808C30)
#define CLASS_1_22F3C05877174DCF_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B808DA0)
#define CLASS_1_22F3C05877174DCF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B809200)

inline static constexpr unsigned int Class_1_22F3C05877174DCF_TypeDefinitionIndex = 11281;

class Class_1_22F3C05877174DCF : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_22F3C05877174DCF_TypeDefinitionIndex)->GetStaticField(0x65170);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveFinalActGiftRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveFinalActGiftRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_22F3C05877174DCF_TypeDefinitionIndex)->GetStaticField(0x65178);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_22F3C05877174DCF_TypeDefinitionIndex)->GetStaticField(0x65180);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_22F3C05877174DCF_TypeDefinitionIndex)->GetStaticField(0x13710);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_22F3C05877174DCF_TypeDefinitionIndex)->GetStaticField(0x13711);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_22F3C05877174DCF__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveFinalActGiftRow*>* Method_1_8C73E08A4867A517()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveFinalActGiftRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_22F3C05877174DCF_METHOD_1_8C73E08A4867A517_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_22F3C05877174DCF_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveFinalActGiftRow*> Method_1_42B309970E211830()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveFinalActGiftRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_22F3C05877174DCF_METHOD_1_42B309970E211830_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveFinalActGiftRow* Method_1_8A7B6403B328733E(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveFinalActGiftRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_22F3C05877174DCF_METHOD_1_8A7B6403B328733E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_22F3C05877174DCF_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_22F3C05877174DCF_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_22F3C05877174DCF_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_22F3C05877174DCF_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_22F3C05877174DCF_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_22F3C05877174DCF_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_008AA6E817659415(::RPG::GameCore::IdleLiveFinalActGiftRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveFinalActGiftRow*))((::PBYTE)hIl2Cpp + CLASS_1_22F3C05877174DCF_METHOD_1_008AA6E817659415_OFFSET))(a1);
	}
};
