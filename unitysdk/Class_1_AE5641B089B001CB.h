#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/RogueShopType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueShopRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_AE5641B089B001CB_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1DC6A5D0)
#define CLASS_1_AE5641B089B001CB_METHOD_1_415561AB3F1556C4_OFFSET UNITYSDK_OFFSET(0x1DC6A070)
#define CLASS_1_AE5641B089B001CB_METHOD_1_6A44B05A6DA388A9_OFFSET UNITYSDK_OFFSET(0x1DC6A620)
#define CLASS_1_AE5641B089B001CB_METHOD_1_8831B0EA7EEA69F3_OFFSET UNITYSDK_OFFSET(0x1DC69D60)
#define CLASS_1_AE5641B089B001CB_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1DC6A400)
#define CLASS_1_AE5641B089B001CB_METHOD_1_A58070C4DE6F53F6_OFFSET UNITYSDK_OFFSET(0x1DC6A1E0)
#define CLASS_1_AE5641B089B001CB_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1DC6A490)
#define CLASS_1_AE5641B089B001CB_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1DC6A010)
#define CLASS_1_AE5641B089B001CB_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1DC69DE0)
#define CLASS_1_AE5641B089B001CB_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1DC6A3C0)
#define CLASS_1_AE5641B089B001CB_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1DC6A530)
#define CLASS_1_AE5641B089B001CB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC6A9C0)

inline static constexpr unsigned int Class_1_AE5641B089B001CB_TypeDefinitionIndex = 14527;

class Class_1_AE5641B089B001CB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueShopRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueShopRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE5641B089B001CB_TypeDefinitionIndex)->GetStaticField(0x583E0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE5641B089B001CB_TypeDefinitionIndex)->GetStaticField(0x583E8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE5641B089B001CB_TypeDefinitionIndex)->GetStaticField(0x583F0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE5641B089B001CB_TypeDefinitionIndex)->GetStaticField(0x11F50);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE5641B089B001CB_TypeDefinitionIndex)->GetStaticField(0x11F51);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE5641B089B001CB__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueShopRow*>* Method_1_8831B0EA7EEA69F3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueShopRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE5641B089B001CB_METHOD_1_8831B0EA7EEA69F3_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE5641B089B001CB_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueShopRow*> Method_1_415561AB3F1556C4()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueShopRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE5641B089B001CB_METHOD_1_415561AB3F1556C4_OFFSET))();
	}

	static ::RPG::GameCore::RogueShopRow* Method_1_A58070C4DE6F53F6(::System::UInt32 a1, ::RPG::GameCore::RogueShopType a2)
	{
		return ((::RPG::GameCore::RogueShopRow*(*)(::System::UInt32, ::RPG::GameCore::RogueShopType))((::PBYTE)hIl2Cpp + CLASS_1_AE5641B089B001CB_METHOD_1_A58070C4DE6F53F6_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE5641B089B001CB_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE5641B089B001CB_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE5641B089B001CB_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AE5641B089B001CB_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_AE5641B089B001CB_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_AE5641B089B001CB_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_6A44B05A6DA388A9(::RPG::GameCore::RogueShopRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueShopRow*))((::PBYTE)hIl2Cpp + CLASS_1_AE5641B089B001CB_METHOD_1_6A44B05A6DA388A9_OFFSET))(a1);
	}
};
