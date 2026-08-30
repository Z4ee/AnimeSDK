#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PixAirTagDisplayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_EAE4B11F3A74C1D2_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1D2FB3C0)
#define CLASS_1_EAE4B11F3A74C1D2_METHOD_1_1C4DD17BCF1A0892_OFFSET UNITYSDK_OFFSET(0x1D2FABA0)
#define CLASS_1_EAE4B11F3A74C1D2_METHOD_1_26757C45A61E50C2_OFFSET UNITYSDK_OFFSET(0x1D2FB020)
#define CLASS_1_EAE4B11F3A74C1D2_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D2FB1F0)
#define CLASS_1_EAE4B11F3A74C1D2_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D2FB280)
#define CLASS_1_EAE4B11F3A74C1D2_METHOD_1_B379EB5DB4F280DB_OFFSET UNITYSDK_OFFSET(0x1D2FAEB0)
#define CLASS_1_EAE4B11F3A74C1D2_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D2FAE50)
#define CLASS_1_EAE4B11F3A74C1D2_METHOD_1_DCE81E2468175B76_OFFSET UNITYSDK_OFFSET(0x1D2FB410)
#define CLASS_1_EAE4B11F3A74C1D2_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D2FAC20)
#define CLASS_1_EAE4B11F3A74C1D2_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D2FB1B0)
#define CLASS_1_EAE4B11F3A74C1D2_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D2FB320)
#define CLASS_1_EAE4B11F3A74C1D2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2FB780)

inline static constexpr unsigned int Class_1_EAE4B11F3A74C1D2_TypeDefinitionIndex = 12087;

class Class_1_EAE4B11F3A74C1D2 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirTagDisplayRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirTagDisplayRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EAE4B11F3A74C1D2_TypeDefinitionIndex)->GetStaticField(0x3BF50);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EAE4B11F3A74C1D2_TypeDefinitionIndex)->GetStaticField(0x3BF58);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EAE4B11F3A74C1D2_TypeDefinitionIndex)->GetStaticField(0x3BF60);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EAE4B11F3A74C1D2_TypeDefinitionIndex)->GetStaticField(0xF600);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EAE4B11F3A74C1D2_TypeDefinitionIndex)->GetStaticField(0xF601);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EAE4B11F3A74C1D2__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirTagDisplayRow*>* Method_1_1C4DD17BCF1A0892()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirTagDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EAE4B11F3A74C1D2_METHOD_1_1C4DD17BCF1A0892_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_EAE4B11F3A74C1D2_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirTagDisplayRow*> Method_1_B379EB5DB4F280DB()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirTagDisplayRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_EAE4B11F3A74C1D2_METHOD_1_B379EB5DB4F280DB_OFFSET))();
	}

	static ::RPG::GameCore::PixAirTagDisplayRow* Method_1_26757C45A61E50C2(::RPG::GameCore::PixAirEquipTag a1)
	{
		return ((::RPG::GameCore::PixAirTagDisplayRow*(*)(::RPG::GameCore::PixAirEquipTag))((::PBYTE)hIl2Cpp + CLASS_1_EAE4B11F3A74C1D2_METHOD_1_26757C45A61E50C2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_EAE4B11F3A74C1D2_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EAE4B11F3A74C1D2_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EAE4B11F3A74C1D2_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EAE4B11F3A74C1D2_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_EAE4B11F3A74C1D2_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_EAE4B11F3A74C1D2_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_DCE81E2468175B76(::RPG::GameCore::PixAirTagDisplayRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PixAirTagDisplayRow*))((::PBYTE)hIl2Cpp + CLASS_1_EAE4B11F3A74C1D2_METHOD_1_DCE81E2468175B76_OFFSET))(a1);
	}
};
