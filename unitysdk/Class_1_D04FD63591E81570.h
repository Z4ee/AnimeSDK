#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarblePVEMatchTalkConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D04FD63591E81570_METHOD_1_05E70A1A92903355_OFFSET UNITYSDK_OFFSET(0x1B909CE0)
#define CLASS_1_D04FD63591E81570_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1B90A0C0)
#define CLASS_1_D04FD63591E81570_METHOD_1_127E700D6D763B59_OFFSET UNITYSDK_OFFSET(0x1B909B70)
#define CLASS_1_D04FD63591E81570_METHOD_1_7F860382473E6334_OFFSET UNITYSDK_OFFSET(0x1B909860)
#define CLASS_1_D04FD63591E81570_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B909EF0)
#define CLASS_1_D04FD63591E81570_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B909F80)
#define CLASS_1_D04FD63591E81570_METHOD_1_CD72003CC23CDC38_OFFSET UNITYSDK_OFFSET(0x1B90A110)
#define CLASS_1_D04FD63591E81570_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B909B10)
#define CLASS_1_D04FD63591E81570_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B9098E0)
#define CLASS_1_D04FD63591E81570_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B909EB0)
#define CLASS_1_D04FD63591E81570_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B90A020)
#define CLASS_1_D04FD63591E81570__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B90A4B0)

inline static constexpr unsigned int Class_1_D04FD63591E81570_TypeDefinitionIndex = 11448;

class Class_1_D04FD63591E81570 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVEMatchTalkConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVEMatchTalkConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D04FD63591E81570_TypeDefinitionIndex)->GetStaticField(0x429F0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D04FD63591E81570_TypeDefinitionIndex)->GetStaticField(0x429F8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D04FD63591E81570_TypeDefinitionIndex)->GetStaticField(0x42A00);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D04FD63591E81570_TypeDefinitionIndex)->GetStaticField(0xB5F0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D04FD63591E81570_TypeDefinitionIndex)->GetStaticField(0xB5F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D04FD63591E81570__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVEMatchTalkConfigRow*>* Method_1_7F860382473E6334()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVEMatchTalkConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D04FD63591E81570_METHOD_1_7F860382473E6334_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D04FD63591E81570_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVEMatchTalkConfigRow*> Method_1_127E700D6D763B59()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarblePVEMatchTalkConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_D04FD63591E81570_METHOD_1_127E700D6D763B59_OFFSET))();
	}

	static ::RPG::GameCore::MarblePVEMatchTalkConfigRow* Method_1_05E70A1A92903355(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MarblePVEMatchTalkConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D04FD63591E81570_METHOD_1_05E70A1A92903355_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D04FD63591E81570_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D04FD63591E81570_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D04FD63591E81570_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D04FD63591E81570_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D04FD63591E81570_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_D04FD63591E81570_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_CD72003CC23CDC38(::RPG::GameCore::MarblePVEMatchTalkConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MarblePVEMatchTalkConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_D04FD63591E81570_METHOD_1_CD72003CC23CDC38_OFFSET))(a1);
	}
};
