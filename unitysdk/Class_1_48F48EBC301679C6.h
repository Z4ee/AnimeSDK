#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DirectDeliveryNoticeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_48F48EBC301679C6_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1ACB4A10)
#define CLASS_1_48F48EBC301679C6_METHOD_1_7CDB90A5026ED96E_OFFSET UNITYSDK_OFFSET(0x1ACB4230)
#define CLASS_1_48F48EBC301679C6_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1ACB4840)
#define CLASS_1_48F48EBC301679C6_METHOD_1_A6D5B5CCC7F3AAB7_OFFSET UNITYSDK_OFFSET(0x1ACB4670)
#define CLASS_1_48F48EBC301679C6_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1ACB48D0)
#define CLASS_1_48F48EBC301679C6_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1ACB44E0)
#define CLASS_1_48F48EBC301679C6_METHOD_1_DAC5734471A59C5B_OFFSET UNITYSDK_OFFSET(0x1ACB4A60)
#define CLASS_1_48F48EBC301679C6_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1ACB42B0)
#define CLASS_1_48F48EBC301679C6_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1ACB4800)
#define CLASS_1_48F48EBC301679C6_METHOD_1_F22E5652A3B540CE_OFFSET UNITYSDK_OFFSET(0x1ACB4540)
#define CLASS_1_48F48EBC301679C6_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1ACB4970)
#define CLASS_1_48F48EBC301679C6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACB4D80)

inline static constexpr unsigned int Class_1_48F48EBC301679C6_TypeDefinitionIndex = 12650;

class Class_1_48F48EBC301679C6 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_48F48EBC301679C6_TypeDefinitionIndex)->GetStaticField(0x360C0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_48F48EBC301679C6_TypeDefinitionIndex)->GetStaticField(0x360C8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DirectDeliveryNoticeRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DirectDeliveryNoticeRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_48F48EBC301679C6_TypeDefinitionIndex)->GetStaticField(0x360D0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_48F48EBC301679C6_TypeDefinitionIndex)->GetStaticField(0x8F40);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_48F48EBC301679C6_TypeDefinitionIndex)->GetStaticField(0x8F41);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_48F48EBC301679C6__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DirectDeliveryNoticeRow*>* Method_1_7CDB90A5026ED96E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DirectDeliveryNoticeRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_48F48EBC301679C6_METHOD_1_7CDB90A5026ED96E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_48F48EBC301679C6_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DirectDeliveryNoticeRow*> Method_1_F22E5652A3B540CE()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DirectDeliveryNoticeRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_48F48EBC301679C6_METHOD_1_F22E5652A3B540CE_OFFSET))();
	}

	static ::RPG::GameCore::DirectDeliveryNoticeRow* Method_1_A6D5B5CCC7F3AAB7(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::DirectDeliveryNoticeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_48F48EBC301679C6_METHOD_1_A6D5B5CCC7F3AAB7_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_48F48EBC301679C6_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_48F48EBC301679C6_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_48F48EBC301679C6_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_48F48EBC301679C6_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_48F48EBC301679C6_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_48F48EBC301679C6_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_DAC5734471A59C5B(::RPG::GameCore::DirectDeliveryNoticeRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::DirectDeliveryNoticeRow*))((::PBYTE)hIl2Cpp + CLASS_1_48F48EBC301679C6_METHOD_1_DAC5734471A59C5B_OFFSET))(a1);
	}
};
