#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonsterRandomPoolRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_056B74B356662A30_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1CFA21D0)
#define CLASS_1_056B74B356662A30_METHOD_1_1E1EDA84D52F0AB9_OFFSET UNITYSDK_OFFSET(0x1CFA1E30)
#define CLASS_1_056B74B356662A30_METHOD_1_7BB38E1E40FC6291_OFFSET UNITYSDK_OFFSET(0x1CFA1CC0)
#define CLASS_1_056B74B356662A30_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CFA2000)
#define CLASS_1_056B74B356662A30_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CFA2090)
#define CLASS_1_056B74B356662A30_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CFA1C60)
#define CLASS_1_056B74B356662A30_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CFA1A30)
#define CLASS_1_056B74B356662A30_METHOD_1_E9BCE3647FE70EA8_OFFSET UNITYSDK_OFFSET(0x1CFA2220)
#define CLASS_1_056B74B356662A30_METHOD_1_EAD63A62D3D42204_OFFSET UNITYSDK_OFFSET(0x1CFA19B0)
#define CLASS_1_056B74B356662A30_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CFA1FC0)
#define CLASS_1_056B74B356662A30_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CFA2130)
#define CLASS_1_056B74B356662A30__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFA2590)

inline static constexpr unsigned int Class_1_056B74B356662A30_TypeDefinitionIndex = 14089;

class Class_1_056B74B356662A30 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterRandomPoolRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterRandomPoolRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_056B74B356662A30_TypeDefinitionIndex)->GetStaticField(0xB090);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_056B74B356662A30_TypeDefinitionIndex)->GetStaticField(0xB098);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_056B74B356662A30_TypeDefinitionIndex)->GetStaticField(0xB0A0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_056B74B356662A30_TypeDefinitionIndex)->GetStaticField(0x2660);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_056B74B356662A30_TypeDefinitionIndex)->GetStaticField(0x2661);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_056B74B356662A30__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterRandomPoolRow*>* Method_1_EAD63A62D3D42204()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterRandomPoolRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_056B74B356662A30_METHOD_1_EAD63A62D3D42204_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_056B74B356662A30_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterRandomPoolRow*> Method_1_7BB38E1E40FC6291()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterRandomPoolRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_056B74B356662A30_METHOD_1_7BB38E1E40FC6291_OFFSET))();
	}

	static ::RPG::GameCore::MonsterRandomPoolRow* Method_1_1E1EDA84D52F0AB9(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MonsterRandomPoolRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_056B74B356662A30_METHOD_1_1E1EDA84D52F0AB9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_056B74B356662A30_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_056B74B356662A30_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_056B74B356662A30_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_056B74B356662A30_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_056B74B356662A30_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_056B74B356662A30_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_E9BCE3647FE70EA8(::RPG::GameCore::MonsterRandomPoolRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MonsterRandomPoolRow*))((::PBYTE)hIl2Cpp + CLASS_1_056B74B356662A30_METHOD_1_E9BCE3647FE70EA8_OFFSET))(a1);
	}
};
