#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/TargetGenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlayerOutfitDetailRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C855AB7E3D128770_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1B4A0640)
#define CLASS_1_C855AB7E3D128770_METHOD_1_312D619223A58411_OFFSET UNITYSDK_OFFSET(0x1B4A0690)
#define CLASS_1_C855AB7E3D128770_METHOD_1_677B8562FE0BA76D_OFFSET UNITYSDK_OFFSET(0x1B4A0120)
#define CLASS_1_C855AB7E3D128770_METHOD_1_80B01ED6655F5674_OFFSET UNITYSDK_OFFSET(0x1B49FE10)
#define CLASS_1_C855AB7E3D128770_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B4A0470)
#define CLASS_1_C855AB7E3D128770_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B4A0500)
#define CLASS_1_C855AB7E3D128770_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B4A00C0)
#define CLASS_1_C855AB7E3D128770_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B49FE90)
#define CLASS_1_C855AB7E3D128770_METHOD_1_DFC64912626ADC77_OFFSET UNITYSDK_OFFSET(0x1B4A0290)
#define CLASS_1_C855AB7E3D128770_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B4A0430)
#define CLASS_1_C855AB7E3D128770_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B4A05A0)
#define CLASS_1_C855AB7E3D128770__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4A09F0)

inline static constexpr unsigned int Class_1_C855AB7E3D128770_TypeDefinitionIndex = 14347;

class Class_1_C855AB7E3D128770 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitDetailRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitDetailRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C855AB7E3D128770_TypeDefinitionIndex)->GetStaticField(0x26800);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C855AB7E3D128770_TypeDefinitionIndex)->GetStaticField(0x26808);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C855AB7E3D128770_TypeDefinitionIndex)->GetStaticField(0x26810);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C855AB7E3D128770_TypeDefinitionIndex)->GetStaticField(0xB7B0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C855AB7E3D128770_TypeDefinitionIndex)->GetStaticField(0xB7B1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C855AB7E3D128770__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitDetailRow*>* Method_1_80B01ED6655F5674()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitDetailRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C855AB7E3D128770_METHOD_1_80B01ED6655F5674_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C855AB7E3D128770_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitDetailRow*> Method_1_677B8562FE0BA76D()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitDetailRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C855AB7E3D128770_METHOD_1_677B8562FE0BA76D_OFFSET))();
	}

	static ::RPG::GameCore::PlayerOutfitDetailRow* Method_1_DFC64912626ADC77(::System::UInt32 a1, ::RPG::GameCore::TargetGenderType a2)
	{
		return ((::RPG::GameCore::PlayerOutfitDetailRow*(*)(::System::UInt32, ::RPG::GameCore::TargetGenderType))((::PBYTE)hIl2Cpp + CLASS_1_C855AB7E3D128770_METHOD_1_DFC64912626ADC77_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C855AB7E3D128770_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C855AB7E3D128770_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C855AB7E3D128770_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C855AB7E3D128770_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C855AB7E3D128770_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_C855AB7E3D128770_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_312D619223A58411(::RPG::GameCore::PlayerOutfitDetailRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlayerOutfitDetailRow*))((::PBYTE)hIl2Cpp + CLASS_1_C855AB7E3D128770_METHOD_1_312D619223A58411_OFFSET))(a1);
	}
};
