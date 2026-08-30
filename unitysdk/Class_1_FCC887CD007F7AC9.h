#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesUseItemRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FCC887CD007F7AC9_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1CC48160)
#define CLASS_1_FCC887CD007F7AC9_METHOD_1_39F805C6F14B51D5_OFFSET UNITYSDK_OFFSET(0x1CC47980)
#define CLASS_1_FCC887CD007F7AC9_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CC47F90)
#define CLASS_1_FCC887CD007F7AC9_METHOD_1_8C8EC227847CAA9B_OFFSET UNITYSDK_OFFSET(0x1CC481B0)
#define CLASS_1_FCC887CD007F7AC9_METHOD_1_9F2E5E6257958640_OFFSET UNITYSDK_OFFSET(0x1CC47DC0)
#define CLASS_1_FCC887CD007F7AC9_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CC48020)
#define CLASS_1_FCC887CD007F7AC9_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CC47C30)
#define CLASS_1_FCC887CD007F7AC9_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CC47A00)
#define CLASS_1_FCC887CD007F7AC9_METHOD_1_E40D587A439DED17_OFFSET UNITYSDK_OFFSET(0x1CC47C90)
#define CLASS_1_FCC887CD007F7AC9_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CC47F50)
#define CLASS_1_FCC887CD007F7AC9_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CC480C0)
#define CLASS_1_FCC887CD007F7AC9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC48520)

inline static constexpr unsigned int Class_1_FCC887CD007F7AC9_TypeDefinitionIndex = 12173;

class Class_1_FCC887CD007F7AC9 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesUseItemRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesUseItemRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FCC887CD007F7AC9_TypeDefinitionIndex)->GetStaticField(0x2F6B0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FCC887CD007F7AC9_TypeDefinitionIndex)->GetStaticField(0x2F6B8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FCC887CD007F7AC9_TypeDefinitionIndex)->GetStaticField(0x2F6C0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FCC887CD007F7AC9_TypeDefinitionIndex)->GetStaticField(0xD310);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FCC887CD007F7AC9_TypeDefinitionIndex)->GetStaticField(0xD311);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FCC887CD007F7AC9__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesUseItemRow*>* Method_1_39F805C6F14B51D5()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesUseItemRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FCC887CD007F7AC9_METHOD_1_39F805C6F14B51D5_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FCC887CD007F7AC9_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesUseItemRow*> Method_1_E40D587A439DED17()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesUseItemRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FCC887CD007F7AC9_METHOD_1_E40D587A439DED17_OFFSET))();
	}

	static ::RPG::GameCore::PlanetFesUseItemRow* Method_1_9F2E5E6257958640(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PlanetFesUseItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FCC887CD007F7AC9_METHOD_1_9F2E5E6257958640_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FCC887CD007F7AC9_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FCC887CD007F7AC9_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FCC887CD007F7AC9_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FCC887CD007F7AC9_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_FCC887CD007F7AC9_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_FCC887CD007F7AC9_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_8C8EC227847CAA9B(::RPG::GameCore::PlanetFesUseItemRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlanetFesUseItemRow*))((::PBYTE)hIl2Cpp + CLASS_1_FCC887CD007F7AC9_METHOD_1_8C8EC227847CAA9B_OFFSET))(a1);
	}
};
