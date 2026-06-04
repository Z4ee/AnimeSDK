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

class Class_1_827373C1CEDFE355;
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

#define CLASS_1_6B190E952F052269_METHOD_1_080BD971D4308AEF_OFFSET UNITYSDK_OFFSET(0x142520F0)
#define CLASS_1_6B190E952F052269_METHOD_1_08E163D56C0C8F00_OFFSET UNITYSDK_OFFSET(0x1424C6D0)
#define CLASS_1_6B190E952F052269_METHOD_1_0F47660F48089870_OFFSET UNITYSDK_OFFSET(0x14252670)
#define CLASS_1_6B190E952F052269_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1424C850)
#define CLASS_1_6B190E952F052269_METHOD_1_14097EC6895348CB_OFFSET UNITYSDK_OFFSET(0x14250E60)
#define CLASS_1_6B190E952F052269_METHOD_1_25A88337C347FCE5_OFFSET UNITYSDK_OFFSET(0x14251690)
#define CLASS_1_6B190E952F052269_METHOD_1_2D40FB429E7B7277_OFFSET UNITYSDK_OFFSET(0x14252F40)
#define CLASS_1_6B190E952F052269_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x1424C5F0)
#define CLASS_1_6B190E952F052269_METHOD_1_497DF36EC78CFCF5_OFFSET UNITYSDK_OFFSET(0x14252CA0)
#define CLASS_1_6B190E952F052269_METHOD_1_4D61F5114FED3DBB_OFFSET UNITYSDK_OFFSET(0x1424F430)
#define CLASS_1_6B190E952F052269_METHOD_1_5121B8BB61593362_OFFSET UNITYSDK_OFFSET(0x1424C7E0)
#define CLASS_1_6B190E952F052269_METHOD_1_551A4F61A8D2F097_1_OFFSET UNITYSDK_OFFSET(0x142512F0)
#define CLASS_1_6B190E952F052269_METHOD_1_551A4F61A8D2F097_OFFSET UNITYSDK_OFFSET(0x14251120)
#define CLASS_1_6B190E952F052269_METHOD_1_616C4EBDF75261A7_OFFSET UNITYSDK_OFFSET(0x1424D0F0)
#define CLASS_1_6B190E952F052269_METHOD_1_6A81F8874FDDFA8B_OFFSET UNITYSDK_OFFSET(0x142514C0)
#define CLASS_1_6B190E952F052269_METHOD_1_6C6A69C2A88F04A1_OFFSET UNITYSDK_OFFSET(0x1424FE60)
#define CLASS_1_6B190E952F052269_METHOD_1_6D86ABD6A5C3DC13_OFFSET UNITYSDK_OFFSET(0x1424EAC0)
#define CLASS_1_6B190E952F052269_METHOD_1_6F3349DCDD82FD80_OFFSET UNITYSDK_OFFSET(0x142523A0)
#define CLASS_1_6B190E952F052269_METHOD_1_72011BD6036DDC68_OFFSET UNITYSDK_OFFSET(0x1424F600)
#define CLASS_1_6B190E952F052269_METHOD_1_73DD48D58191807C_OFFSET UNITYSDK_OFFSET(0x14252190)
#define CLASS_1_6B190E952F052269_METHOD_1_7A364FA19B5B1DBB_OFFSET UNITYSDK_OFFSET(0x1424D7D0)
#define CLASS_1_6B190E952F052269_METHOD_1_84EB0A5506D8F6FA_OFFSET UNITYSDK_OFFSET(0x1424C880)
#define CLASS_1_6B190E952F052269_METHOD_1_86F41298CE10687F_OFFSET UNITYSDK_OFFSET(0x1424D740)
#define CLASS_1_6B190E952F052269_METHOD_1_8A1FF97925A56F9E_OFFSET UNITYSDK_OFFSET(0x14251980)
#define CLASS_1_6B190E952F052269_METHOD_1_8B72F9BD924B6F4E_OFFSET UNITYSDK_OFFSET(0x14250F70)
#define CLASS_1_6B190E952F052269_METHOD_1_91F134D80943E100_OFFSET UNITYSDK_OFFSET(0x1424CDB0)
#define CLASS_1_6B190E952F052269_METHOD_1_999DCEB402B9546D_OFFSET UNITYSDK_OFFSET(0x14251C80)
#define CLASS_1_6B190E952F052269_METHOD_1_A7320E3F150A5707_OFFSET UNITYSDK_OFFSET(0x1424E8B0)
#define CLASS_1_6B190E952F052269_METHOD_1_ADE16B9CBF490E21_OFFSET UNITYSDK_OFFSET(0x1424CE80)
#define CLASS_1_6B190E952F052269_METHOD_1_B1C4E57685B51C88_OFFSET UNITYSDK_OFFSET(0x14252200)
#define CLASS_1_6B190E952F052269_METHOD_1_B1C57E43980403BA_OFFSET UNITYSDK_OFFSET(0x14252070)
#define CLASS_1_6B190E952F052269_METHOD_1_BE69B7FCD202A765_OFFSET UNITYSDK_OFFSET(0x1424CC60)
#define CLASS_1_6B190E952F052269_METHOD_1_C16AF4C6F817ED58_OFFSET UNITYSDK_OFFSET(0x1424D020)
#define CLASS_1_6B190E952F052269_METHOD_1_C1F36F90328D6F76_OFFSET UNITYSDK_OFFSET(0x14250D60)
#define CLASS_1_6B190E952F052269_METHOD_1_C3E6B302E4025AD5_OFFSET UNITYSDK_OFFSET(0x1424F290)
#define CLASS_1_6B190E952F052269_METHOD_1_C6C5D3288CC7B875_OFFSET UNITYSDK_OFFSET(0x1424D380)
#define CLASS_1_6B190E952F052269_METHOD_1_D063300DDDB128CF_OFFSET UNITYSDK_OFFSET(0x14252510)
#define CLASS_1_6B190E952F052269_METHOD_1_D95C876829CC4615_OFFSET UNITYSDK_OFFSET(0x14250C20)
#define CLASS_1_6B190E952F052269_METHOD_1_E847617F76A419C1_OFFSET UNITYSDK_OFFSET(0x1424D550)
#define CLASS_1_6B190E952F052269_METHOD_1_E9CAFF93B85D0927_OFFSET UNITYSDK_OFFSET(0x1424C9F0)
#define CLASS_1_6B190E952F052269_METHOD_1_F49F9527352EA2C5_1_OFFSET UNITYSDK_OFFSET(0x14251C00)
#define CLASS_1_6B190E952F052269_METHOD_1_F49F9527352EA2C5_OFFSET UNITYSDK_OFFSET(0x14251B80)
#define CLASS_1_6B190E952F052269__CCTOR_OFFSET UNITYSDK_OFFSET(0x14253370)

inline static constexpr unsigned int Class_1_6B190E952F052269_TypeDefinitionIndex = 55190;

class Class_1_6B190E952F052269 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x1B7E0);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x1B7E8);
	}
	static ::Class_1_8EA2534C822D9706** StaticGet_Field_1_2()
	{
		return (::Class_1_8EA2534C822D9706**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x1B7F0);
	}
	static ::Class_1_827373C1CEDFE355** StaticGet_Field_1_3()
	{
		return (::Class_1_827373C1CEDFE355**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x1B7F8);
	}
	static ::System::String** StaticGet_Field_1_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x1B800);
	}
	static ::RPG::GameCore::GridFightStageTemplateConfig** StaticGet_Field_1_5()
	{
		return (::RPG::GameCore::GridFightStageTemplateConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x1B808);
	}
	static ::System::String** StaticGet_Field_1_6()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x1B810);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_7()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8CB0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_8()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8CB4);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_9()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8CB8);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_10()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8CBC);
	}
	static ::System::UInt32* StaticGet_Field_1_11()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8CC0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_12()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8CC4);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_13()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8CC8);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_14()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8CCC);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_15()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8CD0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_16()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8CD4);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_17()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8CD8);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_18()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8CDC);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_19()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8CE0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_20()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8CE4);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_21()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8CE8);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_22()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8CEC);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_23()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8CF0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_24()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8CF4);
	}
	static ::System::UInt32* StaticGet_Field_1_25()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8CF8);
	}
	static ::System::Boolean* StaticGet_Field_1_26()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8CFC);
	}
	static ::System::Boolean* StaticGet_Field_1_27()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8CFD);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_28()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8D00);
	}
	static ::System::UInt32* StaticGet_Field_1_29()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8D04);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_30()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8D08);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_31()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8D0C);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_32()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8D10);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_33()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8D14);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_34()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8D18);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_35()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8D1C);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_36()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8D20);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_37()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x8D24);
	}
	// static const ::System::String* Field_1_38; // 0x0

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

	static ::System::Void Method_1_7A364FA19B5B1DBB(::RPG::GameCore::TeamFormationComponent* a1, ::RPG::GameCore::AliveStateMask a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TeamFormationComponent*, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_7A364FA19B5B1DBB_OFFSET))(a1, a2);
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

	static ::System::Void Method_1_72011BD6036DDC68(::RPG::GameCore::GridFightManager* a1, ::RPG::GameCore::BattleGridFightAvatarData* a2, ::RPG::GameCore::ICharacterRowData* a3, ::RPG::GameCore::GridFightSkillType a4, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightManager*, ::RPG::GameCore::BattleGridFightAvatarData*, ::RPG::GameCore::ICharacterRowData*, ::RPG::GameCore::GridFightSkillType, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_72011BD6036DDC68_OFFSET))(a1, a2, a3, a4, a5, a6);
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

	static ::System::Boolean Method_1_D063300DDDB128CF(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_D063300DDDB128CF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D95C876829CC4615(::RPG::GameCore::BattleGridFightEquipData* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::BattleGridFightEquipData*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_D95C876829CC4615_OFFSET))(a1, a2);
	}

	static ::Class_2_1DB6C02CA182EEBA* Method_1_0F47660F48089870(::RPG::GameCore::BattleGridFightEquipData* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2)
	{
		return ((::Class_2_1DB6C02CA182EEBA*(*)(::RPG::GameCore::BattleGridFightEquipData*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_0F47660F48089870_OFFSET))(a1, a2);
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
