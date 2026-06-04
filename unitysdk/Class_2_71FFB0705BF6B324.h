#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_71FFB0705BF6B324_Struct_2_4E5014B136273897.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DamateTextFontStyle.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/Struct_2_3A335394524C9E44.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

class Class_1_1EDFFB645AFD9A3E;
class Class_1_801E2EA5758B8308;
class Class_1_86B4CACC0974BF85;
class Class_1_A7BE1FF1648DEE43;
class Class_1_BA94109D2F811389_1;
class Class_2_59B7D0D376F5D526;
class Class_2_71FFB0705BF6B324_Class_1_29E9FA788D30624A;
class Class_2_DC6739E252B83566;
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

#define CLASS_2_71FFB0705BF6B324_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA8B40D0)
#define CLASS_2_71FFB0705BF6B324_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA8B4710)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_0823717A0785467E_OFFSET UNITYSDK_OFFSET(0xA8B0FC0)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0xA8AE370)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0xA8ADF70)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA8B33D0)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_31E545CE4595C133_OFFSET UNITYSDK_OFFSET(0xA8B0A70)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_33C15B846C629D11_OFFSET UNITYSDK_OFFSET(0xA8AF340)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_37D0B350DA8F0587_OFFSET UNITYSDK_OFFSET(0xA8AF990)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_3D814D232A4C1EB4_OFFSET UNITYSDK_OFFSET(0xA8B0E00)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_4603827AFEF7DA67_OFFSET UNITYSDK_OFFSET(0xA8B2C80)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_463AC79CFFAA4A36_OFFSET UNITYSDK_OFFSET(0xA8B0C50)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_464F9487BF0D77F8_OFFSET UNITYSDK_OFFSET(0xA8B3F50)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_49900FCDCC39715E_OFFSET UNITYSDK_OFFSET(0xA8AEFA0)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_4D606E0EBD8E195C_OFFSET UNITYSDK_OFFSET(0xA8AFF90)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_509B67825187837D_OFFSET UNITYSDK_OFFSET(0xA8B2F50)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_53B4F437767D44BA_OFFSET UNITYSDK_OFFSET(0xA8B11A0)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0xA8B3830)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_56F8DE6192DC7C14_OFFSET UNITYSDK_OFFSET(0xA8AF450)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xA8B53B0)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA8B52F0)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_634BCF4C65B50CBB_OFFSET UNITYSDK_OFFSET(0xA8AE830)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0xA8B3600)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0xA8B14F0)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_81DD6758B395F556_OFFSET UNITYSDK_OFFSET(0xA8B34C0)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_83AEF1AB342384D9_OFFSET UNITYSDK_OFFSET(0xA8AFEC0)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xA8B3430)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_8B1D1F4F3D0E01CB_OFFSET UNITYSDK_OFFSET(0xA8AE5A0)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA8AE260)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_9CFB8FA91400C0F7_OFFSET UNITYSDK_OFFSET(0xA8B0130)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xA8B39B0)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0xA8B3A50)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0xA8B3AB0)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_A27D06F9481FAFDB_4_OFFSET UNITYSDK_OFFSET(0xA8B3B50)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_A27D06F9481FAFDB_5_OFFSET UNITYSDK_OFFSET(0xA8B3BF0)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_A27D06F9481FAFDB_6_OFFSET UNITYSDK_OFFSET(0xA8B3E10)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_A27D06F9481FAFDB_7_OFFSET UNITYSDK_OFFSET(0xA8B3EB0)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_A27D06F9481FAFDB_8_OFFSET UNITYSDK_OFFSET(0xA8B4070)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xA8B3910)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_A935E1919E0782F5_OFFSET UNITYSDK_OFFSET(0xA8AF560)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_B1352DAC6DFE8CCE_OFFSET UNITYSDK_OFFSET(0xA8B1570)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA8AFDA0)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_B1F851579F018C59_OFFSET UNITYSDK_OFFSET(0xA8AF7F0)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_B3DCAA4CCE2AD947_OFFSET UNITYSDK_OFFSET(0xA8AED20)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_B474972070FF0A50_OFFSET UNITYSDK_OFFSET(0xA8AFB20)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA8AE3E0)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_CC75865AF9CCA3AF_OFFSET UNITYSDK_OFFSET(0xA8B0760)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_CE3A68B87710EC47_OFFSET UNITYSDK_OFFSET(0xA8B29C0)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_D48827CD003EAACC_OFFSET UNITYSDK_OFFSET(0xA8B0C00)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_DCEB9B8FD296459A_OFFSET UNITYSDK_OFFSET(0xA8AEA30)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_DF408D262C86611D_OFFSET UNITYSDK_OFFSET(0xA8AFE50)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_E8198DA52F4317CD_OFFSET UNITYSDK_OFFSET(0xA8B12F0)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_E962251479BFF4B1_OFFSET UNITYSDK_OFFSET(0xA8AF000)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_EF00FDB1983C777E_OFFSET UNITYSDK_OFFSET(0xA8B2280)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_EF136117B229B9B6_OFFSET UNITYSDK_OFFSET(0xA8B3710)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xA8B3D50)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xA8B3C90)
#define CLASS_2_71FFB0705BF6B324_METHOD_2_FF60829979F9A350_OFFSET UNITYSDK_OFFSET(0xA8B3530)
#define CLASS_2_71FFB0705BF6B324__CTOR_OFFSET UNITYSDK_OFFSET(0xA8B4D20)
#define CLASS_2_71FFB0705BF6B324__ONBIND_OFFSET UNITYSDK_OFFSET(0xA8AE190)
#define CLASS_2_71FFB0705BF6B324__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xA8AE460)
#define CLASS_2_71FFB0705BF6B324__ONTICK_OFFSET UNITYSDK_OFFSET(0xA8AE510)
#define CLASS_2_71FFB0705BF6B324___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA8B54D0)
#define CLASS_2_71FFB0705BF6B324___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA8B5530)
#define CLASS_2_71FFB0705BF6B324___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA8B5350)
#define CLASS_2_71FFB0705BF6B324___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xA8B5410)
#define CLASS_2_71FFB0705BF6B324___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xA8B5470)

inline static constexpr unsigned int Class_2_71FFB0705BF6B324_TypeDefinitionIndex = 66915;

class Class_2_71FFB0705BF6B324 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Int32 Field_2_0 = 0x14; // 0x0
	// static const ::System::Int32 Field_2_1 = 0x2; // 0x0
	// static const ::System::Single Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_71FFB0705BF6B324_Class_1_29E9FA788D30624A*>* Field_2_8; // 0x60
	::System::Collections::Generic::List_1<::Class_2_71FFB0705BF6B324_Struct_2_4E5014B136273897>* Field_2_9; // 0x68
	::System::Collections::Generic::List_1<::Class_2_71FFB0705BF6B324_Struct_2_4E5014B136273897>* Field_2_10; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::String*>*>* Field_2_11; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_2_12; // 0x80
	::RPG::GameCore::BattleInstance* Field_2_13; // 0x88
	::RPG::GameCore::EntityManager* Field_2_14; // 0x90
	::System::Collections::Generic::List_1<::Class_2_71FFB0705BF6B324_Struct_2_4E5014B136273897>* Field_2_15; // 0x98
	::UnityEngine::Material* Field_2_16; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_2_17; // 0xA8
	::Class_1_1EDFFB645AFD9A3E* Field_2_18; // 0xB0
	::UnityEngine::Material* Field_2_19; // 0xB8
	::Class_2_DC6739E252B83566* Field_2_20; // 0xC0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::String*>* Field_2_21; // 0xC8
	::Class_1_A7BE1FF1648DEE43* Field_2_22; // 0xD0
	::RPG::GameCore::DamateTextFontStyle Field_2_23; // 0xD8
	::System::Boolean Field_2_24; // 0xDC
	::System::Single Field_2_25; // 0xE0
	::RPG::Client::TextID Field_2_26; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1ABF1CBED7A4AF0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_1ABF1CBED7A4AF0A_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324__ONDISPOSE_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_B3DCAA4CCE2AD947(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_B3DCAA4CCE2AD947_OFFSET))(this, a1);
	}

	::Class_2_71FFB0705BF6B324_Struct_2_4E5014B136273897 Method_2_E962251479BFF4B1(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::Class_2_71FFB0705BF6B324_Struct_2_4E5014B136273897(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_E962251479BFF4B1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A935E1919E0782F5(::RPG::GameCore::AbilityCurrentShieldChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_A935E1919E0782F5_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1F851579F018C59(::RPG::GameCore::LevelBeforeAddModifier* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBeforeAddModifier*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_B1F851579F018C59_OFFSET))(this, a1);
	}

	::System::Void Method_2_B474972070FF0A50(::RPG::GameCore::LevelRemoveModifier* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelRemoveModifier*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_B474972070FF0A50_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_83AEF1AB342384D9(::RPG::GameCore::LevelTurnWaitActionOrder* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnWaitActionOrder*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_83AEF1AB342384D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D606E0EBD8E195C(::Class_1_801E2EA5758B8308* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_801E2EA5758B8308*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_4D606E0EBD8E195C_OFFSET))(this, a1);
	}

	::System::Void Method_2_9CFB8FA91400C0F7(::Class_1_86B4CACC0974BF85* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86B4CACC0974BF85*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_9CFB8FA91400C0F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_CC75865AF9CCA3AF(::Class_1_BA94109D2F811389_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BA94109D2F811389_1*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_CC75865AF9CCA3AF_OFFSET))(this, a1);
	}

	::System::Void Method_2_31E545CE4595C133(::Class_1_BA94109D2F811389_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BA94109D2F811389_1*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_31E545CE4595C133_OFFSET))(this, a1);
	}

	::System::Void Method_2_D48827CD003EAACC(::RPG::GameCore::DamateTextFontStyle a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DamateTextFontStyle))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_D48827CD003EAACC_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_49900FCDCC39715E(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_49900FCDCC39715E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_37D0B350DA8F0587(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_37D0B350DA8F0587_OFFSET))(this, a1);
	}

	::RPG::Client::UIFloatingTextType Method_2_56F8DE6192DC7C14(::Struct_2_5909FD7779934CCA a1, ::RPG::GameCore::AttackType a2)
	{
		return ((::RPG::Client::UIFloatingTextType(*)(::PVOID, ::Struct_2_5909FD7779934CCA, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_56F8DE6192DC7C14_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33C15B846C629D11(::Class_2_71FFB0705BF6B324_Struct_2_4E5014B136273897& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_71FFB0705BF6B324_Struct_2_4E5014B136273897&))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_33C15B846C629D11_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B1D1F4F3D0E01CB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_8B1D1F4F3D0E01CB_OFFSET))(this, a1);
	}

	::System::Void Method_2_634BCF4C65B50CBB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_634BCF4C65B50CBB_OFFSET))(this, a1);
	}

	::System::Void Method_2_DCEB9B8FD296459A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_DCEB9B8FD296459A_OFFSET))(this, a1);
	}

	::System::Void Method_2_0823717A0785467E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_0823717A0785467E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_53B4F437767D44BA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_53B4F437767D44BA_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B6EC255F45D034F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_7B6EC255F45D034F_OFFSET))(this, a1);
	}

	::System::Void Method_2_3D814D232A4C1EB4(::Class_2_59B7D0D376F5D526* a1, ::Class_2_71FFB0705BF6B324_Struct_2_4E5014B136273897& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_59B7D0D376F5D526*, ::Class_2_71FFB0705BF6B324_Struct_2_4E5014B136273897&))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_3D814D232A4C1EB4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1352DAC6DFE8CCE(::Class_2_59B7D0D376F5D526* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3, ::RPG::Client::UIFloatingTextType a4, ::RPG::GameCore::DamateTextFontStyle a5, ::Struct_2_5909FD7779934CCA a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_59B7D0D376F5D526*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::Client::UIFloatingTextType, ::RPG::GameCore::DamateTextFontStyle, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_B1352DAC6DFE8CCE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_EF00FDB1983C777E(::Class_2_59B7D0D376F5D526* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::UIFloatingTextType a3, ::RPG::Client::TextID a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_59B7D0D376F5D526*, ::RPG::GameCore::GameEntity*, ::RPG::Client::UIFloatingTextType, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_EF00FDB1983C777E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_DF408D262C86611D(::RPG::GameCore::TeamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_DF408D262C86611D_OFFSET))(this, a1);
	}

	::System::Void Method_2_CE3A68B87710EC47(::Class_2_59B7D0D376F5D526* a1, ::RPG::GameCore::GameEntity* a2, ::Struct_2_3A335394524C9E44 a3, ::Struct_2_5909FD7779934CCA a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_59B7D0D376F5D526*, ::RPG::GameCore::GameEntity*, ::Struct_2_3A335394524C9E44, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_CE3A68B87710EC47_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_59B7D0D376F5D526* Method_2_463AC79CFFAA4A36(::Class_2_71FFB0705BF6B324_Struct_2_4E5014B136273897& a1, ::System::Boolean a2)
	{
		return ((::Class_2_59B7D0D376F5D526*(*)(::PVOID, ::Class_2_71FFB0705BF6B324_Struct_2_4E5014B136273897&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_463AC79CFFAA4A36_OFFSET))(this, a1, a2);
	}

	::Class_2_59B7D0D376F5D526* Method_2_E8198DA52F4317CD(::System::Boolean a1)
	{
		return ((::Class_2_59B7D0D376F5D526*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_E8198DA52F4317CD_OFFSET))(this, a1);
	}

	::System::Void Method_2_4603827AFEF7DA67(::Class_2_59B7D0D376F5D526* a1, ::RPG::GameCore::AttackType a2, ::RPG::GameCore::AttackDamageType a3, ::Struct_2_3A335394524C9E44 a4, ::RPG::Client::UIFloatingTextType a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_59B7D0D376F5D526*, ::RPG::GameCore::AttackType, ::RPG::GameCore::AttackDamageType, ::Struct_2_3A335394524C9E44, ::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_4603827AFEF7DA67_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::String* Method_2_81DD6758B395F556(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_81DD6758B395F556_OFFSET))(this, a1);
	}

	::System::String* Method_2_FF60829979F9A350(::Struct_2_3A335394524C9E44 a1)
	{
		return ((::System::String*(*)(::PVOID, ::Struct_2_3A335394524C9E44))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_FF60829979F9A350_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_2_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::Class_2_71FFB0705BF6B324_Class_1_29E9FA788D30624A* Method_2_509B67825187837D(::System::UInt32 a1)
	{
		return ((::Class_2_71FFB0705BF6B324_Class_1_29E9FA788D30624A*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_509B67825187837D_OFFSET))(this, a1);
	}

	::System::Void Method_2_EF136117B229B9B6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_EF136117B229B9B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Boolean Method_2_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_A27D06F9481FAFDB_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_A27D06F9481FAFDB_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_A27D06F9481FAFDB_6_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_A27D06F9481FAFDB_7_OFFSET))(this, a1);
	}

	::System::Void Method_2_464F9487BF0D77F8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_464F9487BF0D77F8_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_A27D06F9481FAFDB_8_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71FFB0705BF6B324___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
