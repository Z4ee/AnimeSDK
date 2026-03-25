#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionBarItemAction.h"
#include "unitysdk/RPG/Client/ActionBarItemUIStyle.h"
#include "unitysdk/RPG/Client/ActionItemType.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeTypeMask.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_02D30900317D93FD;
class Class_1_152140BAFD2DB102;
class Class_1_732D676BA1137E50;
class Class_1_ABFB5B7BFEBBC8F7;
class Class_1_B5F93263C61C75CE;
class Class_1_CFED1AE9FF4FB990;
class Class_1_E3A8B05AA1BBEE81;
class Class_3_C1B871875244D398;
namespace RPG::GameCore { class ActionDelayPreshowConfig; }
namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityActionDelayChanged; }
namespace RPG::GameCore { class LevelSingleInsertAbilityFinishOrAbort; }
namespace RPG::GameCore { class LevelTurnUltraSkillEnd; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_7D0225C5AD8313DD_METHOD_1_022531A408F2D21A_OFFSET UNITYSDK_OFFSET(0x99CAC30)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_02F409FFDEF80079_OFFSET UNITYSDK_OFFSET(0x99C59B0)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x99C4BF0)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x99C1C40)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_0C490FF1F071E8D4_OFFSET UNITYSDK_OFFSET(0x99C2A90)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_0DEC1A8F053BEBEC_OFFSET UNITYSDK_OFFSET(0x99C2930)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_0E77C9B7B4C150CB_OFFSET UNITYSDK_OFFSET(0x99CD050)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_0F19DE6762E7B887_OFFSET UNITYSDK_OFFSET(0x99C24B0)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_13E4C012273E44EE_OFFSET UNITYSDK_OFFSET(0x99C3AC0)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_17BD30EFE8176014_1_OFFSET UNITYSDK_OFFSET(0x99CBD10)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x99CBCC0)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_18517341B37F388E_OFFSET UNITYSDK_OFFSET(0x99C5EB0)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_191F7866D25E9ABE_OFFSET UNITYSDK_OFFSET(0x99CBB30)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_19B91D58E02869BC_1_OFFSET UNITYSDK_OFFSET(0x99CBC70)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x99CBC20)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_1E1FFD875CA8014A_OFFSET UNITYSDK_OFFSET(0x99C4E40)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_2322ECA94C4A608B_OFFSET UNITYSDK_OFFSET(0x99C9B10)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_26313A6A151089EC_OFFSET UNITYSDK_OFFSET(0x99C76F0)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_277F8930086803D1_OFFSET UNITYSDK_OFFSET(0x99C5770)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_2A5A11A10540AE49_OFFSET UNITYSDK_OFFSET(0x99C3120)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_2EA1D7D04E30AB42_OFFSET UNITYSDK_OFFSET(0x99CBA20)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x99C3ED0)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_3BBF8E59AA8D6F49_OFFSET UNITYSDK_OFFSET(0x99C6120)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_3F6EE5FA229DC75B_OFFSET UNITYSDK_OFFSET(0x99C9A60)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_458CB092ED0C33C4_OFFSET UNITYSDK_OFFSET(0x99C6C10)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_4D8F3554F74228C2_OFFSET UNITYSDK_OFFSET(0x99C9440)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_4DE65AB3A4860CEB_OFFSET UNITYSDK_OFFSET(0x99CA290)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_4EF7EE967C804BC2_OFFSET UNITYSDK_OFFSET(0x99C1A70)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_5623ABF51F7C1011_OFFSET UNITYSDK_OFFSET(0x99CAA20)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_5908075118EE1662_OFFSET UNITYSDK_OFFSET(0x99C81E0)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_59CB01CAF55B2A72_OFFSET UNITYSDK_OFFSET(0x99C6350)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_5C473BE8041724C5_OFFSET UNITYSDK_OFFSET(0x99C3BE0)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_5FF1AD7A9740A04E_OFFSET UNITYSDK_OFFSET(0x99C4010)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_609F20273598CA54_OFFSET UNITYSDK_OFFSET(0x99CB8D0)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_638E6DBCCC16CF56_OFFSET UNITYSDK_OFFSET(0x99C47C0)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_64D1E624C8F98A83_OFFSET UNITYSDK_OFFSET(0x99C2440)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_66BB3DDEE5892004_OFFSET UNITYSDK_OFFSET(0x99C3D00)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_6890B58682B199FA_OFFSET UNITYSDK_OFFSET(0x99C6020)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_69AEEBC33EBC6FD8_OFFSET UNITYSDK_OFFSET(0x99C5E20)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_6CE3237F0F6F9268_OFFSET UNITYSDK_OFFSET(0x99C7C00)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x99C3A00)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_70ED643A34CA9DEA_OFFSET UNITYSDK_OFFSET(0x99C8110)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_712CEE98BF839F5D_OFFSET UNITYSDK_OFFSET(0x99C3230)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_7170A66B319FF1AD_OFFSET UNITYSDK_OFFSET(0x99C7670)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_7372A42B6CDBB2D4_OFFSET UNITYSDK_OFFSET(0x99C2E10)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_77A0990B52E748BC_OFFSET UNITYSDK_OFFSET(0x99C0E40)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_78AC934222159E8B_OFFSET UNITYSDK_OFFSET(0x99C2DA0)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_78C62398E94F0FB1_OFFSET UNITYSDK_OFFSET(0x99C5D70)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_83A4158C7436AC75_OFFSET UNITYSDK_OFFSET(0x99CC880)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_84EAB34EABC7F508_OFFSET UNITYSDK_OFFSET(0x99CB050)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_85D05B57B598EAC7_OFFSET UNITYSDK_OFFSET(0x99CB130)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_88D3C3E996B61FE0_OFFSET UNITYSDK_OFFSET(0x99C9E60)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x99C5440)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_8CAE99DA3CAE0987_OFFSET UNITYSDK_OFFSET(0x99C61B0)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0x99CA3E0)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_8E0634CDC64D0684_OFFSET UNITYSDK_OFFSET(0x99C37A0)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_93D0C7B828CDE9B1_OFFSET UNITYSDK_OFFSET(0x99CCB00)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_955AA2AB54923822_OFFSET UNITYSDK_OFFSET(0x99C5CF0)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_95E3CC00A2E05FB7_OFFSET UNITYSDK_OFFSET(0x99C1620)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_9839DFE3C10E4654_OFFSET UNITYSDK_OFFSET(0x99C13E0)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_988117FBEBF96CAE_OFFSET UNITYSDK_OFFSET(0x99C9F70)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_990BE90CD433F6F3_OFFSET UNITYSDK_OFFSET(0x99C9CC0)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_99D5CA958F67E07B_OFFSET UNITYSDK_OFFSET(0x99C4200)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_9D394FE875DA46CB_OFFSET UNITYSDK_OFFSET(0x99C6560)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_9FB6AEF797312662_OFFSET UNITYSDK_OFFSET(0x99CCCB0)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_9FD7402D660805EB_OFFSET UNITYSDK_OFFSET(0x99C3F40)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_9FF71CDFB06416C3_OFFSET UNITYSDK_OFFSET(0x99C6420)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_A06605DFD18AE653_OFFSET UNITYSDK_OFFSET(0x99C2BE0)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_A2269A12D48D0830_OFFSET UNITYSDK_OFFSET(0x99CBD60)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0x99C1750)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_A7209A5DB0DFF39D_OFFSET UNITYSDK_OFFSET(0x99C6D70)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_ABEAB8AF7FE7565E_OFFSET UNITYSDK_OFFSET(0x99CB830)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_AC13E1A23375417A_OFFSET UNITYSDK_OFFSET(0x99CC680)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_B0094ABA229A3E99_OFFSET UNITYSDK_OFFSET(0x99CA100)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_B1B7BF5C3B0F210E_OFFSET UNITYSDK_OFFSET(0x99CCC20)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_B6F0C2C831C5F31A_OFFSET UNITYSDK_OFFSET(0x99C1540)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_B8A8F4F120B2F6D5_OFFSET UNITYSDK_OFFSET(0x99C32F0)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_C365440D57901CE0_OFFSET UNITYSDK_OFFSET(0x99C52D0)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_C49BD18776DC458B_OFFSET UNITYSDK_OFFSET(0x99C3990)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_CAE310167EC3EEEC_OFFSET UNITYSDK_OFFSET(0x99C8360)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_D11A1892E89EAF75_OFFSET UNITYSDK_OFFSET(0x99C8280)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_D378160D37B885FA_OFFSET UNITYSDK_OFFSET(0x99C44B0)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_D737B2CCEE988571_OFFSET UNITYSDK_OFFSET(0x99C8810)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_E0BE3D62C174DC35_OFFSET UNITYSDK_OFFSET(0x99C2810)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_E25CF240D61185E8_OFFSET UNITYSDK_OFFSET(0x99C1D00)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_E569572C3C19C4BD_OFFSET UNITYSDK_OFFSET(0x99CC900)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_F8D1399F1CCCBB77_OFFSET UNITYSDK_OFFSET(0x99C35A0)
#define CLASS_1_7D0225C5AD8313DD_METHOD_1_FC5DBBC47C9FBE4C_OFFSET UNITYSDK_OFFSET(0x99C4260)
#define CLASS_1_7D0225C5AD8313DD__CCTOR_OFFSET UNITYSDK_OFFSET(0x99CD0F0)
#define CLASS_1_7D0225C5AD8313DD__CTOR_OFFSET UNITYSDK_OFFSET(0x99C0E60)
#define CLASS_1_7D0225C5AD8313DD__SKILLPREVIEWSORTBYACTIONDELAYCMP_G___GETOVERRIDEVALUE_21_0_OFFSET UNITYSDK_OFFSET(0x99C2380)

inline static constexpr unsigned int Class_1_7D0225C5AD8313DD_TypeDefinitionIndex = 58427;

class Class_1_7D0225C5AD8313DD : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_15()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D0225C5AD8313DD_TypeDefinitionIndex)->GetStaticField(0x260E0);
	}
	// static const ::System::String* Field_1_16; // 0x0
	::Class_1_ABFB5B7BFEBBC8F7* Field_1_9; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_13; // 0x18
	::RPG::GameCore::TurnBasedGameMode* Field_1_7; // 0x20
	::System::Collections::Generic::Queue_1<::RPG::GameCore::LevelEntityActionDelayChanged*>* Field_1_4; // 0x28
	::System::Collections::Generic::HashSet_1<::RPG::Client::ActionBarItemUIStyle>* Field_1_17; // 0x30
	::Class_1_B5F93263C61C75CE* Field_1_8; // 0x38
	::System::Collections::Generic::List_1<::Class_1_02D30900317D93FD*>* Field_1_1; // 0x40
	::Class_1_732D676BA1137E50* Field_1_11; // 0x48
	::Class_1_02D30900317D93FD* Field_1_14; // 0x50
	::System::Collections::Generic::List_1<::Class_1_02D30900317D93FD*>* Field_1_2; // 0x58
	::Class_1_CFED1AE9FF4FB990* Field_1_3; // 0x60
	::System::Collections::Generic::List_1<::Class_1_02D30900317D93FD*>* Field_1_10; // 0x68
	::System::Collections::Generic::List_1<::Class_1_02D30900317D93FD*>* Field_1_0; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* Field_1_12; // 0x78
	::System::Boolean Field_1_5; // 0x80
	::System::Boolean Field_1_6; // 0x81

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::Class_1_B5F93263C61C75CE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::Class_1_B5F93263C61C75CE*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::List_1<::Class_1_02D30900317D93FD*>* Method_1_77A0990B52E748BC()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_02D30900317D93FD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_77A0990B52E748BC_OFFSET))(this);
	}

	::System::Void Method_1_9839DFE3C10E4654(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_9839DFE3C10E4654_OFFSET))(this, a1);
	}

	::System::Void Method_1_B6F0C2C831C5F31A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_B6F0C2C831C5F31A_OFFSET))(this, a1);
	}

	::System::Void Method_1_95E3CC00A2E05FB7(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_95E3CC00A2E05FB7_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_E25CF240D61185E8(::Class_1_02D30900317D93FD* a1, ::Class_1_02D30900317D93FD* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_02D30900317D93FD*, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_E25CF240D61185E8_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_64D1E624C8F98A83(::Class_1_02D30900317D93FD* a1, ::Class_1_02D30900317D93FD* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_02D30900317D93FD*, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_64D1E624C8F98A83_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_0F19DE6762E7B887(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_0F19DE6762E7B887_OFFSET))(this, a1);
	}

	::System::Void Method_1_0DEC1A8F053BEBEC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_0DEC1A8F053BEBEC_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C490FF1F071E8D4(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_0C490FF1F071E8D4_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A06605DFD18AE653(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_A06605DFD18AE653_OFFSET))(this, a1);
	}

	::System::Void Method_1_78AC934222159E8B(::Class_1_152140BAFD2DB102* a1, ::Class_1_152140BAFD2DB102* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_152140BAFD2DB102*, ::Class_1_152140BAFD2DB102*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_78AC934222159E8B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2A5A11A10540AE49(::System::Int32 a1, ::Class_1_02D30900317D93FD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_2A5A11A10540AE49_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_712CEE98BF839F5D(::RPG::GameCore::LevelTurnUltraSkillEnd* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillEnd*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_712CEE98BF839F5D_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8D1399F1CCCBB77(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_F8D1399F1CCCBB77_OFFSET))(this, a1);
	}

	::System::Void Method_1_8E0634CDC64D0684(::Class_1_E3A8B05AA1BBEE81* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E3A8B05AA1BBEE81*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_8E0634CDC64D0684_OFFSET))(this, a1);
	}

	::System::Void Method_1_C49BD18776DC458B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_C49BD18776DC458B_OFFSET))(this, a1);
	}

	::System::Void Method_1_70437D85C11C5222(::Class_1_02D30900317D93FD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Void Method_1_4EF7EE967C804BC2(::Class_1_02D30900317D93FD* a1, ::RPG::Client::ActionBarItemAction a2, ::RPG::Client::ActionBarItemAction a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_02D30900317D93FD*, ::RPG::Client::ActionBarItemAction, ::RPG::Client::ActionBarItemAction, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_4EF7EE967C804BC2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_13E4C012273E44EE(::Class_1_02D30900317D93FD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_13E4C012273E44EE_OFFSET))(this, a1);
	}

	::System::Void Method_1_66BB3DDEE5892004(::Class_1_E3A8B05AA1BBEE81* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E3A8B05AA1BBEE81*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_66BB3DDEE5892004_OFFSET))(this, a1);
	}

	::System::Void Method_1_5FF1AD7A9740A04E(::RPG::GameCore::LevelSingleInsertAbilityFinishOrAbort* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelSingleInsertAbilityFinishOrAbort*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_5FF1AD7A9740A04E_OFFSET))(this, a1);
	}

	::System::Void Method_1_99D5CA958F67E07B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_99D5CA958F67E07B_OFFSET))(this, a1);
	}

	::System::Void Method_1_D378160D37B885FA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_D378160D37B885FA_OFFSET))(this, a1);
	}

	::System::Void Method_1_638E6DBCCC16CF56(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_638E6DBCCC16CF56_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_03C4FFAD29DE0852_OFFSET))(this);
	}

	::System::Void Method_1_1E1FFD875CA8014A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_1E1FFD875CA8014A_OFFSET))(this);
	}

	::System::Void Method_1_FC5DBBC47C9FBE4C(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2, ::RPG::Client::ActionBarItemAction a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType, ::RPG::Client::ActionBarItemAction))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_FC5DBBC47C9FBE4C_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_7372A42B6CDBB2D4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_7372A42B6CDBB2D4_OFFSET))(this);
	}

	::System::Void Method_1_5C473BE8041724C5(::RPG::Client::ActionBarItemAction a1, ::Class_1_02D30900317D93FD* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarItemAction, ::Class_1_02D30900317D93FD*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_5C473BE8041724C5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C365440D57901CE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_C365440D57901CE0_OFFSET))(this);
	}

	::System::Void Method_1_E0BE3D62C174DC35(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_E0BE3D62C174DC35_OFFSET))(this, a1);
	}

	::System::Void Method_1_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_1_277F8930086803D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_277F8930086803D1_OFFSET))(this);
	}

	::System::Void Method_1_02F409FFDEF80079(::RPG::GameCore::TurnState a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_02F409FFDEF80079_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B8A8F4F120B2F6D5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_B8A8F4F120B2F6D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_78C62398E94F0FB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_78C62398E94F0FB1_OFFSET))(this);
	}

	::System::Void Method_1_69AEEBC33EBC6FD8(::RPG::GameCore::LevelEntityActionDelayChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityActionDelayChanged*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_69AEEBC33EBC6FD8_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_18517341B37F388E(::RPG::GameCore::LevelEntityActionDelayChanged* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LevelEntityActionDelayChanged*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_18517341B37F388E_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_6890B58682B199FA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_6890B58682B199FA_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_3BBF8E59AA8D6F49(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_3BBF8E59AA8D6F49_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8CAE99DA3CAE0987(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_8CAE99DA3CAE0987_OFFSET))(this, a1);
	}

	::Class_1_02D30900317D93FD* Method_1_59CB01CAF55B2A72(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_02D30900317D93FD*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_59CB01CAF55B2A72_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_9FF71CDFB06416C3(::RPG::GameCore::DynamicFloat* a1, ::Class_3_C1B871875244D398* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*, ::Class_3_C1B871875244D398*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_9FF71CDFB06416C3_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_9D394FE875DA46CB(::Class_1_02D30900317D93FD* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::Class_1_02D30900317D93FD*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_9D394FE875DA46CB_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_458CB092ED0C33C4(::Class_1_02D30900317D93FD* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3, ::Class_3_C1B871875244D398* a4, ::RPG::GameCore::ActionDelayPreshowConfig* a5)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::Class_1_02D30900317D93FD*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*, ::Class_3_C1B871875244D398*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_458CB092ED0C33C4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_A7209A5DB0DFF39D(::Class_1_02D30900317D93FD* a1, ::Class_3_C1B871875244D398* a2, ::RPG::GameCore::ActionDelayPreshowConfig* a3)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::Class_1_02D30900317D93FD*, ::Class_3_C1B871875244D398*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_A7209A5DB0DFF39D_OFFSET))(this, a1, a2, a3);
	}

	static ::RPG::GameCore::ActionDelayChangeTypeMask Method_1_7170A66B319FF1AD(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_7170A66B319FF1AD_OFFSET))(a1, a2);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_26313A6A151089EC(::Class_1_02D30900317D93FD* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3, ::Class_3_C1B871875244D398* a4, ::RPG::GameCore::ActionDelayPreshowConfig* a5)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::Class_1_02D30900317D93FD*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*, ::Class_3_C1B871875244D398*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_26313A6A151089EC_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_6CE3237F0F6F9268(::Class_1_02D30900317D93FD* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_02D30900317D93FD*, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_6CE3237F0F6F9268_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_70ED643A34CA9DEA(::Class_1_02D30900317D93FD* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3, ::Class_3_C1B871875244D398* a4, ::RPG::GameCore::ActionDelayPreshowConfig* a5)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::Class_1_02D30900317D93FD*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*, ::Class_3_C1B871875244D398*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_70ED643A34CA9DEA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_5908075118EE1662(::Class_1_02D30900317D93FD* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::Class_1_02D30900317D93FD*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_5908075118EE1662_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::SkillData* Method_1_D11A1892E89EAF75(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_D11A1892E89EAF75_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ActionDelayPreshowConfig* Method_1_CAE310167EC3EEEC(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a3)
	{
		return ((::RPG::GameCore::ActionDelayPreshowConfig*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_CAE310167EC3EEEC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D737B2CCEE988571(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a3, ::RPG::GameCore::ActionDelayPreshowConfig* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_D737B2CCEE988571_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_4D8F3554F74228C2(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a4, ::RPG::GameCore::ActionDelayPreshowConfig* a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::ActionDelayPreshowConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_4D8F3554F74228C2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_2322ECA94C4A608B(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_2322ECA94C4A608B_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_990BE90CD433F6F3(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2, ::System::Int32 a3)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_990BE90CD433F6F3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_88D3C3E996B61FE0(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_88D3C3E996B61FE0_OFFSET))(this, a1, a2);
	}

	::Class_1_02D30900317D93FD* Method_1_988117FBEBF96CAE(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_1_02D30900317D93FD*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_988117FBEBF96CAE_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_3F6EE5FA229DC75B()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_3F6EE5FA229DC75B_OFFSET))(this);
	}

	::System::Void Method_1_B0094ABA229A3E99(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a3, ::RPG::GameCore::ActionDelayPreshowConfig* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_B0094ABA229A3E99_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_4DE65AB3A4860CEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_4DE65AB3A4860CEB_OFFSET))(this);
	}

	::System::Void Method_1_8DC652D916C182B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_8DC652D916C182B2_OFFSET))(this);
	}

	::System::Void Method_1_5623ABF51F7C1011(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_5623ABF51F7C1011_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_022531A408F2D21A(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_022531A408F2D21A_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_84EAB34EABC7F508()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_84EAB34EABC7F508_OFFSET))(this);
	}

	::System::Boolean Method_1_ABEAB8AF7FE7565E(::Class_1_02D30900317D93FD* a1, ::Class_1_02D30900317D93FD* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_02D30900317D93FD*, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_ABEAB8AF7FE7565E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_85D05B57B598EAC7(::System::Collections::Generic::List_1<::Class_1_02D30900317D93FD*>* a1, ::System::Collections::Generic::List_1<::Class_1_02D30900317D93FD*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_02D30900317D93FD*>*, ::System::Collections::Generic::List_1<::Class_1_02D30900317D93FD*>*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_85D05B57B598EAC7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_609F20273598CA54(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_609F20273598CA54_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2EA1D7D04E30AB42(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_2EA1D7D04E30AB42_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_191F7866D25E9ABE(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_191F7866D25E9ABE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9FD7402D660805EB(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_9FD7402D660805EB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_955AA2AB54923822(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_955AA2AB54923822_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A44A18C9451109E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_A44A18C9451109E4_OFFSET))(this);
	}

	::System::Void Method_1_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_1_19B91D58E02869BC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_19B91D58E02869BC_1_OFFSET))(this);
	}

	::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_1_17BD30EFE8176014_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_17BD30EFE8176014_1_OFFSET))(this);
	}

	::RPG::Client::ActionBarItemUIStyle Method_1_A2269A12D48D0830(::Class_1_02D30900317D93FD* a1)
	{
		return ((::RPG::Client::ActionBarItemUIStyle(*)(::PVOID, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_A2269A12D48D0830_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_83A4158C7436AC75(::Class_1_02D30900317D93FD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_83A4158C7436AC75_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_93D0C7B828CDE9B1(::Class_1_02D30900317D93FD* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_02D30900317D93FD*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_93D0C7B828CDE9B1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_AC13E1A23375417A(::Class_1_02D30900317D93FD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_AC13E1A23375417A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E569572C3C19C4BD(::RPG::GameCore::BattleEventDataComponent* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_E569572C3C19C4BD_OFFSET))(this, a1);
	}

	::Class_1_02D30900317D93FD* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_02D30900317D93FD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::Class_1_02D30900317D93FD* Method_1_B1B7BF5C3B0F210E(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2)
	{
		return ((::Class_1_02D30900317D93FD*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_B1B7BF5C3B0F210E_OFFSET))(this, a1, a2);
	}

	::Class_1_02D30900317D93FD* Method_1_9FB6AEF797312662(::System::Collections::Generic::IEnumerable_1<::Class_1_02D30900317D93FD*>* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::ActionItemType a3)
	{
		return ((::Class_1_02D30900317D93FD*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_02D30900317D93FD*>*, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_9FB6AEF797312662_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_0E77C9B7B4C150CB(::Class_1_02D30900317D93FD* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::ActionItemType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_02D30900317D93FD*, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD_METHOD_1_0E77C9B7B4C150CB_OFFSET))(this, a1, a2, a3);
	}

	static ::System::ValueTuple_3<::RPG::GameCore::FixPoint, ::System::Int32, ::System::Boolean> _SkillPreViewSortByActionDelayCmp_g___GetOverrideValue_21_0(::Class_1_02D30900317D93FD* item)
	{
		return ((::System::ValueTuple_3<::RPG::GameCore::FixPoint, ::System::Int32, ::System::Boolean>(*)(::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_1_7D0225C5AD8313DD__SKILLPREVIEWSORTBYACTIONDELAYCMP_G___GETOVERRIDEVALUE_21_0_OFFSET))(item);
	}
};
