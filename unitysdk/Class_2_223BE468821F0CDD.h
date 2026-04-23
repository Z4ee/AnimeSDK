#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_223BE468821F0CDD_Struct_2_19A76A049C476AF2.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DamateTextFontStyle.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/Struct_2_3A335394524C9E44.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/System/Decimal.h"

class Class_1_801E2EA5758B8308;
class Class_1_86B4CACC0974BF85;
class Class_1_8EE3C62E3E585A89;
class Class_1_F7F129640441419D;
class Class_2_223BE468821F0CDD_Class_1_29E9FA788D30624A;
class Class_2_73E06C253DAFCC33;
class Class_2_98C553BBF0666C0F;
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBeforeAddModifier; }
namespace RPG::GameCore { class LevelRemoveModifier; }
namespace RPG::GameCore { class LevelTurnWaitActionOrder; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define CLASS_2_223BE468821F0CDD_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1251B810)
#define CLASS_2_223BE468821F0CDD_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1251BD70)
#define CLASS_2_223BE468821F0CDD_METHOD_2_00A55C75739DC93F_OFFSET UNITYSDK_OFFSET(0x12518570)
#define CLASS_2_223BE468821F0CDD_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0x1251B6C0)
#define CLASS_2_223BE468821F0CDD_METHOD_2_04CA218550FF0BD9_OFFSET UNITYSDK_OFFSET(0x12518AD0)
#define CLASS_2_223BE468821F0CDD_METHOD_2_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x12515D60)
#define CLASS_2_223BE468821F0CDD_METHOD_2_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x12516140)
#define CLASS_2_223BE468821F0CDD_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1251A9A0)
#define CLASS_2_223BE468821F0CDD_METHOD_2_2B66EDCEB1E8731D_OFFSET UNITYSDK_OFFSET(0x12516FE0)
#define CLASS_2_223BE468821F0CDD_METHOD_2_2DD8EB2A8AB21975_OFFSET UNITYSDK_OFFSET(0x12516370)
#define CLASS_2_223BE468821F0CDD_METHOD_2_33C15B846C629D11_OFFSET UNITYSDK_OFFSET(0x12516F30)
#define CLASS_2_223BE468821F0CDD_METHOD_2_40AF574CD5336697_OFFSET UNITYSDK_OFFSET(0x12518750)
#define CLASS_2_223BE468821F0CDD_METHOD_2_4603827AFEF7DA67_OFFSET UNITYSDK_OFFSET(0x1251A260)
#define CLASS_2_223BE468821F0CDD_METHOD_2_463AC79CFFAA4A36_OFFSET UNITYSDK_OFFSET(0x12518260)
#define CLASS_2_223BE468821F0CDD_METHOD_2_4D606E0EBD8E195C_OFFSET UNITYSDK_OFFSET(0x12517B70)
#define CLASS_2_223BE468821F0CDD_METHOD_2_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x1251ADF0)
#define CLASS_2_223BE468821F0CDD_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x1251C920)
#define CLASS_2_223BE468821F0CDD_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1251C860)
#define CLASS_2_223BE468821F0CDD_METHOD_2_6371A0A5D32EAFA5_OFFSET UNITYSDK_OFFSET(0x12516B50)
#define CLASS_2_223BE468821F0CDD_METHOD_2_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0x1251ABC0)
#define CLASS_2_223BE468821F0CDD_METHOD_2_7117EE7AE8C84DE2_OFFSET UNITYSDK_OFFSET(0x1251A530)
#define CLASS_2_223BE468821F0CDD_METHOD_2_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x12518A50)
#define CLASS_2_223BE468821F0CDD_METHOD_2_81DD6758B395F556_OFFSET UNITYSDK_OFFSET(0x1251AA90)
#define CLASS_2_223BE468821F0CDD_METHOD_2_83AEF1AB342384D9_OFFSET UNITYSDK_OFFSET(0x12517AA0)
#define CLASS_2_223BE468821F0CDD_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1251AA00)
#define CLASS_2_223BE468821F0CDD_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12516040)
#define CLASS_2_223BE468821F0CDD_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x1251AF90)
#define CLASS_2_223BE468821F0CDD_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x1251B050)
#define CLASS_2_223BE468821F0CDD_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0x1251B0B0)
#define CLASS_2_223BE468821F0CDD_METHOD_2_A27D06F9481FAFDB_4_OFFSET UNITYSDK_OFFSET(0x1251B170)
#define CLASS_2_223BE468821F0CDD_METHOD_2_A27D06F9481FAFDB_5_OFFSET UNITYSDK_OFFSET(0x1251B270)
#define CLASS_2_223BE468821F0CDD_METHOD_2_A27D06F9481FAFDB_6_OFFSET UNITYSDK_OFFSET(0x1251B4A0)
#define CLASS_2_223BE468821F0CDD_METHOD_2_A27D06F9481FAFDB_7_OFFSET UNITYSDK_OFFSET(0x1251B540)
#define CLASS_2_223BE468821F0CDD_METHOD_2_A27D06F9481FAFDB_8_OFFSET UNITYSDK_OFFSET(0x1251B600)
#define CLASS_2_223BE468821F0CDD_METHOD_2_A27D06F9481FAFDB_9_OFFSET UNITYSDK_OFFSET(0x1251B7B0)
#define CLASS_2_223BE468821F0CDD_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x1251AED0)
#define CLASS_2_223BE468821F0CDD_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x12517980)
#define CLASS_2_223BE468821F0CDD_METHOD_2_B1F851579F018C59_OFFSET UNITYSDK_OFFSET(0x125173E0)
#define CLASS_2_223BE468821F0CDD_METHOD_2_B474972070FF0A50_OFFSET UNITYSDK_OFFSET(0x12517700)
#define CLASS_2_223BE468821F0CDD_METHOD_2_BD2DAE0E0D3C36DD_OFFSET UNITYSDK_OFFSET(0x12516BB0)
#define CLASS_2_223BE468821F0CDD_METHOD_2_C4D30852B80184B3_OFFSET UNITYSDK_OFFSET(0x12517D10)
#define CLASS_2_223BE468821F0CDD_METHOD_2_C67AC7450471056B_OFFSET UNITYSDK_OFFSET(0x12518410)
#define CLASS_2_223BE468821F0CDD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x125161B0)
#define CLASS_2_223BE468821F0CDD_METHOD_2_CBB16AE705BCA424_OFFSET UNITYSDK_OFFSET(0x12516550)
#define CLASS_2_223BE468821F0CDD_METHOD_2_CE3A68B87710EC47_OFFSET UNITYSDK_OFFSET(0x12519FA0)
#define CLASS_2_223BE468821F0CDD_METHOD_2_D0F44F67777F606F_OFFSET UNITYSDK_OFFSET(0x125166B0)
#define CLASS_2_223BE468821F0CDD_METHOD_2_D45A5838FA5962D6_OFFSET UNITYSDK_OFFSET(0x12516950)
#define CLASS_2_223BE468821F0CDD_METHOD_2_D48827CD003EAACC_OFFSET UNITYSDK_OFFSET(0x12518210)
#define CLASS_2_223BE468821F0CDD_METHOD_2_DF408D262C86611D_OFFSET UNITYSDK_OFFSET(0x12517A30)
#define CLASS_2_223BE468821F0CDD_METHOD_2_E8198DA52F4317CD_OFFSET UNITYSDK_OFFSET(0x12518850)
#define CLASS_2_223BE468821F0CDD_METHOD_2_EF00FDB1983C777E_OFFSET UNITYSDK_OFFSET(0x12519890)
#define CLASS_2_223BE468821F0CDD_METHOD_2_EF136117B229B9B6_OFFSET UNITYSDK_OFFSET(0x1251ACD0)
#define CLASS_2_223BE468821F0CDD_METHOD_2_F00FC502F7150C33_OFFSET UNITYSDK_OFFSET(0x12517590)
#define CLASS_2_223BE468821F0CDD_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1251B390)
#define CLASS_2_223BE468821F0CDD_METHOD_2_F69C03B98D564348_OFFSET UNITYSDK_OFFSET(0x12518080)
#define CLASS_2_223BE468821F0CDD_METHOD_2_FDD86D7210EB3908_OFFSET UNITYSDK_OFFSET(0x12517100)
#define CLASS_2_223BE468821F0CDD_METHOD_2_FE7490124188D80D_OFFSET UNITYSDK_OFFSET(0x12518160)
#define CLASS_2_223BE468821F0CDD_METHOD_2_FF60829979F9A350_OFFSET UNITYSDK_OFFSET(0x1251AAF0)
#define CLASS_2_223BE468821F0CDD__CTOR_OFFSET UNITYSDK_OFFSET(0x1251C2A0)
#define CLASS_2_223BE468821F0CDD__ONBIND_OFFSET UNITYSDK_OFFSET(0x12515F70)
#define CLASS_2_223BE468821F0CDD__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x12516230)
#define CLASS_2_223BE468821F0CDD__ONTICK_OFFSET UNITYSDK_OFFSET(0x125162E0)
#define CLASS_2_223BE468821F0CDD___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1251CA50)
#define CLASS_2_223BE468821F0CDD___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1251CAB0)
#define CLASS_2_223BE468821F0CDD___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1251C8C0)
#define CLASS_2_223BE468821F0CDD___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1251C980)
#define CLASS_2_223BE468821F0CDD___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x1251C9E0)

inline static constexpr unsigned int Class_2_223BE468821F0CDD_TypeDefinitionIndex = 65982;

class Class_2_223BE468821F0CDD : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Int32 Field_2_7 = 0x14; // 0x0
	// static const ::System::Int32 Field_2_8 = 0x2; // 0x0
	// static const ::System::Single Field_2_9; // 0x0
	// static const ::System::String* Field_2_22; // 0x0
	// static const ::System::String* Field_2_23; // 0x0
	// static const ::System::String* Field_2_24; // 0x0
	// static const ::System::String* Field_2_25; // 0x0
	// static const ::System::String* Field_2_26; // 0x0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::String*>* Field_2_19; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_2_11; // 0x68
	::UnityEngine::Material* Field_2_13; // 0x70
	::System::Collections::Generic::List_1<::Class_2_223BE468821F0CDD_Struct_2_19A76A049C476AF2>* Field_2_2; // 0x78
	::RPG::GameCore::BattleInstance* Field_2_16; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_223BE468821F0CDD_Class_1_29E9FA788D30624A*>* Field_2_1; // 0x88
	::RPG::GameCore::EntityManager* Field_2_15; // 0x90
	::Class_1_8EE3C62E3E585A89* Field_2_0; // 0x98
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_18; // 0xA0
	::System::Collections::Generic::List_1<::Class_2_223BE468821F0CDD_Struct_2_19A76A049C476AF2>* Field_2_4; // 0xA8
	::Class_2_98C553BBF0666C0F* Field_2_5; // 0xB0
	::System::Collections::Generic::List_1<::Class_2_223BE468821F0CDD_Struct_2_19A76A049C476AF2>* Field_2_3; // 0xB8
	::UnityEngine::Material* Field_2_14; // 0xC0
	::Class_1_F7F129640441419D* Field_2_17; // 0xC8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_2_12; // 0xD0
	::RPG::GameCore::DamateTextFontStyle Field_2_6; // 0xD8
	::System::Boolean Field_2_20; // 0xDC
	::RPG::Client::TextID Field_2_21; // 0xE0
	::System::Single Field_2_10; // 0xF0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD__ONDISPOSE_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_D45A5838FA5962D6(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_D45A5838FA5962D6_OFFSET))(this, a1);
	}

	::Class_2_223BE468821F0CDD_Struct_2_19A76A049C476AF2 Method_2_BD2DAE0E0D3C36DD(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::Class_2_223BE468821F0CDD_Struct_2_19A76A049C476AF2(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_BD2DAE0E0D3C36DD_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDD86D7210EB3908(::RPG::GameCore::AbilityCurrentShieldChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_FDD86D7210EB3908_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1F851579F018C59(::RPG::GameCore::LevelBeforeAddModifier* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBeforeAddModifier*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_B1F851579F018C59_OFFSET))(this, a1);
	}

	::System::Void Method_2_B474972070FF0A50(::RPG::GameCore::LevelRemoveModifier* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelRemoveModifier*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_B474972070FF0A50_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_83AEF1AB342384D9(::RPG::GameCore::LevelTurnWaitActionOrder* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnWaitActionOrder*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_83AEF1AB342384D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D606E0EBD8E195C(::Class_1_801E2EA5758B8308* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_801E2EA5758B8308*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_4D606E0EBD8E195C_OFFSET))(this, a1);
	}

	::System::Void Method_2_C4D30852B80184B3(::Class_1_86B4CACC0974BF85* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86B4CACC0974BF85*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_C4D30852B80184B3_OFFSET))(this, a1);
	}

	::System::Void Method_2_F69C03B98D564348(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_F69C03B98D564348_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE7490124188D80D(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_FE7490124188D80D_OFFSET))(this, a1);
	}

	::System::Void Method_2_D48827CD003EAACC(::RPG::GameCore::DamateTextFontStyle a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DamateTextFontStyle))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_D48827CD003EAACC_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_6371A0A5D32EAFA5(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_6371A0A5D32EAFA5_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F00FC502F7150C33(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_F00FC502F7150C33_OFFSET))(this, a1);
	}

	::RPG::Client::UIFloatingTextType Method_2_2B66EDCEB1E8731D(::Struct_2_5909FD7779934CCA a1, ::RPG::GameCore::AttackType a2)
	{
		return ((::RPG::Client::UIFloatingTextType(*)(::PVOID, ::Struct_2_5909FD7779934CCA, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_2B66EDCEB1E8731D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33C15B846C629D11(::Class_2_223BE468821F0CDD_Struct_2_19A76A049C476AF2& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_223BE468821F0CDD_Struct_2_19A76A049C476AF2&))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_33C15B846C629D11_OFFSET))(this, a1);
	}

	::System::Void Method_2_2DD8EB2A8AB21975(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_2DD8EB2A8AB21975_OFFSET))(this, a1);
	}

	::System::Void Method_2_CBB16AE705BCA424(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_CBB16AE705BCA424_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0F44F67777F606F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_D0F44F67777F606F_OFFSET))(this, a1);
	}

	::System::Void Method_2_00A55C75739DC93F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_00A55C75739DC93F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_40AF574CD5336697(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_40AF574CD5336697_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B6EC255F45D034F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_7B6EC255F45D034F_OFFSET))(this, a1);
	}

	::System::Void Method_2_C67AC7450471056B(::Class_2_73E06C253DAFCC33* a1, ::Class_2_223BE468821F0CDD_Struct_2_19A76A049C476AF2& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_73E06C253DAFCC33*, ::Class_2_223BE468821F0CDD_Struct_2_19A76A049C476AF2&))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_C67AC7450471056B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_04CA218550FF0BD9(::Class_2_73E06C253DAFCC33* a1, ::RPG::GameCore::GameEntity* a2, ::System::Decimal a3, ::RPG::Client::UIFloatingTextType a4, ::RPG::GameCore::DamateTextFontStyle a5, ::Struct_2_5909FD7779934CCA a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_73E06C253DAFCC33*, ::RPG::GameCore::GameEntity*, ::System::Decimal, ::RPG::Client::UIFloatingTextType, ::RPG::GameCore::DamateTextFontStyle, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_04CA218550FF0BD9_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_EF00FDB1983C777E(::Class_2_73E06C253DAFCC33* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::UIFloatingTextType a3, ::RPG::Client::TextID a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_73E06C253DAFCC33*, ::RPG::GameCore::GameEntity*, ::RPG::Client::UIFloatingTextType, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_EF00FDB1983C777E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_DF408D262C86611D(::RPG::GameCore::TeamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_DF408D262C86611D_OFFSET))(this, a1);
	}

	::System::Void Method_2_CE3A68B87710EC47(::Class_2_73E06C253DAFCC33* a1, ::RPG::GameCore::GameEntity* a2, ::Struct_2_3A335394524C9E44 a3, ::Struct_2_5909FD7779934CCA a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_73E06C253DAFCC33*, ::RPG::GameCore::GameEntity*, ::Struct_2_3A335394524C9E44, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_CE3A68B87710EC47_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_73E06C253DAFCC33* Method_2_463AC79CFFAA4A36(::Class_2_223BE468821F0CDD_Struct_2_19A76A049C476AF2& a1, ::System::Boolean a2)
	{
		return ((::Class_2_73E06C253DAFCC33*(*)(::PVOID, ::Class_2_223BE468821F0CDD_Struct_2_19A76A049C476AF2&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_463AC79CFFAA4A36_OFFSET))(this, a1, a2);
	}

	::Class_2_73E06C253DAFCC33* Method_2_E8198DA52F4317CD(::System::Boolean a1)
	{
		return ((::Class_2_73E06C253DAFCC33*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_E8198DA52F4317CD_OFFSET))(this, a1);
	}

	::System::Void Method_2_4603827AFEF7DA67(::Class_2_73E06C253DAFCC33* a1, ::RPG::GameCore::AttackType a2, ::RPG::GameCore::AttackDamageType a3, ::Struct_2_3A335394524C9E44 a4, ::RPG::Client::UIFloatingTextType a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_73E06C253DAFCC33*, ::RPG::GameCore::AttackType, ::RPG::GameCore::AttackDamageType, ::Struct_2_3A335394524C9E44, ::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_4603827AFEF7DA67_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::String* Method_2_81DD6758B395F556(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_81DD6758B395F556_OFFSET))(this, a1);
	}

	::System::String* Method_2_FF60829979F9A350(::Struct_2_3A335394524C9E44 a1)
	{
		return ((::System::String*(*)(::PVOID, ::Struct_2_3A335394524C9E44))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_FF60829979F9A350_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_2_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::Class_2_223BE468821F0CDD_Class_1_29E9FA788D30624A* Method_2_7117EE7AE8C84DE2(::System::UInt32 a1)
	{
		return ((::Class_2_223BE468821F0CDD_Class_1_29E9FA788D30624A*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_7117EE7AE8C84DE2_OFFSET))(this, a1);
	}

	::System::Void Method_2_EF136117B229B9B6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_EF136117B229B9B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Boolean Method_2_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_A27D06F9481FAFDB_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_A27D06F9481FAFDB_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_A27D06F9481FAFDB_6_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_A27D06F9481FAFDB_7_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_A27D06F9481FAFDB_8_OFFSET))(this, a1);
	}

	::System::Void Method_2_01509228E3A9577B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_01509228E3A9577B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_A27D06F9481FAFDB_9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_223BE468821F0CDD___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
