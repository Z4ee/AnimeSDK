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

#define CLASS_1_ECD6EF1A08C69AD1_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1D0DE7F0)
#define CLASS_1_ECD6EF1A08C69AD1_METHOD_1_2CA175E570698028_OFFSET UNITYSDK_OFFSET(0x1D0DE450)
#define CLASS_1_ECD6EF1A08C69AD1_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D0DE620)
#define CLASS_1_ECD6EF1A08C69AD1_METHOD_1_A3B751FDD6C1B555_OFFSET UNITYSDK_OFFSET(0x1D0DDFD0)
#define CLASS_1_ECD6EF1A08C69AD1_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D0DE6B0)
#define CLASS_1_ECD6EF1A08C69AD1_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D0DE280)
#define CLASS_1_ECD6EF1A08C69AD1_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D0DE050)
#define CLASS_1_ECD6EF1A08C69AD1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D0DE5E0)
#define CLASS_1_ECD6EF1A08C69AD1_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D0DE750)
#define CLASS_1_ECD6EF1A08C69AD1_METHOD_1_F7B0D00F29B25E03_OFFSET UNITYSDK_OFFSET(0x1D0DE840)
#define CLASS_1_ECD6EF1A08C69AD1_METHOD_1_FD147FD6A6AA9C0A_OFFSET UNITYSDK_OFFSET(0x1D0DE2E0)
#define CLASS_1_ECD6EF1A08C69AD1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0DEBB0)

inline static constexpr unsigned int Class_1_ECD6EF1A08C69AD1_TypeDefinitionIndex = 13016;

class Class_1_ECD6EF1A08C69AD1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyMissionCountRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DailyMissionCountRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ECD6EF1A08C69AD1_TypeDefinitionIndex)->GetStaticField(0x17870);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ECD6EF1A08C69AD1_TypeDefinitionIndex)->GetStaticField(0x17878);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ECD6EF1A08C69AD1_TypeDefinitionIndex)->GetStaticField(0x17880);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_ECD6EF1A08C69AD1_TypeDefinitionIndex)->GetStaticField(0x8B70);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_ECD6EF1A08C69AD1_TypeDefinitionIndex)->GetStaticField(0x8B71);
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
