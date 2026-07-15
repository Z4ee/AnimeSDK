#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveGiftSenderRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6193D5F2A9F92DE4_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1B30A730)
#define CLASS_1_6193D5F2A9F92DE4_METHOD_1_31FF68D60177B75D_OFFSET UNITYSDK_OFFSET(0x1B30A220)
#define CLASS_1_6193D5F2A9F92DE4_METHOD_1_75FEEFA857F2AA90_OFFSET UNITYSDK_OFFSET(0x1B309F10)
#define CLASS_1_6193D5F2A9F92DE4_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B30A560)
#define CLASS_1_6193D5F2A9F92DE4_METHOD_1_9AB2E1EBF38B46B4_OFFSET UNITYSDK_OFFSET(0x1B30A780)
#define CLASS_1_6193D5F2A9F92DE4_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B30A5F0)
#define CLASS_1_6193D5F2A9F92DE4_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B30A1C0)
#define CLASS_1_6193D5F2A9F92DE4_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B309F90)
#define CLASS_1_6193D5F2A9F92DE4_METHOD_1_E7E4D5089CD2D30D_OFFSET UNITYSDK_OFFSET(0x1B30A390)
#define CLASS_1_6193D5F2A9F92DE4_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B30A520)
#define CLASS_1_6193D5F2A9F92DE4_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B30A690)
#define CLASS_1_6193D5F2A9F92DE4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B30AAF0)

inline static constexpr unsigned int Class_1_6193D5F2A9F92DE4_TypeDefinitionIndex = 11395;

class Class_1_6193D5F2A9F92DE4 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6193D5F2A9F92DE4_TypeDefinitionIndex)->GetStaticField(0x65E20);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGiftSenderRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGiftSenderRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6193D5F2A9F92DE4_TypeDefinitionIndex)->GetStaticField(0x65E28);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6193D5F2A9F92DE4_TypeDefinitionIndex)->GetStaticField(0x65E30);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6193D5F2A9F92DE4_TypeDefinitionIndex)->GetStaticField(0x13920);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6193D5F2A9F92DE4_TypeDefinitionIndex)->GetStaticField(0x13921);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6193D5F2A9F92DE4__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGiftSenderRow*>* Method_1_75FEEFA857F2AA90()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGiftSenderRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6193D5F2A9F92DE4_METHOD_1_75FEEFA857F2AA90_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6193D5F2A9F92DE4_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGiftSenderRow*> Method_1_31FF68D60177B75D()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGiftSenderRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6193D5F2A9F92DE4_METHOD_1_31FF68D60177B75D_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveGiftSenderRow* Method_1_E7E4D5089CD2D30D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveGiftSenderRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6193D5F2A9F92DE4_METHOD_1_E7E4D5089CD2D30D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6193D5F2A9F92DE4_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6193D5F2A9F92DE4_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6193D5F2A9F92DE4_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6193D5F2A9F92DE4_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_6193D5F2A9F92DE4_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_6193D5F2A9F92DE4_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_9AB2E1EBF38B46B4(::RPG::GameCore::IdleLiveGiftSenderRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveGiftSenderRow*))((::PBYTE)hIl2Cpp + CLASS_1_6193D5F2A9F92DE4_METHOD_1_9AB2E1EBF38B46B4_OFFSET))(a1);
	}
};
