#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C183DB6AB9E83240_Struct_2_4B55803C67847716.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersInputActionType.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_3437ECE1CCDFA38D.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_28;
class Class_0_16E4307DCC419505_30;
class Class_0_16E4307DCC419505_31;
class Class_0_16E4307DCC419505_75;
class Class_0_16E4307DCC419505_76;
class Class_1_4908C13F4F161F87;
class Class_1_9A1EBEAAD416AF1B;
class Class_2_35962C2B7535512E;
class Class_2_465A9E6CC2B0EF21;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C183DB6AB9E83240_GET_INVERSEROTATEDIRECTION_OFFSET UNITYSDK_OFFSET(0x18D5D640)
#define CLASS_1_C183DB6AB9E83240_GET_MAXYDOWNSTEP_OFFSET UNITYSDK_OFFSET(0x18D5D600)
#define CLASS_1_C183DB6AB9E83240_GET_NORMALYDOWNSTEP_OFFSET UNITYSDK_OFFSET(0x18D5D5E0)
#define CLASS_1_C183DB6AB9E83240_GET_SPEEDUP_OFFSET UNITYSDK_OFFSET(0x18D5D620)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_026FF03249D55919_OFFSET UNITYSDK_OFFSET(0x18D5C880)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_04AF66402B9859B9_1_OFFSET UNITYSDK_OFFSET(0x18D5A390)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_04AF66402B9859B9_2_OFFSET UNITYSDK_OFFSET(0x18D5A3E0)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x18D5A340)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_0D959FF260B17021_OFFSET UNITYSDK_OFFSET(0x18D5A080)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_1BD0DDC3BCCBC706_OFFSET UNITYSDK_OFFSET(0x18D5D0A0)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_23F8ED2B7DBF354B_OFFSET UNITYSDK_OFFSET(0x18D5CF90)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_2AC763A3794B0373_OFFSET UNITYSDK_OFFSET(0x18D59A20)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x18D5A430)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0x18D5A260)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x18D5C400)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x18D59EE0)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_6207AA5A5D7E3C3F_OFFSET UNITYSDK_OFFSET(0x18D5D570)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x18D597D0)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_937BBE12B8901906_OFFSET UNITYSDK_OFFSET(0x18D5A2F0)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_97756B152B98AA91_OFFSET UNITYSDK_OFFSET(0x18D5C590)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_A8D80874309EA69D_OFFSET UNITYSDK_OFFSET(0x18D59C10)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_ADCAF64A8BC86AAB_OFFSET UNITYSDK_OFFSET(0x18D5C670)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_B6C0A5919BDD725B_OFFSET UNITYSDK_OFFSET(0x18D5C060)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_BC508B2D13157D94_OFFSET UNITYSDK_OFFSET(0x18D5C410)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_C50B93169B85DAEA_1_OFFSET UNITYSDK_OFFSET(0x18D5A030)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x18D5A2A0)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_CA9DF88872F79279_OFFSET UNITYSDK_OFFSET(0x18D59680)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_D1F6CD13CBA7A74E_OFFSET UNITYSDK_OFFSET(0x18D5D470)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x18D5A210)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_F3056E6B09294016_OFFSET UNITYSDK_OFFSET(0x18D5A480)
#define CLASS_1_C183DB6AB9E83240_METHOD_1_FCA7C739F8E5F729_OFFSET UNITYSDK_OFFSET(0x18D59EF0)
#define CLASS_1_C183DB6AB9E83240_SET_INVERSEROTATEDIRECTION_OFFSET UNITYSDK_OFFSET(0x18D5D650)
#define CLASS_1_C183DB6AB9E83240_SET_MAXYDOWNSTEP_OFFSET UNITYSDK_OFFSET(0x18D5D610)
#define CLASS_1_C183DB6AB9E83240_SET_NORMALYDOWNSTEP_OFFSET UNITYSDK_OFFSET(0x18D5D5F0)
#define CLASS_1_C183DB6AB9E83240_SET_SPEEDUP_OFFSET UNITYSDK_OFFSET(0x18D5D630)
#define CLASS_1_C183DB6AB9E83240__CTOR_OFFSET UNITYSDK_OFFSET(0x18D5D660)

inline static constexpr unsigned int Class_1_C183DB6AB9E83240_TypeDefinitionIndex = 35603;

class Class_1_C183DB6AB9E83240 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	// static const ::System::Single Field_1_4; // 0x0
	::System::Action* Field_1_5; // 0x10
	::Il2CppArray<::Class_0_16E4307DCC419505_30*>* Field_1_6; // 0x18
	::Class_0_16E4307DCC419505_75* Field_1_7; // 0x20
	::System::Action* Field_1_8; // 0x28
	::Class_2_35962C2B7535512E* Field_1_9; // 0x30
	::System::Collections::Generic::List_1<::RPG::MVector2>* Field_1_10; // 0x38
	::Class_2_465A9E6CC2B0EF21* Field_1_11; // 0x40
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_30*>* Field_1_12; // 0x48
	::Class_1_4908C13F4F161F87* Field_1_13; // 0x50
	::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersInputActionType>* Field_1_14; // 0x58
	::System::Action* Field_1_15; // 0x60
	::Class_0_16E4307DCC419505_76* Field_1_16; // 0x68
	::System::Action_1<::Class_1_C183DB6AB9E83240_Struct_2_4B55803C67847716>* Field_1_17; // 0x70
	::Class_1_9A1EBEAAD416AF1B* Field_1_18; // 0x78
	::Class_0_16E4307DCC419505_28* Field_1_19; // 0x80
	::System::Boolean _InverseRotateDirection_k__BackingField; // 0x88
	::System::Boolean Field_1_21; // 0x89
	::System::Single _NormalYDownStep_k__BackingField; // 0x8C
	::System::Single Field_1_23; // 0x90
	::System::Single Field_1_24; // 0x94
	::System::Single _MaxYDownStep_k__BackingField; // 0x98
	::System::Single _SpeedUp_k__BackingField; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA9DF88872F79279(::Class_2_35962C2B7535512E* a1, ::Class_1_9A1EBEAAD416AF1B* a2, ::Class_0_16E4307DCC419505_28* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_35962C2B7535512E*, ::Class_1_9A1EBEAAD416AF1B*, ::Class_0_16E4307DCC419505_28*))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_CA9DF88872F79279_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_1_2AC763A3794B0373(::Class_2_465A9E6CC2B0EF21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_465A9E6CC2B0EF21*))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_2AC763A3794B0373_OFFSET))(this, a1);
	}

	::System::Void Method_1_FCA7C739F8E5F729(::Struct_2_3437ECE1CCDFA38D a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3437ECE1CCDFA38D))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_FCA7C739F8E5F729_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D959FF260B17021(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_0D959FF260B17021_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_DD784213055292FB_OFFSET))(this);
	}

	::Class_2_465A9E6CC2B0EF21* Method_1_457717A0CF438A7C()
	{
		return ((::Class_2_465A9E6CC2B0EF21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_457717A0CF438A7C_OFFSET))(this);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_75* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_75*))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_1_C50B93169B85DAEA_1(::Class_0_16E4307DCC419505_76* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_76*))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_C50B93169B85DAEA_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_937BBE12B8901906(::System::Action_1<::Class_1_C183DB6AB9E83240_Struct_2_4B55803C67847716>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_C183DB6AB9E83240_Struct_2_4B55803C67847716>*))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_937BBE12B8901906_OFFSET))(this, a1);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_04AF66402B9859B9_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_04AF66402B9859B9_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_04AF66402B9859B9_2(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_04AF66402B9859B9_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_F3056E6B09294016(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_F3056E6B09294016_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersInputActionType>* Method_1_B6C0A5919BDD725B()
	{
		return ((::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersInputActionType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_B6C0A5919BDD725B_OFFSET))(this);
	}

	::System::Void Method_1_23F8ED2B7DBF354B(::Class_1_C183DB6AB9E83240_Struct_2_4B55803C67847716 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C183DB6AB9E83240_Struct_2_4B55803C67847716))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_23F8ED2B7DBF354B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::MVector2>* Method_1_ADCAF64A8BC86AAB(::Struct_2_3437ECE1CCDFA38D a1, ::RPG::MVector2 a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::MVector2>*(*)(::PVOID, ::Struct_2_3437ECE1CCDFA38D, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_ADCAF64A8BC86AAB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A8D80874309EA69D(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_30*>* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_30*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_A8D80874309EA69D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_026FF03249D55919(::RPG::MVector2& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::MVector2&))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_026FF03249D55919_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_BC508B2D13157D94(::RPG::MVector3 a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::MVector3, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_BC508B2D13157D94_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1BD0DDC3BCCBC706(::RPG::MVector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_1BD0DDC3BCCBC706_OFFSET))(this, a1, a2);
	}

	::RPG::MVector3 Method_1_97756B152B98AA91(::RPG::MVector3 a1, ::System::Single a2)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_97756B152B98AA91_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D1F6CD13CBA7A74E(::Class_0_16E4307DCC419505_31* a1, ::RPG::MVector2 a2, ::RPG::MVector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_31*, ::RPG::MVector2, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_D1F6CD13CBA7A74E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6207AA5A5D7E3C3F(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_6207AA5A5D7E3C3F_OFFSET))(this, a1, a2);
	}

	::System::Single get_NormalYDownStep()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_GET_NORMALYDOWNSTEP_OFFSET))(this);
	}

	::System::Void set_NormalYDownStep(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_SET_NORMALYDOWNSTEP_OFFSET))(this, a1);
	}

	::System::Single get_MaxYDownStep()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_GET_MAXYDOWNSTEP_OFFSET))(this);
	}

	::System::Void set_MaxYDownStep(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_SET_MAXYDOWNSTEP_OFFSET))(this, a1);
	}

	::System::Single get_SpeedUp()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_GET_SPEEDUP_OFFSET))(this);
	}

	::System::Void set_SpeedUp(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_SET_SPEEDUP_OFFSET))(this, a1);
	}

	::System::Boolean get_InverseRotateDirection()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_GET_INVERSEROTATEDIRECTION_OFFSET))(this);
	}

	::System::Void set_InverseRotateDirection(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_SET_INVERSEROTATEDIRECTION_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C183DB6AB9E83240_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}
};
