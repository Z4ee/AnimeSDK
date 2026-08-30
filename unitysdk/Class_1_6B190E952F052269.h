#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_1.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightDropCfgType.h"
#include "unitysdk/RPG/GameCore/GridFightSkillType.h"
#include "unitysdk/RPG/GameCore/ModifyCalcOpType.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/Struct_2_34C03801479AC814.h"
#include "unitysdk/System/Object.h"

class Class_1_43B0AF86156D9901;
class Class_1_8EA2534C822D9706;
class Class_2_1DB6C02CA182EEBA;
namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class AvatarRowData; }
namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class BattleEventRow; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightAvatarRow_AvatarCommonRowWrap; }
namespace RPG::GameCore { class GridFightBattleTemplate; }
namespace RPG::GameCore { class GridFightCyreneModifyConfigRow; }
namespace RPG::GameCore { class GridFightManager; }
namespace RPG::GameCore { class GridFightRankSkillModifyConfigRow; }
namespace RPG::GameCore { class GridFightStageTemplateConfig; }
namespace RPG::GameCore { class GridFightWaveInfo; }
namespace RPG::GameCore { class ICharacterRowData; }
namespace RPG::GameCore { class ServantConfig; }
namespace RPG::GameCore { class ServantRowData; }
namespace RPG::GameCore { class TeamFormationComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6B190E952F052269_METHOD_1_080BD971D4308AEF_OFFSET UNITYSDK_OFFSET(0x1779DCA0)
#define CLASS_1_6B190E952F052269_METHOD_1_08E163D56C0C8F00_OFFSET UNITYSDK_OFFSET(0x17797F00)
#define CLASS_1_6B190E952F052269_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x17798080)
#define CLASS_1_6B190E952F052269_METHOD_1_14097EC6895348CB_OFFSET UNITYSDK_OFFSET(0x1779CA00)
#define CLASS_1_6B190E952F052269_METHOD_1_25A88337C347FCE5_OFFSET UNITYSDK_OFFSET(0x1779D290)
#define CLASS_1_6B190E952F052269_METHOD_1_2D40FB429E7B7277_OFFSET UNITYSDK_OFFSET(0x1779EDA0)
#define CLASS_1_6B190E952F052269_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x17797E20)
#define CLASS_1_6B190E952F052269_METHOD_1_424ED6560999E7DC_OFFSET UNITYSDK_OFFSET(0x1779E330)
#define CLASS_1_6B190E952F052269_METHOD_1_497DF36EC78CFCF5_OFFSET UNITYSDK_OFFSET(0x1779EB00)
#define CLASS_1_6B190E952F052269_METHOD_1_4A98387FF3025D6B_OFFSET UNITYSDK_OFFSET(0x17799010)
#define CLASS_1_6B190E952F052269_METHOD_1_4D61F5114FED3DBB_OFFSET UNITYSDK_OFFSET(0x1779AD60)
#define CLASS_1_6B190E952F052269_METHOD_1_5121B8BB61593362_OFFSET UNITYSDK_OFFSET(0x17798010)
#define CLASS_1_6B190E952F052269_METHOD_1_551A4F61A8D2F097_1_OFFSET UNITYSDK_OFFSET(0x1779CEF0)
#define CLASS_1_6B190E952F052269_METHOD_1_551A4F61A8D2F097_OFFSET UNITYSDK_OFFSET(0x1779CD20)
#define CLASS_1_6B190E952F052269_METHOD_1_616C4EBDF75261A7_OFFSET UNITYSDK_OFFSET(0x17798920)
#define CLASS_1_6B190E952F052269_METHOD_1_62B5AD0BDF200219_OFFSET UNITYSDK_OFFSET(0x1779E2C0)
#define CLASS_1_6B190E952F052269_METHOD_1_6A81F8874FDDFA8B_OFFSET UNITYSDK_OFFSET(0x1779D0C0)
#define CLASS_1_6B190E952F052269_METHOD_1_6C6A69C2A88F04A1_OFFSET UNITYSDK_OFFSET(0x1779B9B0)
#define CLASS_1_6B190E952F052269_METHOD_1_6D86ABD6A5C3DC13_OFFSET UNITYSDK_OFFSET(0x1779A390)
#define CLASS_1_6B190E952F052269_METHOD_1_6F3349DCDD82FD80_OFFSET UNITYSDK_OFFSET(0x1779E140)
#define CLASS_1_6B190E952F052269_METHOD_1_73DD48D58191807C_OFFSET UNITYSDK_OFFSET(0x1779DD40)
#define CLASS_1_6B190E952F052269_METHOD_1_84EB0A5506D8F6FA_OFFSET UNITYSDK_OFFSET(0x177980B0)
#define CLASS_1_6B190E952F052269_METHOD_1_86F41298CE10687F_OFFSET UNITYSDK_OFFSET(0x17798F80)
#define CLASS_1_6B190E952F052269_METHOD_1_8A1FF97925A56F9E_OFFSET UNITYSDK_OFFSET(0x1779D580)
#define CLASS_1_6B190E952F052269_METHOD_1_8B72F9BD924B6F4E_OFFSET UNITYSDK_OFFSET(0x1779CB10)
#define CLASS_1_6B190E952F052269_METHOD_1_91F134D80943E100_OFFSET UNITYSDK_OFFSET(0x177985E0)
#define CLASS_1_6B190E952F052269_METHOD_1_923B8F76E45A51FA_OFFSET UNITYSDK_OFFSET(0x1779DDB0)
#define CLASS_1_6B190E952F052269_METHOD_1_999DCEB402B9546D_OFFSET UNITYSDK_OFFSET(0x1779D870)
#define CLASS_1_6B190E952F052269_METHOD_1_A7320E3F150A5707_OFFSET UNITYSDK_OFFSET(0x1779A180)
#define CLASS_1_6B190E952F052269_METHOD_1_ABC5A418EE72826B_OFFSET UNITYSDK_OFFSET(0x1779AF30)
#define CLASS_1_6B190E952F052269_METHOD_1_ADE16B9CBF490E21_OFFSET UNITYSDK_OFFSET(0x177986B0)
#define CLASS_1_6B190E952F052269_METHOD_1_B1C4E57685B51C88_OFFSET UNITYSDK_OFFSET(0x1779DFA0)
#define CLASS_1_6B190E952F052269_METHOD_1_B1C57E43980403BA_OFFSET UNITYSDK_OFFSET(0x1779DC20)
#define CLASS_1_6B190E952F052269_METHOD_1_BB9D555CD6A3AF39_OFFSET UNITYSDK_OFFSET(0x1779E450)
#define CLASS_1_6B190E952F052269_METHOD_1_BE69B7FCD202A765_OFFSET UNITYSDK_OFFSET(0x17798490)
#define CLASS_1_6B190E952F052269_METHOD_1_C16AF4C6F817ED58_OFFSET UNITYSDK_OFFSET(0x17798850)
#define CLASS_1_6B190E952F052269_METHOD_1_C1F36F90328D6F76_OFFSET UNITYSDK_OFFSET(0x1779C900)
#define CLASS_1_6B190E952F052269_METHOD_1_C3E6B302E4025AD5_OFFSET UNITYSDK_OFFSET(0x1779ABB0)
#define CLASS_1_6B190E952F052269_METHOD_1_C6C5D3288CC7B875_OFFSET UNITYSDK_OFFSET(0x17798BC0)
#define CLASS_1_6B190E952F052269_METHOD_1_D95C876829CC4615_OFFSET UNITYSDK_OFFSET(0x1779C7C0)
#define CLASS_1_6B190E952F052269_METHOD_1_E847617F76A419C1_OFFSET UNITYSDK_OFFSET(0x17798D90)
#define CLASS_1_6B190E952F052269_METHOD_1_E9CAFF93B85D0927_OFFSET UNITYSDK_OFFSET(0x17798220)
#define CLASS_1_6B190E952F052269_METHOD_1_F49F9527352EA2C5_1_OFFSET UNITYSDK_OFFSET(0x1779D7F0)
#define CLASS_1_6B190E952F052269_METHOD_1_F49F9527352EA2C5_OFFSET UNITYSDK_OFFSET(0x1779D770)
#define CLASS_1_6B190E952F052269__CCTOR_OFFSET UNITYSDK_OFFSET(0x1779F1D0)

inline static constexpr unsigned int Class_1_6B190E952F052269_TypeDefinitionIndex = 59207;

class Class_1_6B190E952F052269 : public ::System::Object
{
public:
	static ::System::String** StaticGet_EJIPPFGACDB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x59A0);
	}
	static ::System::String** StaticGet_HHKOPCOCEOG()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x59A8);
	}
	static ::System::String** StaticGet_EKNLIOANFAA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x59B0);
	}
	static ::Class_1_8EA2534C822D9706** StaticGet_JCCODBFHFNJ()
	{
		return (::Class_1_8EA2534C822D9706**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x59B8);
	}
	static ::Class_1_43B0AF86156D9901** StaticGet_JJNGEGLMCGK()
	{
		return (::Class_1_43B0AF86156D9901**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x59C0);
	}
	static ::System::String** StaticGet_HBPGAJNMCHD()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x59C8);
	}
	static ::RPG::GameCore::GridFightStageTemplateConfig** StaticGet_OCNEEODCHFE()
	{
		return (::RPG::GameCore::GridFightStageTemplateConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x59D0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_JJJIPEDNLDK()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x1980);
	}
	static ::RPG::GameCore::StringHash* StaticGet_HPDOIKGOEOB()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x1984);
	}
	static ::RPG::GameCore::StringHash* StaticGet_FOCJBGGBPKN()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x1988);
	}
	static ::RPG::GameCore::StringHash* StaticGet_OMOKHMIGIMC()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x198C);
	}
	static ::RPG::GameCore::StringHash* StaticGet_IHKFAFJMCIB()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x1990);
	}
	static ::RPG::GameCore::StringHash* StaticGet_IFPMJJLBMID()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x1994);
	}
	static ::RPG::GameCore::StringHash* StaticGet_IDJOOLJBFCG()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x1998);
	}
	static ::System::Boolean* StaticGet_MGBLMOACGIC()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x199C);
	}
	static ::System::Boolean* StaticGet_GEFPEIAJFOO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x199D);
	}
	static ::RPG::GameCore::StringHash* StaticGet_MLHLNECCDPD()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x19A0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_HLEDGKCEKGB()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x19A4);
	}
	static ::RPG::GameCore::StringHash* StaticGet_GMHANKLHGGK()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x19A8);
	}
	static ::System::UInt32* StaticGet_LHDOKKFJMIF()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x19AC);
	}
	static ::RPG::GameCore::StringHash* StaticGet_KMENGMELADF()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x19B0);
	}
	static ::System::UInt32* StaticGet_HNAAIBBKOLK()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x19B4);
	}
	static ::RPG::GameCore::StringHash* StaticGet_LIFBHELMEAI()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x19B8);
	}
	static ::RPG::GameCore::StringHash* StaticGet_JBIMLONMJBF()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x19BC);
	}
	static ::System::UInt32* StaticGet_FCJOJOIEOJD()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x19C0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_ODFBFLBMKEK()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x19C4);
	}
	static ::RPG::GameCore::StringHash* StaticGet_MGPAOPACBDK()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x19C8);
	}
	static ::RPG::GameCore::StringHash* StaticGet_IGDGDPJOKDN()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x19CC);
	}
	static ::RPG::GameCore::StringHash* StaticGet_FEMNBMBEAKN()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x19D0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_NNDBFAIDKNJ()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x19D4);
	}
	static ::RPG::GameCore::StringHash* StaticGet_AFDMMEDFPKN()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x19D8);
	}
	static ::RPG::GameCore::StringHash* StaticGet_KAPLBIDKPOM()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x19DC);
	}
	static ::RPG::GameCore::StringHash* StaticGet_DMBIOBMBOAN()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x19E0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_GKBBBILMGNC()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x19E4);
	}
	static ::RPG::GameCore::StringHash* StaticGet_KOMFCJAFGPA()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x19E8);
	}
	static ::RPG::GameCore::StringHash* StaticGet_MPMAOEFLGEK()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x19EC);
	}
	static ::RPG::GameCore::StringHash* StaticGet_HKMHDAMLOOK()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x19F0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_CIKHDIJFAED()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x19F4);
	}
	static ::RPG::GameCore::StringHash* StaticGet_EHNJDIDABHD()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x19F8);
	}
	// static const ::System::String* MMLEGFJKACL; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269__CCTOR_OFFSET))();
	}

	static ::Class_1_8EA2534C822D9706* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_8EA2534C822D9706*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_358A144584A5DBFC_OFFSET))();
	}

	static ::RPG::GameCore::GridFightStageTemplateConfig* Method_1_08E163D56C0C8F00()
	{
		return ((::RPG::GameCore::GridFightStageTemplateConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_08E163D56C0C8F00_OFFSET))();
	}

	static ::System::Void Method_1_5121B8BB61593362(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_5121B8BB61593362_OFFSET))(a1);
	}

	static ::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_128774387667156B_OFFSET))();
	}

	static ::RPG::GameCore::GridFightWaveInfo* Method_1_84EB0A5506D8F6FA(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightWaveInfo*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_84EB0A5506D8F6FA_OFFSET))(a1);
	}

	static ::RPG::GameCore::GridFightBattleTemplate* Method_1_E9CAFF93B85D0927(::System::String* a1)
	{
		return ((::RPG::GameCore::GridFightBattleTemplate*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_E9CAFF93B85D0927_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_BE69B7FCD202A765(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_BE69B7FCD202A765_OFFSET))(a1);
	}

	static ::System::Void Method_1_91F134D80943E100(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_91F134D80943E100_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_ADE16B9CBF490E21(::System::Collections::Generic::List_1<::Struct_2_34C03801479AC814>* a1, ::Enum_3_F80BFD5B986D5503_1 a2, ::System::UInt32 a3)
	{
		return ((::System::UInt32(*)(::System::Collections::Generic::List_1<::Struct_2_34C03801479AC814>*, ::Enum_3_F80BFD5B986D5503_1, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_ADE16B9CBF490E21_OFFSET))(a1, a2, a3);
	}

	static ::Enum_3_F80BFD5B986D5503_1 Method_1_C16AF4C6F817ED58(::RPG::GameCore::GridFightDropCfgType a1, ::System::UInt32& a2)
	{
		return ((::Enum_3_F80BFD5B986D5503_1(*)(::RPG::GameCore::GridFightDropCfgType, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_C16AF4C6F817ED58_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_616C4EBDF75261A7(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::BattleEventRow* a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_616C4EBDF75261A7_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_E847617F76A419C1(::RPG::GameCore::BattleEventRow* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::BattleEventRow*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_E847617F76A419C1_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_86F41298CE10687F(::RPG::GameCore::BattleEventRow* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::BattleEventRow*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_86F41298CE10687F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4A98387FF3025D6B(::RPG::GameCore::TeamFormationComponent* a1, ::RPG::GameCore::AliveStateMask a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TeamFormationComponent*, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_4A98387FF3025D6B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A7320E3F150A5707(::RPG::GameCore::BattleEventDataComponent* a1, ::RPG::GameCore::BattleEventRow* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::BattleEventDataComponent*, ::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_A7320E3F150A5707_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6D86ABD6A5C3DC13(::RPG::GameCore::BattleEventDataComponent* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_6D86ABD6A5C3DC13_OFFSET))(a1);
	}

	static ::System::Void Method_1_6C6A69C2A88F04A1(::RPG::GameCore::AvatarDataComponent* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarDataComponent*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_6C6A69C2A88F04A1_OFFSET))(a1);
	}

	static ::System::Void Method_1_C1F36F90328D6F76(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_C1F36F90328D6F76_OFFSET))(a1);
	}

	static ::System::Void Method_1_14097EC6895348CB(::RPG::GameCore::AvatarRowData* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarRowData*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_14097EC6895348CB_OFFSET))(a1);
	}

	static ::System::Void Method_1_8B72F9BD924B6F4E(::RPG::GameCore::ServantRowData* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ServantRowData*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_8B72F9BD924B6F4E_OFFSET))(a1);
	}

	static ::System::Void Method_1_ABC5A418EE72826B(::RPG::GameCore::GridFightManager* a1, ::RPG::GameCore::BattleGridFightAvatarData* a2, ::RPG::GameCore::ICharacterRowData* a3, ::RPG::GameCore::GridFightSkillType a4, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightManager*, ::RPG::GameCore::BattleGridFightAvatarData*, ::RPG::GameCore::ICharacterRowData*, ::RPG::GameCore::GridFightSkillType, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_ABC5A418EE72826B_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_551A4F61A8D2F097(::RPG::GameCore::GridFightCyreneModifyConfigRow* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a2, ::System::UInt32 a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightCyreneModifyConfigRow*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_551A4F61A8D2F097_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_6A81F8874FDDFA8B(::RPG::GameCore::GridFightCyreneModifyConfigRow* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightCyreneModifyConfigRow*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_6A81F8874FDDFA8B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_551A4F61A8D2F097_1(::RPG::GameCore::GridFightCyreneModifyConfigRow* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a2, ::System::UInt32 a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightCyreneModifyConfigRow*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_551A4F61A8D2F097_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_4D61F5114FED3DBB(::RPG::GameCore::GridFightRankSkillModifyConfigRow* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightRankSkillModifyConfigRow*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_4D61F5114FED3DBB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_25A88337C347FCE5(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::Il2CppArray<::RPG::GameCore::ModifyCalcOpType>* a3, ::Il2CppArray<::RPG::GameCore::FixPoint>* a4, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a5, ::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a6, ::System::UInt32 a7, ::RPG::GameCore::FixPoint a8)
	{
		return ((::System::Void(*)(::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::RPG::GameCore::ModifyCalcOpType>*, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*, ::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_25A88337C347FCE5_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::Enum_3_01618AD0437C8486 Method_1_8A1FF97925A56F9E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Enum_3_01618AD0437C8486(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_8A1FF97925A56F9E_OFFSET))(a1);
	}

	static ::System::String* Method_1_999DCEB402B9546D(::System::String* a1, ::RPG::GameCore::BattleEventRow* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::String*(*)(::System::String*, ::RPG::GameCore::BattleEventRow*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_999DCEB402B9546D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_B1C57E43980403BA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_B1C57E43980403BA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_73DD48D58191807C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_73DD48D58191807C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F49F9527352EA2C5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_F49F9527352EA2C5_OFFSET))(a1);
	}

	static ::RPG::GameCore::ICharacterRowData* Method_1_923B8F76E45A51FA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::ICharacterRowData*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_923B8F76E45A51FA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F49F9527352EA2C5_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_F49F9527352EA2C5_1_OFFSET))(a1);
	}

	static ::RPG::GameCore::GameEntity* Method_1_080BD971D4308AEF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_080BD971D4308AEF_OFFSET))(a1);
	}

	static ::RPG::GameCore::GameEntity* Method_1_B1C4E57685B51C88(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_B1C4E57685B51C88_OFFSET))(a1);
	}

	static ::RPG::GameCore::GameEntity* Method_1_C6C5D3288CC7B875(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_C6C5D3288CC7B875_OFFSET))(a1);
	}

	static ::RPG::GameCore::BattleGridFightAvatarData* Method_1_C3E6B302E4025AD5(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GridFightManager* a2)
	{
		return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GridFightManager*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_C3E6B302E4025AD5_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::BattleGridFightAvatarData* Method_1_6F3349DCDD82FD80(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GridFightManager* a2)
	{
		return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GridFightManager*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_6F3349DCDD82FD80_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_62B5AD0BDF200219(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_62B5AD0BDF200219_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_424ED6560999E7DC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::UInt32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_424ED6560999E7DC_OFFSET))(a1);
	}

	static ::System::Void Method_1_D95C876829CC4615(::RPG::GameCore::BattleGridFightEquipData* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::BattleGridFightEquipData*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_D95C876829CC4615_OFFSET))(a1, a2);
	}

	static ::Class_2_1DB6C02CA182EEBA* Method_1_BB9D555CD6A3AF39(::RPG::GameCore::BattleGridFightEquipData* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2)
	{
		return ((::Class_2_1DB6C02CA182EEBA*(*)(::RPG::GameCore::BattleGridFightEquipData*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_BB9D555CD6A3AF39_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::ServantConfig* Method_1_497DF36EC78CFCF5(::RPG::GameCore::GridFightAvatarRow_AvatarCommonRowWrap* a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::ServantConfig*(*)(::RPG::GameCore::GridFightAvatarRow_AvatarCommonRowWrap*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_497DF36EC78CFCF5_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::GameEntity* Method_1_2D40FB429E7B7277(::System::UInt32 a1, ::RPG::GameCore::GridFightManager* a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::System::UInt32, ::RPG::GameCore::GridFightManager*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_2D40FB429E7B7277_OFFSET))(a1, a2);
	}
};
