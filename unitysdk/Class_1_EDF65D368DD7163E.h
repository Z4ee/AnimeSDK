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
class Class_3_47866C0C90C73674;
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

#define CLASS_1_EDF65D368DD7163E_METHOD_1_00BDF353F3440563_OFFSET UNITYSDK_OFFSET(0x145A2EC0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_015C76589A47DD77_OFFSET UNITYSDK_OFFSET(0x1459A600)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x145998F0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_0C490FF1F071E8D4_OFFSET UNITYSDK_OFFSET(0x1459A8C0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_0D7F0C9DBEFD8449_OFFSET UNITYSDK_OFFSET(0x1459CE20)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_0E77C9B7B4C150CB_OFFSET UNITYSDK_OFFSET(0x145A53C0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_0F1CD37E2F5B4A75_OFFSET UNITYSDK_OFFSET(0x1459F740)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_19B91D58E02869BC_1_OFFSET UNITYSDK_OFFSET(0x145A3E70)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x145A3E20)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_19EEA5F0263FDCD2_OFFSET UNITYSDK_OFFSET(0x14599420)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_2C16558AE7971A62_OFFSET UNITYSDK_OFFSET(0x1459E0D0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_2D467F83084DDE91_OFFSET UNITYSDK_OFFSET(0x145A0200)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_2E13BAE8BCA1ADBD_OFFSET UNITYSDK_OFFSET(0x1459C2D0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_2F820B7CD0C616C8_OFFSET UNITYSDK_OFFSET(0x1459B8B0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_31445EE738731A08_OFFSET UNITYSDK_OFFSET(0x145A2C90)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_3549C51E57874708_OFFSET UNITYSDK_OFFSET(0x145992A0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_39B0ACB327760190_OFFSET UNITYSDK_OFFSET(0x1459E2A0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_3BBF8E59AA8D6F49_OFFSET UNITYSDK_OFFSET(0x1459E430)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0x1459D830)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_44EDAB8C59341033_OFFSET UNITYSDK_OFFSET(0x1459E4C0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_458CB092ED0C33C4_OFFSET UNITYSDK_OFFSET(0x1459EFC0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_4C95E683350C5926_OFFSET UNITYSDK_OFFSET(0x1459FE00)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_4D606E0EBD8E195C_OFFSET UNITYSDK_OFFSET(0x1459B920)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_504ADCE2087906E3_OFFSET UNITYSDK_OFFSET(0x145A3FA0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_5C473BE8041724C5_OFFSET UNITYSDK_OFFSET(0x1459BAE0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_62D75ADFFEE4BD8B_OFFSET UNITYSDK_OFFSET(0x1459BC00)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_6326CBDDA7026EEB_OFFSET UNITYSDK_OFFSET(0x1459FA70)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_64D1E624C8F98A83_OFFSET UNITYSDK_OFFSET(0x1459A200)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_69AEEBC33EBC6FD8_OFFSET UNITYSDK_OFFSET(0x1459E040)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_6C9963159B9A9A14_OFFSET UNITYSDK_OFFSET(0x1459B140)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_6CA5D7728163F40B_OFFSET UNITYSDK_OFFSET(0x1459B080)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_70ED643A34CA9DEA_OFFSET UNITYSDK_OFFSET(0x145A0130)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_73E2F9FF1BD15EB9_OFFSET UNITYSDK_OFFSET(0x1459E9C0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_77A0990B52E748BC_OFFSET UNITYSDK_OFFSET(0x14598A80)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_7C30CD9FD658A733_OFFSET UNITYSDK_OFFSET(0x14599180)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_7DC528F6CA0FC11B_OFFSET UNITYSDK_OFFSET(0x145A1C30)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_7F29568EA964E563_OFFSET UNITYSDK_OFFSET(0x145A3EC0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_80CE7F51A2F001D1_OFFSET UNITYSDK_OFFSET(0x1459BDF0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_83A4158C7436AC75_OFFSET UNITYSDK_OFFSET(0x145A4B90)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_84D7BABF9B8465E4_OFFSET UNITYSDK_OFFSET(0x1459DB20)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_8937FE4342C52575_OFFSET UNITYSDK_OFFSET(0x14599760)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_8BB519DC9AC72B67_OFFSET UNITYSDK_OFFSET(0x1459A270)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_8D54FDC80FA22AA7_OFFSET UNITYSDK_OFFSET(0x1459C000)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x1459D4D0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_93D0C7B828CDE9B1_OFFSET UNITYSDK_OFFSET(0x145A4F00)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_95FDCECFADD0DC60_OFFSET UNITYSDK_OFFSET(0x1459AA10)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_97BE07E876064FAC_OFFSET UNITYSDK_OFFSET(0x145A32E0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_9839DFE3C10E4654_OFFSET UNITYSDK_OFFSET(0x14599020)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_988117FBEBF96CAE_OFFSET UNITYSDK_OFFSET(0x145A1F20)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_9FB6AEF797312662_OFFSET UNITYSDK_OFFSET(0x145A5020)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_9FD7402D660805EB_OFFSET UNITYSDK_OFFSET(0x1459BD20)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_9FF71CDFB06416C3_OFFSET UNITYSDK_OFFSET(0x1459E880)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_A27E324BF51283BD_OFFSET UNITYSDK_OFFSET(0x145A02A0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_A31F1EB461D394E6_OFFSET UNITYSDK_OFFSET(0x145A20B0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_A7209A5DB0DFF39D_OFFSET UNITYSDK_OFFSET(0x1459F120)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_A7425E370459226D_OFFSET UNITYSDK_OFFSET(0x1459DF10)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_A91B42031AE1AC4B_OFFSET UNITYSDK_OFFSET(0x145999D0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0x145A3F10)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_ABEAB8AF7FE7565E_OFFSET UNITYSDK_OFFSET(0x145A3B90)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_AC13E1A23375417A_OFFSET UNITYSDK_OFFSET(0x145A4990)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_AE2ADF6C0A456481_OFFSET UNITYSDK_OFFSET(0x145A1A20)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x1459BC90)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_AF9B73C9965C6444_OFFSET UNITYSDK_OFFSET(0x145A22B0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_B1B7BF5C3B0F210E_OFFSET UNITYSDK_OFFSET(0x14588310)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_B1FF135929C0FFA9_OFFSET UNITYSDK_OFFSET(0x145A1E00)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_B61FF41D45EBDE24_OFFSET UNITYSDK_OFFSET(0x1459B670)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_B6710022A8D82A42_OFFSET UNITYSDK_OFFSET(0x145A3CC0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_BF5298D69EB7A1A8_OFFSET UNITYSDK_OFFSET(0x1459AB40)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_C10BB4B3899F9941_OFFSET UNITYSDK_OFFSET(0x1459C6E0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_C802CB0A6FE19505_OFFSET UNITYSDK_OFFSET(0x1459C060)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_C9942F727476DDAE_OFFSET UNITYSDK_OFFSET(0x1459A750)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_CAB09625B03CCCA7_OFFSET UNITYSDK_OFFSET(0x1459BA40)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_CC603890614727A6_OFFSET UNITYSDK_OFFSET(0x1459E6A0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0x1459D2D0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_D310B64689A3BDA7_OFFSET UNITYSDK_OFFSET(0x145A1AE0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_D737B2CCEE988571_OFFSET UNITYSDK_OFFSET(0x145A0750)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_D7DF01E60A85C9D4_OFFSET UNITYSDK_OFFSET(0x145A33F0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_DDFCBBB54CA12CE0_OFFSET UNITYSDK_OFFSET(0x145A2460)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_DE45EA3A177BC33B_OFFSET UNITYSDK_OFFSET(0x145A3DB0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_E26C99C52BC1E654_OFFSET UNITYSDK_OFFSET(0x1459CB30)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_E3030E7CD696276D_OFFSET UNITYSDK_OFFSET(0x1459E780)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_E50DA0335493ED6E_OFFSET UNITYSDK_OFFSET(0x145A1440)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_E569572C3C19C4BD_OFFSET UNITYSDK_OFFSET(0x145A4D00)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_E6436605D423BB9B_OFFSET UNITYSDK_OFFSET(0x1459ABB0)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_E6A464C09590E175_OFFSET UNITYSDK_OFFSET(0x1459B440)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_E86E487990404954_OFFSET UNITYSDK_OFFSET(0x145A3D50)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_E89963FC215D1A6A_OFFSET UNITYSDK_OFFSET(0x145A4C10)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_EBBC49A9109F0F2F_OFFSET UNITYSDK_OFFSET(0x1459DF90)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_ECB6B27E7BA748DA_OFFSET UNITYSDK_OFFSET(0x145A0320)
#define CLASS_1_EDF65D368DD7163E_METHOD_1_FCC72CF53D0D8480_OFFSET UNITYSDK_OFFSET(0x1459AF00)
#define CLASS_1_EDF65D368DD7163E__CCTOR_OFFSET UNITYSDK_OFFSET(0x145A5460)
#define CLASS_1_EDF65D368DD7163E__CTOR_OFFSET UNITYSDK_OFFSET(0x14598AA0)
#define CLASS_1_EDF65D368DD7163E__SKILLPREVIEWSORTBYACTIONDELAYCMP_G___GETOVERRIDEVALUE_21_0_OFFSET UNITYSDK_OFFSET(0x1459A170)

inline static constexpr unsigned int Class_1_EDF65D368DD7163E_TypeDefinitionIndex = 66654;

class Class_1_EDF65D368DD7163E : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EDF65D368DD7163E_TypeDefinitionIndex)->GetStaticField(0x241C0);
	}
	// static const ::System::String* Field_1_1; // 0x0
	::System::Collections::Generic::Queue_1<::RPG::GameCore::LevelEntityActionDelayChanged*>* Field_1_2; // 0x10
	::Class_1_D169CE66CF419D26* Field_1_3; // 0x18
	::RPG::GameCore::TurnBasedGameMode* Field_1_4; // 0x20
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_5; // 0x28
	::System::Collections::Generic::HashSet_1<::RPG::Client::ActionBarItemUIStyle>* Field_1_6; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* Field_1_7; // 0x38
	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Field_1_8; // 0x40
	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Field_1_9; // 0x48
	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Field_1_10; // 0x50
	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Field_1_11; // 0x58
	::Class_1_B5F93263C61C75CE* Field_1_12; // 0x60
	::Class_1_DDDB57AA67C3A9EA* Field_1_13; // 0x68
	::Class_1_ABFB5B7BFEBBC8F7* Field_1_14; // 0x70
	::Class_1_815CE3ECBEA68E49* Field_1_15; // 0x78
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

	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* Method_1_77A0990B52E748BC()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_77A0990B52E748BC_OFFSET))(this);
	}

	::System::Void Method_1_9839DFE3C10E4654(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_9839DFE3C10E4654_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C30CD9FD658A733(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_7C30CD9FD658A733_OFFSET))(this, a1);
	}

	::System::Void Method_1_3549C51E57874708(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_3549C51E57874708_OFFSET))(this, a1);
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

	::System::Void Method_1_8BB519DC9AC72B67(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_8BB519DC9AC72B67_OFFSET))(this, a1);
	}

	::System::Void Method_1_C9942F727476DDAE(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_C9942F727476DDAE_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C490FF1F071E8D4(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_0C490FF1F071E8D4_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95FDCECFADD0DC60(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_95FDCECFADD0DC60_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF5298D69EB7A1A8(::Class_1_152140BAFD2DB102* a1, ::Class_1_152140BAFD2DB102* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_152140BAFD2DB102*, ::Class_1_152140BAFD2DB102*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_BF5298D69EB7A1A8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FCC72CF53D0D8480(::System::Int32 a1, ::Class_1_DDDB57AA67C3A9EA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_FCC72CF53D0D8480_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6CA5D7728163F40B(::RPG::GameCore::LevelTurnUltraSkillEnd* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillEnd*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_6CA5D7728163F40B_OFFSET))(this, a1);
	}

	::System::Void Method_1_E6A464C09590E175(::Class_1_152140BAFD2DB102* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_152140BAFD2DB102*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_E6A464C09590E175_OFFSET))(this, a1);
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

	::System::Void Method_1_8937FE4342C52575(::Class_1_DDDB57AA67C3A9EA* a1, ::RPG::Client::ActionBarItemAction a2, ::RPG::Client::ActionBarItemAction a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::RPG::Client::ActionBarItemAction, ::RPG::Client::ActionBarItemAction, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_8937FE4342C52575_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_CAB09625B03CCCA7(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_CAB09625B03CCCA7_OFFSET))(this, a1);
	}

	::System::Void Method_1_62D75ADFFEE4BD8B(::Class_1_1CB8CBC69B962B41* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CB8CBC69B962B41*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_62D75ADFFEE4BD8B_OFFSET))(this, a1);
	}

	::System::Void Method_1_80CE7F51A2F001D1(::RPG::GameCore::LevelSingleInsertAbilityFinishOrAbort* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelSingleInsertAbilityFinishOrAbort*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_80CE7F51A2F001D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D54FDC80FA22AA7(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_8D54FDC80FA22AA7_OFFSET))(this, a1);
	}

	::System::Void Method_1_2E13BAE8BCA1ADBD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_2E13BAE8BCA1ADBD_OFFSET))(this, a1);
	}

	::System::Void Method_1_C10BB4B3899F9941(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_C10BB4B3899F9941_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E26C99C52BC1E654()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_E26C99C52BC1E654_OFFSET))(this);
	}

	::System::Void Method_1_0D7F0C9DBEFD8449()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_0D7F0C9DBEFD8449_OFFSET))(this);
	}

	::System::Void Method_1_C802CB0A6FE19505(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2, ::RPG::Client::ActionBarItemAction a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType, ::RPG::Client::ActionBarItemAction))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_C802CB0A6FE19505_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_E6436605D423BB9B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_E6436605D423BB9B_OFFSET))(this);
	}

	::System::Void Method_1_5C473BE8041724C5(::RPG::Client::ActionBarItemAction a1, ::Class_1_DDDB57AA67C3A9EA* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarItemAction, ::Class_1_DDDB57AA67C3A9EA*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_5C473BE8041724C5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_D155D4917B3D2C6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_D155D4917B3D2C6A_OFFSET))(this);
	}

	::System::Void Method_1_015C76589A47DD77(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_015C76589A47DD77_OFFSET))(this, a1);
	}

	::System::Void Method_1_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_913947B6596EB50A_OFFSET))(this);
	}

	::System::Void Method_1_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_3BCF0226A6CDC13B_OFFSET))(this);
	}

	::System::Void Method_1_84D7BABF9B8465E4(::RPG::GameCore::TurnState a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_84D7BABF9B8465E4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6C9963159B9A9A14(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_6C9963159B9A9A14_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBBC49A9109F0F2F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_EBBC49A9109F0F2F_OFFSET))(this);
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

	::System::Boolean Method_1_44EDAB8C59341033(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_44EDAB8C59341033_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CC603890614727A6(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_CC603890614727A6_OFFSET))(this, a1);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_1_E3030E7CD696276D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_E3030E7CD696276D_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_9FF71CDFB06416C3(::RPG::GameCore::DynamicFloat* a1, ::Class_3_47866C0C90C73674* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*, ::Class_3_47866C0C90C73674*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_9FF71CDFB06416C3_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_73E2F9FF1BD15EB9(::Class_1_DDDB57AA67C3A9EA* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_73E2F9FF1BD15EB9_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_458CB092ED0C33C4(::Class_1_DDDB57AA67C3A9EA* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3, ::Class_3_47866C0C90C73674* a4, ::RPG::GameCore::ActionDelayPreshowConfig* a5)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*, ::Class_3_47866C0C90C73674*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_458CB092ED0C33C4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_A7209A5DB0DFF39D(::Class_1_DDDB57AA67C3A9EA* a1, ::Class_3_47866C0C90C73674* a2, ::RPG::GameCore::ActionDelayPreshowConfig* a3)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::Class_3_47866C0C90C73674*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_A7209A5DB0DFF39D_OFFSET))(this, a1, a2, a3);
	}

	static ::RPG::GameCore::ActionDelayChangeTypeMask Method_1_0F1CD37E2F5B4A75(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_0F1CD37E2F5B4A75_OFFSET))(a1, a2);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_6326CBDDA7026EEB(::Class_1_DDDB57AA67C3A9EA* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3, ::Class_3_47866C0C90C73674* a4, ::RPG::GameCore::ActionDelayPreshowConfig* a5)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*, ::Class_3_47866C0C90C73674*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_6326CBDDA7026EEB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_4C95E683350C5926(::Class_1_DDDB57AA67C3A9EA* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_4C95E683350C5926_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_70ED643A34CA9DEA(::Class_1_DDDB57AA67C3A9EA* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3, ::Class_3_47866C0C90C73674* a4, ::RPG::GameCore::ActionDelayPreshowConfig* a5)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*, ::Class_3_47866C0C90C73674*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_70ED643A34CA9DEA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_1_2D467F83084DDE91(::Class_1_DDDB57AA67C3A9EA* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SkillData* a3)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_2D467F83084DDE91_OFFSET))(this, a1, a2, a3);
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

	::RPG::GameCore::GameEntity* Method_1_AE2ADF6C0A456481()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_AE2ADF6C0A456481_OFFSET))(this);
	}

	::System::Void Method_1_A31F1EB461D394E6(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a3, ::RPG::GameCore::ActionDelayPreshowConfig* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_A31F1EB461D394E6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_AF9B73C9965C6444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_AF9B73C9965C6444_OFFSET))(this);
	}

	::System::Void Method_1_DDFCBBB54CA12CE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_DDFCBBB54CA12CE0_OFFSET))(this);
	}

	::System::Void Method_1_31445EE738731A08(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_31445EE738731A08_OFFSET))(this, a1, a2, a3);
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

	::System::Void Method_1_D7DF01E60A85C9D4(::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* a1, ::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*, ::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_D7DF01E60A85C9D4_OFFSET))(this, a1, a2);
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

	::System::Boolean Method_1_A7425E370459226D(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_A7425E370459226D_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_7F29568EA964E563()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_7F29568EA964E563_OFFSET))(this);
	}

	::System::Void Method_1_AA7E3074254D484A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_AA7E3074254D484A_OFFSET))(this);
	}

	::RPG::Client::ActionBarItemUIStyle Method_1_504ADCE2087906E3(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::RPG::Client::ActionBarItemUIStyle(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_504ADCE2087906E3_OFFSET))(this, a1);
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

	::System::Boolean Method_1_AC13E1A23375417A(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_AC13E1A23375417A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E569572C3C19C4BD(::RPG::GameCore::BattleEventDataComponent* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_E569572C3C19C4BD_OFFSET))(this, a1);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_1_AECF8BEC293ED42A()
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_AECF8BEC293ED42A_OFFSET))(this);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_1_B1B7BF5C3B0F210E(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2)
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_B1B7BF5C3B0F210E_OFFSET))(this, a1, a2);
	}

	::Class_1_DDDB57AA67C3A9EA* Method_1_9FB6AEF797312662(::System::Collections::Generic::IEnumerable_1<::Class_1_DDDB57AA67C3A9EA*>* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::ActionItemType a3)
	{
		return ((::Class_1_DDDB57AA67C3A9EA*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_DDDB57AA67C3A9EA*>*, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + CLASS_1_EDF65D368DD7163E_METHOD_1_9FB6AEF797312662_OFFSET))(this, a1, a2, a3);
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
