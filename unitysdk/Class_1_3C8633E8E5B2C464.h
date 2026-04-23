#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ILCombatAdvantageGroupConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3C8633E8E5B2C464_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18304AC0)
#define CLASS_1_3C8633E8E5B2C464_METHOD_1_2354B2A6C34F7200_OFFSET UNITYSDK_OFFSET(0x183041B0)
#define CLASS_1_3C8633E8E5B2C464_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x183048E0)
#define CLASS_1_3C8633E8E5B2C464_METHOD_1_3FC219F9B98DD2A4_OFFSET UNITYSDK_OFFSET(0x18304B10)
#define CLASS_1_3C8633E8E5B2C464_METHOD_1_43195D5898A20AE8_OFFSET UNITYSDK_OFFSET(0x18304690)
#define CLASS_1_3C8633E8E5B2C464_METHOD_1_4A49C238E4E4CE31_OFFSET UNITYSDK_OFFSET(0x183044E0)
#define CLASS_1_3C8633E8E5B2C464_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18304230)
#define CLASS_1_3C8633E8E5B2C464_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18304980)
#define CLASS_1_3C8633E8E5B2C464_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18304480)
#define CLASS_1_3C8633E8E5B2C464_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x183048A0)
#define CLASS_1_3C8633E8E5B2C464_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18304A20)
#define CLASS_1_3C8633E8E5B2C464__CCTOR_OFFSET UNITYSDK_OFFSET(0x18304EC0)

inline static constexpr unsigned int Class_1_3C8633E8E5B2C464_TypeDefinitionIndex = 13077;

class Class_1_3C8633E8E5B2C464 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C8633E8E5B2C464_TypeDefinitionIndex)->GetStaticField(0x259F0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C8633E8E5B2C464_TypeDefinitionIndex)->GetStaticField(0x259F8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILCombatAdvantageGroupConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILCombatAdvantageGroupConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C8633E8E5B2C464_TypeDefinitionIndex)->GetStaticField(0x25A00);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C8633E8E5B2C464_TypeDefinitionIndex)->GetStaticField(0x9DC0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C8633E8E5B2C464_TypeDefinitionIndex)->GetStaticField(0x9DC1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C8633E8E5B2C464__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILCombatAdvantageGroupConfigRow*>* Method_1_2354B2A6C34F7200()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILCombatAdvantageGroupConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C8633E8E5B2C464_METHOD_1_2354B2A6C34F7200_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C8633E8E5B2C464_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILCombatAdvantageGroupConfigRow*> Method_1_4A49C238E4E4CE31()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILCombatAdvantageGroupConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C8633E8E5B2C464_METHOD_1_4A49C238E4E4CE31_OFFSET))();
	}

	static ::RPG::GameCore::ILCombatAdvantageGroupConfigRow* Method_1_43195D5898A20AE8(::System::UInt32 a1, ::System::Int64 a2)
	{
		return ((::RPG::GameCore::ILCombatAdvantageGroupConfigRow*(*)(::System::UInt32, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_3C8633E8E5B2C464_METHOD_1_43195D5898A20AE8_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C8633E8E5B2C464_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C8633E8E5B2C464_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C8633E8E5B2C464_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3C8633E8E5B2C464_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_3C8633E8E5B2C464_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_3C8633E8E5B2C464_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_3FC219F9B98DD2A4(::RPG::GameCore::ILCombatAdvantageGroupConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ILCombatAdvantageGroupConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_3C8633E8E5B2C464_METHOD_1_3FC219F9B98DD2A4_OFFSET))(a1);
	}
};
