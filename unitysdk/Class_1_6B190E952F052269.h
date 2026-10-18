#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_2.h"
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
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class BattleGridFightEquipData; }
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
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6B190E952F052269_METHOD_1_08E163D56C0C8F00_OFFSET UNITYSDK_OFFSET(0x16545F40)
#define CLASS_1_6B190E952F052269_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x165460C0)
#define CLASS_1_6B190E952F052269_METHOD_1_14097EC6895348CB_OFFSET UNITYSDK_OFFSET(0x16548F30)
#define CLASS_1_6B190E952F052269_METHOD_1_25A88337C347FCE5_OFFSET UNITYSDK_OFFSET(0x165497C0)
#define CLASS_1_6B190E952F052269_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x16545E60)
#define CLASS_1_6B190E952F052269_METHOD_1_497DF36EC78CFCF5_OFFSET UNITYSDK_OFFSET(0x1654A2E0)
#define CLASS_1_6B190E952F052269_METHOD_1_4D61F5114FED3DBB_OFFSET UNITYSDK_OFFSET(0x16547260)
#define CLASS_1_6B190E952F052269_METHOD_1_5121B8BB61593362_OFFSET UNITYSDK_OFFSET(0x16546050)
#define CLASS_1_6B190E952F052269_METHOD_1_551A4F61A8D2F097_1_OFFSET UNITYSDK_OFFSET(0x16549420)
#define CLASS_1_6B190E952F052269_METHOD_1_551A4F61A8D2F097_OFFSET UNITYSDK_OFFSET(0x16549250)
#define CLASS_1_6B190E952F052269_METHOD_1_6A81F8874FDDFA8B_OFFSET UNITYSDK_OFFSET(0x165495F0)
#define CLASS_1_6B190E952F052269_METHOD_1_6D86ABD6A5C3DC13_OFFSET UNITYSDK_OFFSET(0x16546890)
#define CLASS_1_6B190E952F052269_METHOD_1_6F3349DCDD82FD80_OFFSET UNITYSDK_OFFSET(0x16549AB0)
#define CLASS_1_6B190E952F052269_METHOD_1_84EB0A5506D8F6FA_OFFSET UNITYSDK_OFFSET(0x165460F0)
#define CLASS_1_6B190E952F052269_METHOD_1_8B72F9BD924B6F4E_OFFSET UNITYSDK_OFFSET(0x16549040)
#define CLASS_1_6B190E952F052269_METHOD_1_97471C838093748B_OFFSET UNITYSDK_OFFSET(0x1654A580)
#define CLASS_1_6B190E952F052269_METHOD_1_ABC5A418EE72826B_OFFSET UNITYSDK_OFFSET(0x16547430)
#define CLASS_1_6B190E952F052269_METHOD_1_ADE16B9CBF490E21_OFFSET UNITYSDK_OFFSET(0x16546620)
#define CLASS_1_6B190E952F052269_METHOD_1_BB9D555CD6A3AF39_OFFSET UNITYSDK_OFFSET(0x16549C30)
#define CLASS_1_6B190E952F052269_METHOD_1_BE69B7FCD202A765_OFFSET UNITYSDK_OFFSET(0x165464D0)
#define CLASS_1_6B190E952F052269_METHOD_1_C16AF4C6F817ED58_OFFSET UNITYSDK_OFFSET(0x165467C0)
#define CLASS_1_6B190E952F052269_METHOD_1_C1F36F90328D6F76_OFFSET UNITYSDK_OFFSET(0x16548E30)
#define CLASS_1_6B190E952F052269_METHOD_1_C3E6B302E4025AD5_OFFSET UNITYSDK_OFFSET(0x165470B0)
#define CLASS_1_6B190E952F052269_METHOD_1_D95C876829CC4615_OFFSET UNITYSDK_OFFSET(0x16548CF0)
#define CLASS_1_6B190E952F052269_METHOD_1_E21320FBF8027771_OFFSET UNITYSDK_OFFSET(0x16547EB0)
#define CLASS_1_6B190E952F052269_METHOD_1_E9CAFF93B85D0927_OFFSET UNITYSDK_OFFSET(0x16546260)
#define CLASS_1_6B190E952F052269__CCTOR_OFFSET UNITYSDK_OFFSET(0x1654A940)

inline static constexpr unsigned int Class_1_6B190E952F052269_TypeDefinitionIndex = 59060;

class Class_1_6B190E952F052269 : public ::System::Object
{
public:
	static ::System::String** StaticGet_EKNLIOANFAA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x1C0E0);
	}
	static ::RPG::GameCore::GridFightStageTemplateConfig** StaticGet_OCNEEODCHFE()
	{
		return (::RPG::GameCore::GridFightStageTemplateConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x1C0E8);
	}
	static ::Class_1_8EA2534C822D9706** StaticGet_JCCODBFHFNJ()
	{
		return (::Class_1_8EA2534C822D9706**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x1C0F0);
	}
	static ::Class_1_43B0AF86156D9901** StaticGet_JJNGEGLMCGK()
	{
		return (::Class_1_43B0AF86156D9901**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x1C0F8);
	}
	static ::System::String** StaticGet_HHKOPCOCEOG()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x1C100);
	}
	static ::System::String** StaticGet_HBPGAJNMCHD()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x1C108);
	}
	static ::System::String** StaticGet_EJIPPFGACDB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x1C110);
	}
	static ::System::Boolean* StaticGet_GEFPEIAJFOO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x6490);
	}
	static ::System::Boolean* StaticGet_MGBLMOACGIC()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x6491);
	}
	static ::RPG::GameCore::StringHash* StaticGet_MLHLNECCDPD()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x6494);
	}
	static ::RPG::GameCore::StringHash* StaticGet_AFDMMEDFPKN()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x6498);
	}
	static ::RPG::GameCore::StringHash* StaticGet_EHNJDIDABHD()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x649C);
	}
	static ::System::UInt32* StaticGet_FCJOJOIEOJD()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x64A0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_KOMFCJAFGPA()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x64A4);
	}
	static ::RPG::GameCore::StringHash* StaticGet_CIKHDIJFAED()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x64A8);
	}
	static ::RPG::GameCore::StringHash* StaticGet_GMHANKLHGGK()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x64AC);
	}
	static ::RPG::GameCore::StringHash* StaticGet_HKMHDAMLOOK()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x64B0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_IFPMJJLBMID()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x64B4);
	}
	static ::RPG::GameCore::StringHash* StaticGet_OMOKHMIGIMC()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x64B8);
	}
	static ::RPG::GameCore::StringHash* StaticGet_GKBBBILMGNC()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x64BC);
	}
	static ::RPG::GameCore::StringHash* StaticGet_HLEDGKCEKGB()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x64C0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_IDJOOLJBFCG()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x64C4);
	}
	static ::RPG::GameCore::StringHash* StaticGet_MPMAOEFLGEK()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x64C8);
	}
	static ::RPG::GameCore::StringHash* StaticGet_MGPAOPACBDK()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x64CC);
	}
	static ::RPG::GameCore::StringHash* StaticGet_FEMNBMBEAKN()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x64D0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_KMENGMELADF()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x64D4);
	}
	static ::RPG::GameCore::StringHash* StaticGet_JJJIPEDNLDK()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x64D8);
	}
	static ::RPG::GameCore::StringHash* StaticGet_NNDBFAIDKNJ()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x64DC);
	}
	static ::RPG::GameCore::StringHash* StaticGet_ODFBFLBMKEK()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x64E0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_IHKFAFJMCIB()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x64E4);
	}
	static ::System::UInt32* StaticGet_LHDOKKFJMIF()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x64E8);
	}
	static ::RPG::GameCore::StringHash* StaticGet_LIFBHELMEAI()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x64EC);
	}
	static ::RPG::GameCore::StringHash* StaticGet_FOCJBGGBPKN()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x64F0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_HPDOIKGOEOB()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x64F4);
	}
	static ::RPG::GameCore::StringHash* StaticGet_JBIMLONMJBF()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x64F8);
	}
	static ::RPG::GameCore::StringHash* StaticGet_DMBIOBMBOAN()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x64FC);
	}
	static ::RPG::GameCore::StringHash* StaticGet_KAPLBIDKPOM()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x6500);
	}
	static ::System::UInt32* StaticGet_HNAAIBBKOLK()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x6504);
	}
	static ::RPG::GameCore::StringHash* StaticGet_IGDGDPJOKDN()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B190E952F052269_TypeDefinitionIndex)->GetStaticField(0x6508);
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

	static ::System::UInt32 Method_1_ADE16B9CBF490E21(::System::Collections::Generic::List_1<::Struct_2_34C03801479AC814>* a1, ::Enum_3_F80BFD5B986D5503_2 a2, ::System::UInt32 a3)
	{
		return ((::System::UInt32(*)(::System::Collections::Generic::List_1<::Struct_2_34C03801479AC814>*, ::Enum_3_F80BFD5B986D5503_2, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_ADE16B9CBF490E21_OFFSET))(a1, a2, a3);
	}

	static ::Enum_3_F80BFD5B986D5503_2 Method_1_C16AF4C6F817ED58(::RPG::GameCore::GridFightDropCfgType a1, ::System::UInt32& a2)
	{
		return ((::Enum_3_F80BFD5B986D5503_2(*)(::RPG::GameCore::GridFightDropCfgType, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_C16AF4C6F817ED58_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6D86ABD6A5C3DC13(::RPG::GameCore::BattleEventDataComponent* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_6D86ABD6A5C3DC13_OFFSET))(a1);
	}

	static ::System::Void Method_1_E21320FBF8027771(::RPG::GameCore::AvatarDataComponent* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarDataComponent*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_E21320FBF8027771_OFFSET))(a1);
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

	static ::RPG::GameCore::BattleGridFightAvatarData* Method_1_C3E6B302E4025AD5(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GridFightManager* a2)
	{
		return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GridFightManager*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_C3E6B302E4025AD5_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::BattleGridFightAvatarData* Method_1_6F3349DCDD82FD80(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GridFightManager* a2)
	{
		return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GridFightManager*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_6F3349DCDD82FD80_OFFSET))(a1, a2);
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

	static ::RPG::GameCore::GameEntity* Method_1_97471C838093748B(::System::UInt32 a1, ::RPG::GameCore::GridFightManager* a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::System::UInt32, ::RPG::GameCore::GridFightManager*))((::PBYTE)hIl2Cpp + CLASS_1_6B190E952F052269_METHOD_1_97471C838093748B_OFFSET))(a1, a2);
	}
};
