#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightTraitSPBattleAreaRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D05C9AE956DBDEC3_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1D0CF360)
#define CLASS_1_D05C9AE956DBDEC3_METHOD_1_395DABE01260BEAC_OFFSET UNITYSDK_OFFSET(0x1D0CEF80)
#define CLASS_1_D05C9AE956DBDEC3_METHOD_1_619A8C4EF25A1114_OFFSET UNITYSDK_OFFSET(0x1D0CEE10)
#define CLASS_1_D05C9AE956DBDEC3_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D0CF190)
#define CLASS_1_D05C9AE956DBDEC3_METHOD_1_A4D3C38408911D81_OFFSET UNITYSDK_OFFSET(0x1D0CF3B0)
#define CLASS_1_D05C9AE956DBDEC3_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D0CF220)
#define CLASS_1_D05C9AE956DBDEC3_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D0CEDB0)
#define CLASS_1_D05C9AE956DBDEC3_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D0CEB80)
#define CLASS_1_D05C9AE956DBDEC3_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D0CF150)
#define CLASS_1_D05C9AE956DBDEC3_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D0CF2C0)
#define CLASS_1_D05C9AE956DBDEC3_METHOD_1_FBF7D9E20F0C47EB_OFFSET UNITYSDK_OFFSET(0x1D0CEB00)
#define CLASS_1_D05C9AE956DBDEC3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0CF750)

inline static constexpr unsigned int Class_1_D05C9AE956DBDEC3_TypeDefinitionIndex = 13576;

class Class_1_D05C9AE956DBDEC3 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D05C9AE956DBDEC3_TypeDefinitionIndex)->GetStaticField(0x37C70);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitSPBattleAreaRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitSPBattleAreaRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D05C9AE956DBDEC3_TypeDefinitionIndex)->GetStaticField(0x37C78);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D05C9AE956DBDEC3_TypeDefinitionIndex)->GetStaticField(0x37C80);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D05C9AE956DBDEC3_TypeDefinitionIndex)->GetStaticField(0xE620);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D05C9AE956DBDEC3_TypeDefinitionIndex)->GetStaticField(0xE621);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D05C9AE956DBDEC3__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitSPBattleAreaRow*>* Method_1_FBF7D9E20F0C47EB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitSPBattleAreaRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D05C9AE956DBDEC3_METHOD_1_FBF7D9E20F0C47EB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D05C9AE956DBDEC3_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitSPBattleAreaRow*> Method_1_619A8C4EF25A1114()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitSPBattleAreaRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_D05C9AE956DBDEC3_METHOD_1_619A8C4EF25A1114_OFFSET))();
	}

	static ::RPG::GameCore::GridFightTraitSPBattleAreaRow* Method_1_395DABE01260BEAC(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GridFightTraitSPBattleAreaRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D05C9AE956DBDEC3_METHOD_1_395DABE01260BEAC_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D05C9AE956DBDEC3_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D05C9AE956DBDEC3_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D05C9AE956DBDEC3_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D05C9AE956DBDEC3_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D05C9AE956DBDEC3_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_D05C9AE956DBDEC3_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_A4D3C38408911D81(::RPG::GameCore::GridFightTraitSPBattleAreaRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightTraitSPBattleAreaRow*))((::PBYTE)hIl2Cpp + CLASS_1_D05C9AE956DBDEC3_METHOD_1_A4D3C38408911D81_OFFSET))(a1);
	}
};
