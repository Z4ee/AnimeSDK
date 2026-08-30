#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TarotExperimentFilesRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F3A453423CC3571B_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1C976230)
#define CLASS_1_F3A453423CC3571B_METHOD_1_12D87267B851D47A_OFFSET UNITYSDK_OFFSET(0x1C976840)
#define CLASS_1_F3A453423CC3571B_METHOD_1_3B0AF2325EB5FD9C_OFFSET UNITYSDK_OFFSET(0x1C9766D0)
#define CLASS_1_F3A453423CC3571B_METHOD_1_3F010B838A339229_OFFSET UNITYSDK_OFFSET(0x1C976280)
#define CLASS_1_F3A453423CC3571B_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C976060)
#define CLASS_1_F3A453423CC3571B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C9760F0)
#define CLASS_1_F3A453423CC3571B_METHOD_1_C6F0598414E74C13_OFFSET UNITYSDK_OFFSET(0x1C9765F0)
#define CLASS_1_F3A453423CC3571B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C976670)
#define CLASS_1_F3A453423CC3571B_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C975E30)
#define CLASS_1_F3A453423CC3571B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C975DF0)
#define CLASS_1_F3A453423CC3571B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C976190)
#define CLASS_1_F3A453423CC3571B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9769D0)

inline static constexpr unsigned int Class_1_F3A453423CC3571B_TypeDefinitionIndex = 15093;

class Class_1_F3A453423CC3571B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotExperimentFilesRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotExperimentFilesRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3A453423CC3571B_TypeDefinitionIndex)->GetStaticField(0x2ACE0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3A453423CC3571B_TypeDefinitionIndex)->GetStaticField(0x2ACE8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3A453423CC3571B_TypeDefinitionIndex)->GetStaticField(0x2ACF0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3A453423CC3571B_TypeDefinitionIndex)->GetStaticField(0xC640);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3A453423CC3571B_TypeDefinitionIndex)->GetStaticField(0xC641);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3A453423CC3571B__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3A453423CC3571B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3A453423CC3571B_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3A453423CC3571B_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3A453423CC3571B_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F3A453423CC3571B_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F3A453423CC3571B_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_3F010B838A339229(::RPG::GameCore::TarotExperimentFilesRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TarotExperimentFilesRow*))((::PBYTE)hIl2Cpp + CLASS_1_F3A453423CC3571B_METHOD_1_3F010B838A339229_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotExperimentFilesRow*>* Method_1_C6F0598414E74C13()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotExperimentFilesRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3A453423CC3571B_METHOD_1_C6F0598414E74C13_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3A453423CC3571B_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotExperimentFilesRow*> Method_1_3B0AF2325EB5FD9C()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotExperimentFilesRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3A453423CC3571B_METHOD_1_3B0AF2325EB5FD9C_OFFSET))();
	}

	static ::RPG::GameCore::TarotExperimentFilesRow* Method_1_12D87267B851D47A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::TarotExperimentFilesRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3A453423CC3571B_METHOD_1_12D87267B851D47A_OFFSET))(a1);
	}
};
