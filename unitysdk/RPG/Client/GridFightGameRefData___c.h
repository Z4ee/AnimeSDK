#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B;
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

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA20430)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA20470)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_ACTIVATEDTRAITS_B__9_0_OFFSET UNITYSDK_OFFSET(0x1BA20480)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_BASICEQUIPS_B__126_0_OFFSET UNITYSDK_OFFSET(0x1BA204D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_BASICEQUIPS_B__126_1_OFFSET UNITYSDK_OFFSET(0x1BA204E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_COREEQUIPS_B__128_0_OFFSET UNITYSDK_OFFSET(0x1BA205A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_COREEQUIPS_B__128_1_OFFSET UNITYSDK_OFFSET(0x1BA205B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_EMBLEMEQUIPS_B__130_0_OFFSET UNITYSDK_OFFSET(0x1BA20670)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_HASEMBLEM_B__157_0_OFFSET UNITYSDK_OFFSET(0x1BA20690)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDROLES_B__183_1_OFFSET UNITYSDK_OFFSET(0x1BA209D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDSEASONROLES_B__184_1_OFFSET UNITYSDK_OFFSET(0x1BA20A90)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDSEASONROLES_B__185_0_OFFSET UNITYSDK_OFFSET(0x1BA20D80)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_0_OFFSET UNITYSDK_OFFSET(0x1BA21100)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_10_OFFSET UNITYSDK_OFFSET(0x1BA214D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_11_OFFSET UNITYSDK_OFFSET(0x1BA21510)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_12_OFFSET UNITYSDK_OFFSET(0x1BA21550)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_13_OFFSET UNITYSDK_OFFSET(0x1BA21590)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_14_OFFSET UNITYSDK_OFFSET(0x1BA21620)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_15_OFFSET UNITYSDK_OFFSET(0x1BA21690)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_16_OFFSET UNITYSDK_OFFSET(0x1BA216D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_17_OFFSET UNITYSDK_OFFSET(0x1BA21710)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_18_OFFSET UNITYSDK_OFFSET(0x1BA21750)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_19_OFFSET UNITYSDK_OFFSET(0x1BA21790)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_1_OFFSET UNITYSDK_OFFSET(0x1BA21170)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_2_OFFSET UNITYSDK_OFFSET(0x1BA211E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_3_OFFSET UNITYSDK_OFFSET(0x1BA21250)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_4_OFFSET UNITYSDK_OFFSET(0x1BA212F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_5_OFFSET UNITYSDK_OFFSET(0x1BA21360)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_6_OFFSET UNITYSDK_OFFSET(0x1BA213A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_7_OFFSET UNITYSDK_OFFSET(0x1BA213E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_8_OFFSET UNITYSDK_OFFSET(0x1BA21450)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_9_OFFSET UNITYSDK_OFFSET(0x1BA21490)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CHECKISEXPERT_B__167_0_OFFSET UNITYSDK_OFFSET(0x1BA206B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CHECKISEXPERT_B__167_1_OFFSET UNITYSDK_OFFSET(0x1BA207E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__186_0_OFFSET UNITYSDK_OFFSET(0x1BA20DC0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__186_1_OFFSET UNITYSDK_OFFSET(0x1BA20DD0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__186_2_OFFSET UNITYSDK_OFFSET(0x1BA20E90)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__186_3_OFFSET UNITYSDK_OFFSET(0x1BA20EA0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__186_4_OFFSET UNITYSDK_OFFSET(0x1BA20F60)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__186_5_OFFSET UNITYSDK_OFFSET(0x1BA20F70)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__186_6_OFFSET UNITYSDK_OFFSET(0x1BA21030)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__186_7_OFFSET UNITYSDK_OFFSET(0x1BA21040)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___ISTRAITEXPIRED_B__171_0_OFFSET UNITYSDK_OFFSET(0x1BA20910)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___UPDATEEXPIREDTRAITLAYER_B__172_0_OFFSET UNITYSDK_OFFSET(0x1BA20930)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___UPDATETRAITLAYER_B__173_0_OFFSET UNITYSDK_OFFSET(0x1BA20980)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c_TypeDefinitionIndex = 64788;

	class GridFightGameRefData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__186_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x2FEF0);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__186_1()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x2FEF8);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__186_6()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x2FF00);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__157_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x2FF08);
		}
		static ::System::Comparison_1<::RPG::Client::GridFightSeasonRole*>** StaticGet___9__185_0()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightSeasonRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x2FF10);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__186_4()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x2FF18);
		}
		static ::System::Func_2<::RPG::Client::GridFightGameRefTrait*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefTrait*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x2FF20);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__126_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x2FF28);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__186_2()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x2FF30);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__186_5()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x2FF38);
		}
		static ::System::Func_2<::Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B*, ::System::Boolean>** StaticGet___9__167_1()
		{
			return (::System::Func_2<::Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x2FF40);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__130_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x2FF48);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__186_3()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x2FF50);
		}
		static ::RPG::Client::GridFightGameRefData___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightGameRefData___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x2FF58);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__186_7()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x2FF60);
		}
		static ::System::Func_2<::RPG::Client::GridFightGameRefTrait*, ::System::UInt32>** StaticGet___9__171_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefTrait*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x2FF68);
		}
		static ::System::Comparison_1<::RPG::Client::GridFightSeasonRole*>** StaticGet___9__184_1()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightSeasonRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x2FF70);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__172_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x2FF78);
		}
		static ::System::Func_2<::Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B*, ::System::Boolean>** StaticGet___9__167_0()
		{
			return (::System::Func_2<::Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x2FF80);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__126_1()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x2FF88);
		}
		static ::System::Comparison_1<::RPG::Client::GridFightRole*>** StaticGet___9__183_1()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x2FF90);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__128_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x2FF98);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__173_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x2FFA0);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__128_1()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x2FFA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_ActivatedTraits_b__9_0(::RPG::Client::GridFightGameRefTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_ACTIVATEDTRAITS_B__9_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_BasicEquips_b__126_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_BASICEQUIPS_B__126_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* _get_BasicEquips_b__126_1(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_BASICEQUIPS_B__126_1_OFFSET))(this, a1);
		}

		::System::Boolean _get_CoreEquips_b__128_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_COREEQUIPS_B__128_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* _get_CoreEquips_b__128_1(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_COREEQUIPS_B__128_1_OFFSET))(this, a1);
		}

		::System::Boolean _get_EmblemEquips_b__130_0(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_EMBLEMEQUIPS_B__130_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_HasEmblem_b__157_0(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_HASEMBLEM_B__157_0_OFFSET))(this, a1);
		}

		::System::Boolean __CheckIsExpert_b__167_0(::Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CHECKISEXPERT_B__167_0_OFFSET))(this, a1);
		}

		::System::Boolean __CheckIsExpert_b__167_1(::Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CHECKISEXPERT_B__167_1_OFFSET))(this, a1);
		}

		::System::UInt32 __IsTraitExpired_b__171_0(::RPG::Client::GridFightGameRefTrait* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightGameRefTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___ISTRAITEXPIRED_B__171_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemConfig* __UpdateExpiredTraitLayer_b__172_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___UPDATEEXPIREDTRAITLAYER_B__172_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemConfig* __UpdateTraitLayer_b__173_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___UPDATETRAITLAYER_B__173_0_OFFSET))(this, a1);
		}

		::System::Int32 __BuildRoles_b__183_1(::RPG::Client::GridFightRole* a1, ::RPG::Client::GridFightRole* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightRole*, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDROLES_B__183_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 __BuildSeasonRoles_b__184_1(::RPG::Client::GridFightSeasonRole* a1, ::RPG::Client::GridFightSeasonRole* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDSEASONROLES_B__184_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 __BuildSeasonRoles_b__185_0(::RPG::Client::GridFightSeasonRole* a1, ::RPG::Client::GridFightSeasonRole* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDSEASONROLES_B__185_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean __GetRecommends_b__186_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__186_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* __GetRecommends_b__186_1(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__186_1_OFFSET))(this, a1);
		}

		::System::Boolean __GetRecommends_b__186_2(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__186_2_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* __GetRecommends_b__186_3(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__186_3_OFFSET))(this, a1);
		}

		::System::Boolean __GetRecommends_b__186_4(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__186_4_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* __GetRecommends_b__186_5(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__186_5_OFFSET))(this, a1);
		}

		::System::Boolean __GetRecommends_b__186_6(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__186_6_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* __GetRecommends_b__186_7(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__186_7_OFFSET))(this, a1);
		}

		::System::Void __cctor_b__195_0(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__195_1(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__195_2(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__195_3(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__195_4(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__195_5(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__195_6(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_6_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__195_7(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_7_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__195_8(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_8_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__195_9(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_9_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__195_10(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_10_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__195_11(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_11_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__195_12(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_12_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__195_13(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_13_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__195_14(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_14_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__195_15(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_15_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__195_16(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_16_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__195_17(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_17_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__195_18(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_18_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __cctor_b__195_19(::RPG::Client::GridFightGameRefData* a1, ::Newtonsoft::Json::JsonSerializer* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__195_19_OFFSET))(this, a1, a2, a3);
		}
	};
}
