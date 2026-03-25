#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B;
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightGameRefTrait; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9831C10)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9831C50)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_ACTIVATEDTRAITS_B__9_0_OFFSET UNITYSDK_OFFSET(0x9831C60)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_BASICEQUIPS_B__124_0_OFFSET UNITYSDK_OFFSET(0x9831C80)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_BASICEQUIPS_B__124_1_OFFSET UNITYSDK_OFFSET(0x9831C90)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_COREEQUIPS_B__126_0_OFFSET UNITYSDK_OFFSET(0x9831D40)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_COREEQUIPS_B__126_1_OFFSET UNITYSDK_OFFSET(0x9831D50)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_EMBLEMEQUIPS_B__128_0_OFFSET UNITYSDK_OFFSET(0x9831E00)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_HASEMBLEM_B__155_0_OFFSET UNITYSDK_OFFSET(0x9831E20)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDROLES_B__179_1_OFFSET UNITYSDK_OFFSET(0x9832000)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDSEASONROLES_B__180_1_OFFSET UNITYSDK_OFFSET(0x9832060)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDSEASONROLES_B__181_0_OFFSET UNITYSDK_OFFSET(0x98322B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_0_OFFSET UNITYSDK_OFFSET(0x98325F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_10_OFFSET UNITYSDK_OFFSET(0x9832C40)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_11_OFFSET UNITYSDK_OFFSET(0x9832D20)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_12_OFFSET UNITYSDK_OFFSET(0x9832E00)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_13_OFFSET UNITYSDK_OFFSET(0x9832EE0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_14_OFFSET UNITYSDK_OFFSET(0x9832F50)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_15_OFFSET UNITYSDK_OFFSET(0x9832FC0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_16_OFFSET UNITYSDK_OFFSET(0x98330A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_17_OFFSET UNITYSDK_OFFSET(0x9833190)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_18_OFFSET UNITYSDK_OFFSET(0x9833270)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_19_OFFSET UNITYSDK_OFFSET(0x9833350)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_1_OFFSET UNITYSDK_OFFSET(0x9832660)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_2_OFFSET UNITYSDK_OFFSET(0x98326D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_3_OFFSET UNITYSDK_OFFSET(0x9832740)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_4_OFFSET UNITYSDK_OFFSET(0x98327E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_5_OFFSET UNITYSDK_OFFSET(0x9832850)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_6_OFFSET UNITYSDK_OFFSET(0x9832930)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_7_OFFSET UNITYSDK_OFFSET(0x9832A10)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_8_OFFSET UNITYSDK_OFFSET(0x9832A80)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_9_OFFSET UNITYSDK_OFFSET(0x9832B60)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CHECKISEXPERT_B__164_0_OFFSET UNITYSDK_OFFSET(0x9831E40)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CHECKISEXPERT_B__164_1_OFFSET UNITYSDK_OFFSET(0x9831EE0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_0_OFFSET UNITYSDK_OFFSET(0x98322F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_1_OFFSET UNITYSDK_OFFSET(0x9832300)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_2_OFFSET UNITYSDK_OFFSET(0x98323B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_3_OFFSET UNITYSDK_OFFSET(0x98323C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_4_OFFSET UNITYSDK_OFFSET(0x9832470)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_5_OFFSET UNITYSDK_OFFSET(0x9832480)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_6_OFFSET UNITYSDK_OFFSET(0x9832530)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_7_OFFSET UNITYSDK_OFFSET(0x9832540)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___ISTRAITEXPIRED_B__168_0_OFFSET UNITYSDK_OFFSET(0x9831F80)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___UPDATEEXPIREDTRAITLAYER_B__169_0_OFFSET UNITYSDK_OFFSET(0x9831FA0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___UPDATETRAITLAYER_B__170_0_OFFSET UNITYSDK_OFFSET(0x9831FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c_TypeDefinitionIndex = 52542;

	class GridFightGameRefData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__182_5()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x153D0);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__182_6()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x153D8);
		}
		static ::RPG::Client::GridFightGameRefData___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightGameRefData___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x153E0);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__124_1()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x153E8);
		}
		static ::System::Comparison_1<::RPG::Client::GridFightSeasonRole*>** StaticGet___9__181_0()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightSeasonRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x153F0);
		}
		static ::System::Func_2<::RPG::Client::GridFightGameRefTrait*, ::System::UInt32>** StaticGet___9__168_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefTrait*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x153F8);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__128_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x15400);
		}
		static ::System::Func_2<::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B*, ::System::Boolean>** StaticGet___9__164_1()
		{
			return (::System::Func_2<::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x15408);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__182_7()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x15410);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__182_1()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x15418);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__155_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x15420);
		}
		static ::System::Func_2<::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B*, ::System::Boolean>** StaticGet___9__164_0()
		{
			return (::System::Func_2<::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x15428);
		}
		static ::System::Comparison_1<::RPG::Client::GridFightSeasonRole*>** StaticGet___9__180_1()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightSeasonRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x15430);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__169_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x15438);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__126_1()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x15440);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__124_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x15448);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__182_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x15450);
		}
		static ::System::Func_2<::RPG::Client::GridFightGameRefTrait*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefTrait*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x15458);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__170_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x15460);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__126_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x15468);
		}
		static ::System::Comparison_1<::RPG::Client::GridFightRole*>** StaticGet___9__179_1()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x15470);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__182_2()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x15478);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__182_4()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x15480);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__182_3()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x15488);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_ActivatedTraits_b__9_0(::RPG::Client::GridFightGameRefTrait* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_ACTIVATEDTRAITS_B__9_0_OFFSET))(this, x);
		}

		::System::Boolean _get_BasicEquips_b__124_0(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_BASICEQUIPS_B__124_0_OFFSET))(this, id);
		}

		::RPG::Client::GridFightEquipItemData* _get_BasicEquips_b__124_1(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_BASICEQUIPS_B__124_1_OFFSET))(this, id);
		}

		::System::Boolean _get_CoreEquips_b__126_0(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_COREEQUIPS_B__126_0_OFFSET))(this, id);
		}

		::RPG::Client::GridFightEquipItemData* _get_CoreEquips_b__126_1(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_COREEQUIPS_B__126_1_OFFSET))(this, id);
		}

		::System::Boolean _get_EmblemEquips_b__128_0(::RPG::Client::GridFightEquipItemConfig* equip)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_EMBLEMEQUIPS_B__128_0_OFFSET))(this, equip);
		}

		::System::Boolean _get_HasEmblem_b__155_0(::RPG::Client::GridFightEquipItemConfig* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_HASEMBLEM_B__155_0_OFFSET))(this, x);
		}

		::System::Boolean __CheckIsExpert_b__164_0(::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CHECKISEXPERT_B__164_0_OFFSET))(this, x);
		}

		::System::Boolean __CheckIsExpert_b__164_1(::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CHECKISEXPERT_B__164_1_OFFSET))(this, x);
		}

		::System::UInt32 __IsTraitExpired_b__168_0(::RPG::Client::GridFightGameRefTrait* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightGameRefTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___ISTRAITEXPIRED_B__168_0_OFFSET))(this, x);
		}

		::RPG::Client::GridFightEquipItemConfig* __UpdateExpiredTraitLayer_b__169_0(::System::UInt32 x)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___UPDATEEXPIREDTRAITLAYER_B__169_0_OFFSET))(this, x);
		}

		::RPG::Client::GridFightEquipItemConfig* __UpdateTraitLayer_b__170_0(::System::UInt32 x)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___UPDATETRAITLAYER_B__170_0_OFFSET))(this, x);
		}

		::System::Int32 __BuildRoles_b__179_1(::RPG::Client::GridFightRole* role1, ::RPG::Client::GridFightRole* role2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightRole*, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDROLES_B__179_1_OFFSET))(this, role1, role2);
		}

		::System::Int32 __BuildSeasonRoles_b__180_1(::RPG::Client::GridFightSeasonRole* role1, ::RPG::Client::GridFightSeasonRole* role2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDSEASONROLES_B__180_1_OFFSET))(this, role1, role2);
		}

		::System::Int32 __BuildSeasonRoles_b__181_0(::RPG::Client::GridFightSeasonRole* role1, ::RPG::Client::GridFightSeasonRole* role2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDSEASONROLES_B__181_0_OFFSET))(this, role1, role2);
		}

		::System::Boolean __GetRecommends_b__182_0(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_0_OFFSET))(this, id);
		}

		::RPG::Client::GridFightEquipItemData* __GetRecommends_b__182_1(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_1_OFFSET))(this, id);
		}

		::System::Boolean __GetRecommends_b__182_2(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_2_OFFSET))(this, id);
		}

		::RPG::Client::GridFightEquipItemData* __GetRecommends_b__182_3(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_3_OFFSET))(this, id);
		}

		::System::Boolean __GetRecommends_b__182_4(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_4_OFFSET))(this, id);
		}

		::RPG::Client::GridFightEquipItemData* __GetRecommends_b__182_5(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_5_OFFSET))(this, id);
		}

		::System::Boolean __GetRecommends_b__182_6(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_6_OFFSET))(this, id);
		}

		::RPG::Client::GridFightEquipItemData* __GetRecommends_b__182_7(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_7_OFFSET))(this, id);
		}

		::System::Void __cctor_b__191_0(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_0_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_1(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_1_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_2(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_2_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_3(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_3_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_4(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_4_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_5(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_5_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_6(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_6_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_7(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_7_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_8(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_8_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_9(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_9_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_10(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_10_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_11(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_11_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_12(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_12_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_13(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_13_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_14(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_14_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_15(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_15_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_16(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_16_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_17(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_17_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_18(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_18_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_19(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_19_OFFSET))(this, refData, serializer, reader);
		}
	};
}
