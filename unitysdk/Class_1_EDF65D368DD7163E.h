#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionBarItemAction.h"
#include "unitysdk/RPG/Client/ActionBarItemUIStyle.h"
#include "unitysdk/RPG/Client/ActionItemType.h"
#include "unitysdk/RPG/GameCore/ActionBarType.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeTypeMask.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_152140BAFD2DB102;
class Class_1_1CB8CBC69B962B41;
class Class_1_815CE3ECBEA68E49;
class Class_1_ABFB5B7BFEBBC8F7;
class Class_1_B5F93263C61C75CE;
class Class_1_D169CE66CF419D26;
class Class_1_DDDB57AA67C3A9EA;
class Class_3_E03EC9D105CCFA3C;
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

#define CLASS_1_EDF65D368DD7163E_METHOD_1_008EF2AC8EB0C3F3_OFFSET UNITYSDK_OFFSET(0x16304220)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_00BDF353F3440563_OFFSET UNITYSDK_OFFSET(0x163099A0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x162FF240)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_0E77C9B7B4C150CB_OFFSET UNITYSDK_OFFSET(0x1630BFC0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_0F1CD37E2F5B4A75_OFFSET UNITYSDK_OFFSET(0x16305B80)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_126AC2A49218E7E6_OFFSET UNITYSDK_OFFSET(0x16302200)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_165189AC13F10981_OFFSET UNITYSDK_OFFSET(0x16304D60)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_17BF0C66F59050B6_OFFSET UNITYSDK_OFFSET(0x162FE320)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_19B91D58E02869BC_1_OFFSET UNITYSDK_OFFSET(0x1630A8E0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x1630A890)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_19EEA5F0263FDCD2_OFFSET UNITYSDK_OFFSET(0x162FECB0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_1C4DC5C9C8B80313_OFFSET UNITYSDK_OFFSET(0x1630BA90)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_22A4CF05073F4843_OFFSET UNITYSDK_OFFSET(0x16301B80)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_26F2ADE6CF3F0469_OFFSET UNITYSDK_OFFSET(0x16300610)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_277F8930086803D1_OFFSET UNITYSDK_OFFSET(0x16303820)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_27AC1BC95C3C9F16_OFFSET UNITYSDK_OFFSET(0x163047D0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_2934968982D645E9_OFFSET UNITYSDK_OFFSET(0x163097B0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_2C16558AE7971A62_OFFSET UNITYSDK_OFFSET(0x163043E0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_2F820B7CD0C616C8_OFFSET UNITYSDK_OFFSET(0x16301950)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_30E2BC80842FB0E0_OFFSET UNITYSDK_OFFSET(0x16308A50)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_37AACA8481A4B501_OFFSET UNITYSDK_OFFSET(0x163034F0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_39B0ACB327760190_OFFSET UNITYSDK_OFFSET(0x163045B0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_3BBF8E59AA8D6F49_OFFSET UNITYSDK_OFFSET(0x16304740)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_3CDB331EC7094406_OFFSET UNITYSDK_OFFSET(0x163011A0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_41F4BE4D485376D6_OFFSET UNITYSDK_OFFSET(0x162FEB70)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_458CB092ED0C33C4_OFFSET UNITYSDK_OFFSET(0x163053C0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_461D639BFE49CBBC_OFFSET UNITYSDK_OFFSET(0x16302FE0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_46D8277042FF7D7A_OFFSET UNITYSDK_OFFSET(0x162FEFF0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_49E462D3465C9E9A_OFFSET UNITYSDK_OFFSET(0x16301F40)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_4C95E683350C5926_OFFSET UNITYSDK_OFFSET(0x16306380)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_4D606E0EBD8E195C_OFFSET UNITYSDK_OFFSET(0x163019C0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_4EC9FA86A1490C1D_OFFSET UNITYSDK_OFFSET(0x163009B0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1630A980)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x16303B40)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_62D75ADFFEE4BD8B_OFFSET UNITYSDK_OFFSET(0x16301C90)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_64D1E624C8F98A83_OFFSET UNITYSDK_OFFSET(0x162FFB60)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_69AEEBC33EBC6FD8_OFFSET UNITYSDK_OFFSET(0x16304350)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_6B03E421D814E0C7_OFFSET UNITYSDK_OFFSET(0x162FFBD0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_70ED643A34CA9DEA_OFFSET UNITYSDK_OFFSET(0x163066B0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_780CA8193D53597D_OFFSET UNITYSDK_OFFSET(0x162ED8B0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_785D4DC6FACE1477_OFFSET UNITYSDK_OFFSET(0x163010E0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_7C30CD9FD658A733_OFFSET UNITYSDK_OFFSET(0x162FEA50)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_7DC528F6CA0FC11B_OFFSET UNITYSDK_OFFSET(0x163085C0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_7EF0C6D45831C337_OFFSET UNITYSDK_OFFSET(0x16300210)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_83A4158C7436AC75_OFFSET UNITYSDK_OFFSET(0x1630B600)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_939B0A8FB671683E_OFFSET UNITYSDK_OFFSET(0x16301D30)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_93D0C7B828CDE9B1_OFFSET UNITYSDK_OFFSET(0x1630B970)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_95FDCECFADD0DC60_OFFSET UNITYSDK_OFFSET(0x16300800)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_97BE07E876064FAC_OFFSET UNITYSDK_OFFSET(0x16309DC0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_9839DFE3C10E4654_OFFSET UNITYSDK_OFFSET(0x162FE8F0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_988117FBEBF96CAE_OFFSET UNITYSDK_OFFSET(0x163088C0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_9CDE45C46934F55D_OFFSET UNITYSDK_OFFSET(0x16302260)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_9D2E20254EB84C31_OFFSET UNITYSDK_OFFSET(0x1630AA10)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_9FD7402D660805EB_OFFSET UNITYSDK_OFFSET(0x16301E70)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_9FF71CDFB06416C3_OFFSET UNITYSDK_OFFSET(0x16304C20)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_A27E324BF51283BD_OFFSET UNITYSDK_OFFSET(0x16306820)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_A452EAC691095B7E_OFFSET UNITYSDK_OFFSET(0x16302550)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_A56385E6706FA723_OFFSET UNITYSDK_OFFSET(0x163042A0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_A7209A5DB0DFF39D_OFFSET UNITYSDK_OFFSET(0x16305520)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_A91B42031AE1AC4B_OFFSET UNITYSDK_OFFSET(0x162FF320)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_ABEAB8AF7FE7565E_OFFSET UNITYSDK_OFFSET(0x1630A600)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_AF9B73C9965C6444_OFFSET UNITYSDK_OFFSET(0x16308DA0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_B1FF135929C0FFA9_OFFSET UNITYSDK_OFFSET(0x16308790)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_B4D53A8A6A42C982_OFFSET UNITYSDK_OFFSET(0x16300DB0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_B5B6A4F2781B1BF6_OFFSET UNITYSDK_OFFSET(0x16301410)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_B61FF41D45EBDE24_OFFSET UNITYSDK_OFFSET(0x16301700)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_B6710022A8D82A42_OFFSET UNITYSDK_OFFSET(0x1630A730)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_B93DF6D715B20FC5_OFFSET UNITYSDK_OFFSET(0x16303D90)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_C2389939D782476E_OFFSET UNITYSDK_OFFSET(0x16300940)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_C67FBE0CC9945EF8_OFFSET UNITYSDK_OFFSET(0x1630B430)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_C9942F727476DDAE_OFFSET UNITYSDK_OFFSET(0x163004A0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_CAB09625B03CCCA7_OFFSET UNITYSDK_OFFSET(0x16301AE0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_D0ACB47B641DF879_OFFSET UNITYSDK_OFFSET(0x1630A930)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_D310B64689A3BDA7_OFFSET UNITYSDK_OFFSET(0x16308470)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_D737B2CCEE988571_OFFSET UNITYSDK_OFFSET(0x16306DB0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_DDFCBBB54CA12CE0_OFFSET UNITYSDK_OFFSET(0x16308F70)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_DE45EA3A177BC33B_OFFSET UNITYSDK_OFFSET(0x1630A820)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_E26C99C52BC1E654_OFFSET UNITYSDK_OFFSET(0x16302CF0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_E3030E7CD696276D_OFFSET UNITYSDK_OFFSET(0x16304B20)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_E39EA2E6DFDD6DC4_OFFSET UNITYSDK_OFFSET(0x16302880)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_E4068D85680AB655_OFFSET UNITYSDK_OFFSET(0x16309ED0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_E50DA0335493ED6E_OFFSET UNITYSDK_OFFSET(0x16307D00)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_E569572C3C19C4BD_OFFSET UNITYSDK_OFFSET(0x1630B770)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_E86E487990404954_OFFSET UNITYSDK_OFFSET(0x1630A7C0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_E89963FC215D1A6A_OFFSET UNITYSDK_OFFSET(0x1630B680)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_E998A3C6F1954A8C_OFFSET UNITYSDK_OFFSET(0x16306780)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_ECB6B27E7BA748DA_OFFSET UNITYSDK_OFFSET(0x163068A0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_F0C19A966837ACC5_OFFSET UNITYSDK_OFFSET(0x163082E0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_F576669F3778E124_OFFSET UNITYSDK_OFFSET(0x16304A40)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_F750B196B9D41802_OFFSET UNITYSDK_OFFSET(0x16305EB0)
#define CLASS_1_EDF65D368DD7163E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1630C060)
#define CLASS_1_EDF65D368DD7163E__CTOR_OFFSET UNITYSDK_OFFSET(0x162FE370)
#define CLASS_1_EDF65D368DD7163E__SKILLPREVIEWSORTBYACTIONDELAYCMP_G___GETOVERRIDEVALUE_21_0_OFFSET UNITYSDK_OFFSET(0x162FFAD0)

inline static constexpr unsigned int Class_1_EDF65D368DD7163E_TypeDefinitionIndex = 68090;

class Class_1_EDF65D368DD7163E : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EDF65D368DD7163E_TypeDefinitionIndex)->GetStaticField(0x29480);
	}
	// static const ::System::String* Field_1_1; // 0x0
	::System::Collections::Generic::Queue_1<::RPG::GameCore::LevelEntityActionDelayChanged*>* Field_1_2; // 0x10
	::System::Collections::Generic::HashSet_1<::RPG::Client::ActionBarItemUIStyle>* Field_1_3; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* Field_1_5; // 0x28
	::Class_1_DDDB57AA67C3A9EA* Field_1_6; // 0x30
	::Class_1_815CE3ECBEA68E49* Field_1_7; // 0x38
	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Field_1_8; // 0x40
	::RPG::GameCore::TurnBasedGameMode* Field_1_9; // 0x48
	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Field_1_10; // 0x50
	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Field_1_11; // 0x58
	::Class_1_ABFB5B7BFEBBC8F7* Field_1_12; // 0x60
	::Class_1_B5F93263C61C75CE* Field_1_13; // 0x68
	::Class_1_D169CE66CF419D26* Field_1_14; // 0x70
	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Field_1_15; // 0x78
	::System::Boolean Field_1_16; // 0x80
	::System::Boolean Field_1_17; // 0x81

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::Class_1_B5F93263C61C75CE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::Class_1_B5F93263C61C75CE*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Method_1_17BF0C66F59050B6()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_17BF0C66F59050B6_OFFSET))(this);
	}

	::System::Void Method_1_9839DFE3C10E4654(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_9839DFE3C10E4654_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C30CD9FD658A733(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_7C30CD9FD658A733_OFFSET))(this, a1);
	}

	::System::Void Method_1_41F4BE4D485376D6(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_41F4BE4D485376D6_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A91B42031AE1AC4B(::Class_1_DDDB57AA67C3A9EA* a1, ::Class_1_DDDB57AA67C3A9EA* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_A91B42031AE1AC4B_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_64D1E624C8F98A83(::Class_1_DDDB57AA67C3A9EA* a1, ::Class_1_DDDB57AA67C3A9EA* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_64D1E624C8F98A83_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_6B03E421D814E0C7(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_6B03E421D814E0C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_C9942F727476DDAE(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_C9942F727476DDAE_OFFSET))(this, a1);
	}

	::System::Void Method_1_26F2ADE6CF3F0469(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_26F2ADE6CF3F0469_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95FDCECFADD0DC60(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_95FDCECFADD0DC60_OFFSET))(this, a1);
	}

	::System::Void Method_1_C2389939D782476E(::Class_1_152140BAFD2DB102* a1, ::Class_1_152140BAFD2DB102* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_152140BAFD2DB102*, ::Class_1_152140BAFD2DB102*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_C2389939D782476E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B4D53A8A6A42C982(::System::Int32 a1, ::Class_1_DDDB57AA67C3A9EA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_B4D53A8A6A42C982_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_785D4DC6FACE1477(::RPG::GameCore::LevelTurnUltraSkillEnd* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillEnd*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_785D4DC6FACE1477_OFFSET))(this, a1);
	}

	::System::Void Method_1_B5B6A4F2781B1BF6(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_B5B6A4F2781B1BF6_OFFSET))(this, a1);
	}

	::System::Void Method_1_B61FF41D45EBDE24(::Class_1_1CB8CBC69B962B41* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CB8CBC69B962B41*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_B61FF41D45EBDE24_OFFSET))(this, a1);
	}

	::System::Void Method_1_2F820B7CD0C616C8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_2F820B7CD0C616C8_OFFSET))(this, a1);
	}

	::System::Void Method_1_4D606E0EBD8E195C(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_4D606E0EBD8E195C_OFFSET))(this, a1);
	}

	::System::Void Method_1_46D8277042FF7D7A(::Class_1_DDDB57AA67C3A9EA* a1, ::RPG::Client::ActionBarItemAction a2, ::RPG::Client::ActionBarItemAction a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::RPG::Client::ActionBarItemAction, ::RPG::Client::ActionBarItemAction, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_46D8277042FF7D7A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_CAB09625B03CCCA7(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_CAB09625B03CCCA7_OFFSET))(this, a1);
	}

	::System::Void Method_1_62D75ADFFEE4BD8B(::Class_1_1CB8CBC69B962B41* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CB8CBC69B962B41*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_62D75ADFFEE4BD8B_OFFSET))(this, a1);
	}

	::System::Void Method_1_49E462D3465C9E9A(::RPG::GameCore::LevelSingleInsertAbilityFinishOrAbort* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelSingleInsertAbilityFinishOrAbort*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_49E462D3465C9E9A_OFFSET))(this, a1);
	}

	::System::Void Method_1_126AC2A49218E7E6(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_126AC2A49218E7E6_OFFSET))(this, a1);
	}

	::System::Void Method_1_A452EAC691095B7E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_A452EAC691095B7E_OFFSET))(this, a1);
	}

	::System::Void Method_1_E39EA2E6DFDD6DC4(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_E39EA2E6DFDD6DC4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E26C99C52BC1E654()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_E26C99C52BC1E654_OFFSET))(this);
	}

	::System::Void Method_1_461D639BFE49CBBC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_461D639BFE49CBBC_OFFSET))(this);
	}

	::System::Void Method_1_9CDE45C46934F55D(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2, ::RPG::Client::ActionBarItemAction a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType, ::RPG::Client::ActionBarItemAction))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_9CDE45C46934F55D_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_4EC9FA86A1490C1D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_4EC9FA86A1490C1D_OFFSET))(this);
	}

	::System::Void Method_1_22A4CF05073F4843(::RPG::Client::ActionBarItemAction a1, ::Class_1_DDDB57AA67C3A9EA* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarItemAction, ::Class_1_DDDB57AA67C3A9EA*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_22A4CF05073F4843_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_37AACA8481A4B501()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_37AACA8481A4B501_OFFSET))(this);
	}

	::System::Void Method_1_7EF0C6D45831C337(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_7EF0C6D45831C337_OFFSET))(this, a1);
	}

	::System::Void Method_1_277F8930086803D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_277F8930086803D1_OFFSET))(this);
	}

	::System::Void Method_1_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_1_B93DF6D715B20FC5(::RPG::GameCore::TurnState a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_B93DF6D715B20FC5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3CDB331EC7094406(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_3CDB331EC7094406_OFFSET))(this, a1);
	}

	::System::Void Method_1_A56385E6706FA723()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_A56385E6706FA723_OFFSET))(this);
	}

	::System::Void Method_1_69AEEBC33EBC6FD8(::RPG::GameCore::LevelEntityActionDelayChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityActionDelayChanged*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_69AEEBC33EBC6FD8_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_2C16558AE7971A62(::RPG::GameCore::LevelEntityActionDelayChanged* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LevelEntityActionDelayChanged*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_2C16558AE7971A62_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_39B0ACB327760190(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_39B0ACB327760190_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_3BBF8E59AA8D6F49(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_3BBF8E59AA8D6F49_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_27AC1BC95C3C9F16(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_27AC1BC95C3C9F16_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F576669F3778E124(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_F576669F3778E124_OFFSET))(this, a1);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_1_E3030E7CD696276D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_E3030E7CD696276D_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_9FF71CDFB06416C3(::RPG::GameCore::DynamicFloat* a1, ::Class_3_E03EC9D105CCFA3C* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*, ::Class_3_E03EC9D105CCFA3C*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_9FF71CDFB06416C3_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_165189AC13F10981(::Class_1_DDDB57AA67C3A9EA* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_165189AC13F10981_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_458CB092ED0C33C4(::Class_1_DDDB57AA67C3A9EA* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3, ::Class_3_E03EC9D105CCFA3C* a4, ::RPG::GameCore::ActionDelayPreshowConfig* a5)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*, ::Class_3_E03EC9D105CCFA3C*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_458CB092ED0C33C4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_A7209A5DB0DFF39D(::Class_1_DDDB57AA67C3A9EA* a1, ::Class_3_E03EC9D105CCFA3C* a2, ::RPG::GameCore::ActionDelayPreshowConfig* a3)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::Class_3_E03EC9D105CCFA3C*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_A7209A5DB0DFF39D_OFFSET))(this, a1, a2, a3);
	}

	static ::RPG::GameCore::ActionDelayChangeTypeMask Method_1_0F1CD37E2F5B4A75(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_0F1CD37E2F5B4A75_OFFSET))(a1, a2);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_F750B196B9D41802(::Class_1_DDDB57AA67C3A9EA* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3, ::Class_3_E03EC9D105CCFA3C* a4, ::RPG::GameCore::ActionDelayPreshowConfig* a5)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*, ::Class_3_E03EC9D105CCFA3C*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_F750B196B9D41802_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_4C95E683350C5926(::Class_1_DDDB57AA67C3A9EA* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_4C95E683350C5926_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_70ED643A34CA9DEA(::Class_1_DDDB57AA67C3A9EA* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3, ::Class_3_E03EC9D105CCFA3C* a4, ::RPG::GameCore::ActionDelayPreshowConfig* a5)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*, ::Class_3_E03EC9D105CCFA3C*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_70ED643A34CA9DEA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_E998A3C6F1954A8C(::Class_1_DDDB57AA67C3A9EA* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_E998A3C6F1954A8C_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::SkillData* Method_1_A27E324BF51283BD(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_A27E324BF51283BD_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ActionDelayPreshowConfig* Method_1_ECB6B27E7BA748DA(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a3)
	{
		return ((::RPG::GameCore::ActionDelayPreshowConfig*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_ECB6B27E7BA748DA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D737B2CCEE988571(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a3, ::RPG::GameCore::ActionDelayPreshowConfig* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_D737B2CCEE988571_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E50DA0335493ED6E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a4, ::RPG::GameCore::ActionDelayPreshowConfig* a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::ActionDelayPreshowConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_E50DA0335493ED6E_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_D310B64689A3BDA7(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_D310B64689A3BDA7_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_7DC528F6CA0FC11B(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2, ::System::Int32 a3)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_7DC528F6CA0FC11B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B1FF135929C0FFA9(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_B1FF135929C0FFA9_OFFSET))(this, a1, a2);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_1_988117FBEBF96CAE(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_988117FBEBF96CAE_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_F0C19A966837ACC5()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_F0C19A966837ACC5_OFFSET))(this);
	}

	::System::Void Method_1_30E2BC80842FB0E0(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a3, ::RPG::GameCore::ActionDelayPreshowConfig* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_30E2BC80842FB0E0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_AF9B73C9965C6444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_AF9B73C9965C6444_OFFSET))(this);
	}

	::System::Void Method_1_DDFCBBB54CA12CE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_DDFCBBB54CA12CE0_OFFSET))(this);
	}

	::System::Void Method_1_2934968982D645E9(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_2934968982D645E9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_00BDF353F3440563(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_00BDF353F3440563_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_97BE07E876064FAC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_97BE07E876064FAC_OFFSET))(this);
	}

	::System::Boolean Method_1_ABEAB8AF7FE7565E(::Class_1_DDDB57AA67C3A9EA* a1, ::Class_1_DDDB57AA67C3A9EA* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_ABEAB8AF7FE7565E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E4068D85680AB655(::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* a1, ::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*, ::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_E4068D85680AB655_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_B6710022A8D82A42(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_B6710022A8D82A42_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E86E487990404954(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_E86E487990404954_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DE45EA3A177BC33B(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_DE45EA3A177BC33B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9FD7402D660805EB(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_9FD7402D660805EB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_008EF2AC8EB0C3F3(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_008EF2AC8EB0C3F3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_19EEA5F0263FDCD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_19EEA5F0263FDCD2_OFFSET))(this);
	}

	::System::Void Method_1_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_1_19B91D58E02869BC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_19B91D58E02869BC_1_OFFSET))(this);
	}

	::System::Void Method_1_D0ACB47B641DF879()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_D0ACB47B641DF879_OFFSET))(this);
	}

	::System::Void Method_1_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_50131F4CF014469C_OFFSET))(this);
	}

	::RPG::Client::ActionBarItemUIStyle Method_1_9D2E20254EB84C31(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::RPG::Client::ActionBarItemUIStyle(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_9D2E20254EB84C31_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E89963FC215D1A6A(::RPG::GameCore::ActionBarType a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::RPG::Client::ActionBarItemUIStyle& a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActionBarType, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::RPG::Client::ActionBarItemUIStyle&))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_E89963FC215D1A6A_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_1_83A4158C7436AC75(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_83A4158C7436AC75_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_93D0C7B828CDE9B1(::Class_1_DDDB57AA67C3A9EA* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_93D0C7B828CDE9B1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C67FBE0CC9945EF8(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_C67FBE0CC9945EF8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E569572C3C19C4BD(::RPG::GameCore::BattleEventDataComponent* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_E569572C3C19C4BD_OFFSET))(this, a1);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_1_939B0A8FB671683E()
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_939B0A8FB671683E_OFFSET))(this);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_1_780CA8193D53597D(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2)
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_780CA8193D53597D_OFFSET))(this, a1, a2);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_1_1C4DC5C9C8B80313(::System::Collections::Generic::IEnumerable_1<::Class_1_DDDB57AA67C3A9EA*>* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::ActionItemType a3)
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_DDDB57AA67C3A9EA*>*, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_1C4DC5C9C8B80313_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_0E77C9B7B4C150CB(::Class_1_DDDB57AA67C3A9EA* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::ActionItemType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_0E77C9B7B4C150CB_OFFSET))(this, a1, a2, a3);
	}

	static ::System::ValueTuple_3<::RPG::GameCore::FixPoint, ::System::Int32, ::System::Boolean> _SkillPreViewSortByActionDelayCmp_g___GetOverrideValue_21_0(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::ValueTuple_3<::RPG::GameCore::FixPoint, ::System::Int32, ::System::Boolean>(*)(::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E__SKILLPREVIEWSORTBYACTIONDELAYCMP_G___GETOVERRIDEVALUE_21_0_OFFSET))(a1);
	}
};
