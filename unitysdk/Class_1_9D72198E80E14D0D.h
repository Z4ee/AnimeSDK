#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityHipplenGameGradeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9D72198E80E14D0D_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1CC459D0)
#define CLASS_1_9D72198E80E14D0D_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CC45800)
#define CLASS_1_9D72198E80E14D0D_METHOD_1_8AC5AD5B6B0E0C16_OFFSET UNITYSDK_OFFSET(0x1CC454C0)
#define CLASS_1_9D72198E80E14D0D_METHOD_1_8DD502F44B2B9899_OFFSET UNITYSDK_OFFSET(0x1CC45A20)
#define CLASS_1_9D72198E80E14D0D_METHOD_1_A99706096966B0FF_OFFSET UNITYSDK_OFFSET(0x1CC45630)
#define CLASS_1_9D72198E80E14D0D_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CC45890)
#define CLASS_1_9D72198E80E14D0D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CC45460)
#define CLASS_1_9D72198E80E14D0D_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CC45230)
#define CLASS_1_9D72198E80E14D0D_METHOD_1_EACE6E4517CE2AA1_OFFSET UNITYSDK_OFFSET(0x1CC451B0)
#define CLASS_1_9D72198E80E14D0D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CC457C0)
#define CLASS_1_9D72198E80E14D0D_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CC45930)
#define CLASS_1_9D72198E80E14D0D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC45D90)

inline static constexpr unsigned int Class_1_9D72198E80E14D0D_TypeDefinitionIndex = 11623;

class Class_1_9D72198E80E14D0D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenGameGradeRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenGameGradeRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9D72198E80E14D0D_TypeDefinitionIndex)->GetStaticField(0x2F4E0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9D72198E80E14D0D_TypeDefinitionIndex)->GetStaticField(0x2F4E8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9D72198E80E14D0D_TypeDefinitionIndex)->GetStaticField(0x2F4F0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9D72198E80E14D0D_TypeDefinitionIndex)->GetStaticField(0xD2A0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9D72198E80E14D0D_TypeDefinitionIndex)->GetStaticField(0xD2A1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9D72198E80E14D0D__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenGameGradeRow*>* Method_1_EACE6E4517CE2AA1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenGameGradeRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9D72198E80E14D0D_METHOD_1_EACE6E4517CE2AA1_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9D72198E80E14D0D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenGameGradeRow*> Method_1_8AC5AD5B6B0E0C16()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenGameGradeRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_9D72198E80E14D0D_METHOD_1_8AC5AD5B6B0E0C16_OFFSET))();
	}

	static ::RPG::GameCore::ActivityHipplenGameGradeRow* Method_1_A99706096966B0FF(::RPG::GameCore::HipplenGameGradeType a1)
	{
		return ((::RPG::GameCore::ActivityHipplenGameGradeRow*(*)(::RPG::GameCore::HipplenGameGradeType))((::PBYTE)hIl2Cpp + CLASS_1_9D72198E80E14D0D_METHOD_1_A99706096966B0FF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9D72198E80E14D0D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9D72198E80E14D0D_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9D72198E80E14D0D_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9D72198E80E14D0D_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9D72198E80E14D0D_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_9D72198E80E14D0D_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_8DD502F44B2B9899(::RPG::GameCore::ActivityHipplenGameGradeRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenGameGradeRow*))((::PBYTE)hIl2Cpp + CLASS_1_9D72198E80E14D0D_METHOD_1_8DD502F44B2B9899_OFFSET))(a1);
	}
};
