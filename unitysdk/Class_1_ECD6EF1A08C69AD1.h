#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DailyMissionCountRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_ECD6EF1A08C69AD1_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x19E71800)
#define CLASS_1_ECD6EF1A08C69AD1_METHOD_1_2CA175E570698028_OFFSET UNITYSDK_OFFSET(0x19E71460)
#define CLASS_1_ECD6EF1A08C69AD1_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19E71630)
#define CLASS_1_ECD6EF1A08C69AD1_METHOD_1_A3B751FDD6C1B555_OFFSET UNITYSDK_OFFSET(0x19E70FE0)
#define CLASS_1_ECD6EF1A08C69AD1_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19E716C0)
#define CLASS_1_ECD6EF1A08C69AD1_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19E71290)
#define CLASS_1_ECD6EF1A08C69AD1_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19E71060)
#define CLASS_1_ECD6EF1A08C69AD1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19E715F0)
#define CLASS_1_ECD6EF1A08C69AD1_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19E71760)
#define CLASS_1_ECD6EF1A08C69AD1_METHOD_1_F7B0D00F29B25E03_OFFSET UNITYSDK_OFFSET(0x19E71850)
#define CLASS_1_ECD6EF1A08C69AD1_METHOD_1_FD147FD6A6AA9C0A_OFFSET UNITYSDK_OFFSET(0x19E712F0)
#define CLASS_1_ECD6EF1A08C69AD1__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E71BC0)

inline static constexpr unsigned int Class_1_ECD6EF1A08C69AD1_TypeDefinitionIndex = 12488;

class Class_1_ECD6EF1A08C69AD1 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ECD6EF1A08C69AD1_TypeDefinitionIndex)->GetStaticField(0x4CC40);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyMissionCountRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyMissionCountRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ECD6EF1A08C69AD1_TypeDefinitionIndex)->GetStaticField(0x4CC48);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ECD6EF1A08C69AD1_TypeDefinitionIndex)->GetStaticField(0x4CC50);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_ECD6EF1A08C69AD1_TypeDefinitionIndex)->GetStaticField(0xEB00);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_ECD6EF1A08C69AD1_TypeDefinitionIndex)->GetStaticField(0xEB01);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ECD6EF1A08C69AD1__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyMissionCountRow*>* Method_1_A3B751FDD6C1B555()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyMissionCountRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_ECD6EF1A08C69AD1_METHOD_1_A3B751FDD6C1B555_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_ECD6EF1A08C69AD1_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyMissionCountRow*> Method_1_FD147FD6A6AA9C0A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyMissionCountRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_ECD6EF1A08C69AD1_METHOD_1_FD147FD6A6AA9C0A_OFFSET))();
	}

	static ::RPG::GameCore::DailyMissionCountRow* Method_1_2CA175E570698028(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::DailyMissionCountRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ECD6EF1A08C69AD1_METHOD_1_2CA175E570698028_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_ECD6EF1A08C69AD1_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ECD6EF1A08C69AD1_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ECD6EF1A08C69AD1_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ECD6EF1A08C69AD1_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_ECD6EF1A08C69AD1_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_ECD6EF1A08C69AD1_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_F7B0D00F29B25E03(::RPG::GameCore::DailyMissionCountRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::DailyMissionCountRow*))((::PBYTE)hIl2Cpp + CLASS_1_ECD6EF1A08C69AD1_METHOD_1_F7B0D00F29B25E03_OFFSET))(a1);
	}
};
