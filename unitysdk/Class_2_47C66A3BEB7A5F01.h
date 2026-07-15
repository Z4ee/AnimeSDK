#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E0103A0EA6CD0F4C.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PlayerDisableInteractReason.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2CDF619C23140440;
class Class_1_47EE63CB5C4DC8FC_5;
class Class_1_4CD8A1ACD565F336;
class Class_1_EE559462F37DF929;
class Class_2_4A2CC7F50E9E7872;
class Class_2_56DCA1B58073717B;
class Class_3_001D9EA49F6215B6;
class Class_3_8B00E2EA8FAE133F;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class FPSCameraOverride; }
namespace RPG::Client::LittleGame { template <typename T> class SimpleEventService_1; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class FourRotateVoxelLevelSettings; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameLevelVarBindingMap; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_47C66A3BEB7A5F01_ADDLEVELVARIABLELISTENER_OFFSET UNITYSDK_OFFSET(0x16CBA960)
#define CLASS_2_47C66A3BEB7A5F01_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0x16CBA040)
#define CLASS_2_47C66A3BEB7A5F01_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x16CB9F70)
#define CLASS_2_47C66A3BEB7A5F01_EVALUATELEVELVARNUMBER_OFFSET UNITYSDK_OFFSET(0x16CBA810)
#define CLASS_2_47C66A3BEB7A5F01_EVALUATELEVELVARSHORT_OFFSET UNITYSDK_OFFSET(0x16CBA570)
#define CLASS_2_47C66A3BEB7A5F01_GETSERVICES_OFFSET UNITYSDK_OFFSET(0x16CBAB30)
#define CLASS_2_47C66A3BEB7A5F01_GET_SKIPSTARTCURVE_OFFSET UNITYSDK_OFFSET(0x1509B240)
#define CLASS_2_47C66A3BEB7A5F01_GET_SPAWNPOSITIONENTITYID_OFFSET UNITYSDK_OFFSET(0x1509B260)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_08BBACE844405300_OFFSET UNITYSDK_OFFSET(0x15092E30)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_11A5396029C33A57_OFFSET UNITYSDK_OFFSET(0x15093770)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x150950D0)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_1738FE11B4451187_OFFSET UNITYSDK_OFFSET(0x15092C30)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_262A06AA54D89156_OFFSET UNITYSDK_OFFSET(0x1509A340)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_2E29038CF17E20BD_OFFSET UNITYSDK_OFFSET(0x15097F40)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_45B5CA713DA5A736_OFFSET UNITYSDK_OFFSET(0x15098B40)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0x150936E0)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x15099C30)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_6DC60149A270E0D4_OFFSET UNITYSDK_OFFSET(0x15097EE0)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x150952C0)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0x150965D0)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_89A1C764C1D4450D_OFFSET UNITYSDK_OFFSET(0x15098580)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x15095E20)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x15099520)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_97BC79BDB09179A3_OFFSET UNITYSDK_OFFSET(0x15092D70)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_AA2D3E889C8A52CA_1_OFFSET UNITYSDK_OFFSET(0x15094E20)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x15094DC0)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16CBAC90)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16CBAC50)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_CB85B033A22FCEF0_OFFSET UNITYSDK_OFFSET(0x16CBABF0)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0x15097860)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x15094C90)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_E4D7CA44911A3A88_OFFSET UNITYSDK_OFFSET(0x16CBAB80)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_E5630A859AA24FB3_OFFSET UNITYSDK_OFFSET(0x1509B1C0)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1509B230)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x1509B160)
#define CLASS_2_47C66A3BEB7A5F01_METHOD_2_F239777256F9BA8F_OFFSET UNITYSDK_OFFSET(0x1509B220)
#define CLASS_2_47C66A3BEB7A5F01_REMOVELEVELVARIABLELISTENER_OFFSET UNITYSDK_OFFSET(0x16CBAA80)
#define CLASS_2_47C66A3BEB7A5F01_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0x16CBA1F0)
#define CLASS_2_47C66A3BEB7A5F01_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x16CBA0F0)
#define CLASS_2_47C66A3BEB7A5F01_SETLEVELVARSHORT_OFFSET UNITYSDK_OFFSET(0x16CBA2A0)
#define CLASS_2_47C66A3BEB7A5F01_SET_SKIPSTARTCURVE_OFFSET UNITYSDK_OFFSET(0x1509B250)
#define CLASS_2_47C66A3BEB7A5F01_SET_SPAWNPOSITIONENTITYID_OFFSET UNITYSDK_OFFSET(0x1509B270)
#define CLASS_2_47C66A3BEB7A5F01_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET UNITYSDK_OFFSET(0x16CB9F00)
#define CLASS_2_47C66A3BEB7A5F01_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x16CB9E70)
#define CLASS_2_47C66A3BEB7A5F01__CANLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1509A720)
#define CLASS_2_47C66A3BEB7A5F01__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CBAD70)
#define CLASS_2_47C66A3BEB7A5F01__CTOR_OFFSET UNITYSDK_OFFSET(0x16CBACD0)
#define CLASS_2_47C66A3BEB7A5F01__FINISHINIT_OFFSET UNITYSDK_OFFSET(0x150993B0)
#define CLASS_2_47C66A3BEB7A5F01__ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1509A460)
#define CLASS_2_47C66A3BEB7A5F01__ONINIT_OFFSET UNITYSDK_OFFSET(0x15094E80)
#define CLASS_2_47C66A3BEB7A5F01__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1509A760)
#define CLASS_2_47C66A3BEB7A5F01__ONSTART_OFFSET UNITYSDK_OFFSET(0x15095FE0)
#define CLASS_2_47C66A3BEB7A5F01__ONSTOP_OFFSET UNITYSDK_OFFSET(0x15099DF0)
#define CLASS_2_47C66A3BEB7A5F01__ONTICK_OFFSET UNITYSDK_OFFSET(0x1509A8D0)
#define CLASS_2_47C66A3BEB7A5F01__SETPOSTPROCESSONCLEAR_OFFSET UNITYSDK_OFFSET(0x1509A6E0)
#define CLASS_2_47C66A3BEB7A5F01__SETPOSTPROCESSONINIT_OFFSET UNITYSDK_OFFSET(0x1509A6A0)
#define CLASS_2_47C66A3BEB7A5F01__STARTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x15099DB0)
#define CLASS_2_47C66A3BEB7A5F01___BUILDENTITIES_G__GETINDEX_44_3_OFFSET UNITYSDK_OFFSET(0x16CBAE20)
#define CLASS_2_47C66A3BEB7A5F01___ONTICK_B__43_0_OFFSET UNITYSDK_OFFSET(0x16CBAD80)

inline static constexpr unsigned int Class_2_47C66A3BEB7A5F01_TypeDefinitionIndex = 57694;

class Class_2_47C66A3BEB7A5F01 : public ::Class_1_E0103A0EA6CD0F4C
{
public:
	static ::Class_2_47C66A3BEB7A5F01** StaticGet_Field_2_0()
	{
		return (::Class_2_47C66A3BEB7A5F01**)Il2CppClass::FromTypeDefinitionIndex(Class_2_47C66A3BEB7A5F01_TypeDefinitionIndex)->GetStaticField(0x6B1A0);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_47C66A3BEB7A5F01_TypeDefinitionIndex)->GetStaticField(0x14600);
	}
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::Int16 Field_2_4 = 0x2; // 0x0
	// static const ::System::Int16 Field_2_5 = 0x0; // 0x0
	// static const ::System::Int16 Field_2_6 = 0x1; // 0x0
	// static const ::System::Int16 Field_2_7 = 0x2; // 0x0
	::RPG::Client::AdventurePhase* Field_2_8; // 0x78
	::RPG::GameCore::LittleGameLevelVarBindingMap* Field_2_9; // 0x80
	::UnityEngine::GameObject* Field_2_10; // 0x88
	::RPG::Client::FPSCameraOverride* Field_2_11; // 0x90
	::System::String* Field_2_12; // 0x98
	::Class_3_8B00E2EA8FAE133F* Field_2_13; // 0xA0
	::UnityEngine::GameObject* Field_2_14; // 0xA8
	::Class_1_2CDF619C23140440* Field_2_15; // 0xB0
	::Class_3_001D9EA49F6215B6* Field_2_16; // 0xB8
	::RPG::Client::LittleGame::SimpleEventService_1<::Class_2_56DCA1B58073717B*>* Field_2_17; // 0xC0
	::RPG::GameCore::GameEntity* Field_2_18; // 0xC8
	::System::Single Field_2_19; // 0xD0
	::System::UInt32 _SpawnPositionEntityId_k__BackingField; // 0xD4
	::System::Boolean _SkipStartCurve_k__BackingField; // 0xD8
	::System::Boolean Field_2_22; // 0xD9
	::System::Boolean Field_2_23; // 0xDA

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01__CCTOR_OFFSET))();
	}

	::Class_1_EE559462F37DF929* Method_2_1738FE11B4451187()
	{
		return ((::Class_1_EE559462F37DF929*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_1738FE11B4451187_OFFSET))(this);
	}

	::System::Void Method_2_97BC79BDB09179A3(::Class_1_EE559462F37DF929* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EE559462F37DF929*))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_97BC79BDB09179A3_OFFSET))(this, a1);
	}

	::System::Void Method_2_08BBACE844405300()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_08BBACE844405300_OFFSET))(this);
	}

	::System::Void Method_2_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_626C719A884DEF9A_OFFSET))(this, a1);
	}

	::System::Void Method_2_11A5396029C33A57()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_11A5396029C33A57_OFFSET))(this);
	}

	::System::UInt32 Method_2_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::UInt32 Method_2_AA2D3E889C8A52CA_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_AA2D3E889C8A52CA_1_OFFSET))(this);
	}

	::System::Void _OnInit(::Class_1_4CD8A1ACD565F336* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CD8A1ACD565F336*))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01__ONINIT_OFFSET))(this, a1);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void _OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01__ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::System::Void Method_2_6DC60149A270E0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_6DC60149A270E0D4_OFFSET))(this);
	}

	::System::Void Method_2_2E29038CF17E20BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_2E29038CF17E20BD_OFFSET))(this);
	}

	::System::Void Method_2_89A1C764C1D4450D(::RPG::GameCore::FourRotateVoxelLevelSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelLevelSettings*))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_89A1C764C1D4450D_OFFSET))(this, a1);
	}

	::System::Void _FinishInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01__FINISHINIT_OFFSET))(this);
	}

	::System::Void _StartLevelGraph()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01__STARTLEVELGRAPH_OFFSET))(this);
	}

	::System::Void Method_2_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_2_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void _OnStop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01__ONSTOP_OFFSET))(this);
	}

	::System::Void Method_2_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void Method_2_262A06AA54D89156(::System::Int16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_262A06AA54D89156_OFFSET))(this, a1);
	}

	::System::Void Method_2_45B5CA713DA5A736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_45B5CA713DA5A736_OFFSET))(this);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void _OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01__ONCLEAR_OFFSET))(this);
	}

	::System::Void _SetPostProcessOnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01__SETPOSTPROCESSONINIT_OFFSET))(this);
	}

	::System::Void _SetPostProcessOnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01__SETPOSTPROCESSONCLEAR_OFFSET))(this);
	}

	::System::Boolean _CanLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01__CANLATEUPDATE_OFFSET))(this);
	}

	::System::Void _OnLateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01__ONLATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_81FEFD1B22CE37A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_81FEFD1B22CE37A2_OFFSET))(this);
	}

	::System::Int32 Method_2_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::Class_2_4A2CC7F50E9E7872* Method_2_E5630A859AA24FB3()
	{
		return ((::Class_2_4A2CC7F50E9E7872*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_E5630A859AA24FB3_OFFSET))(this);
	}

	::Class_3_001D9EA49F6215B6* Method_2_F239777256F9BA8F()
	{
		return ((::Class_3_001D9EA49F6215B6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_F239777256F9BA8F_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean get_SkipStartCurve()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_GET_SKIPSTARTCURVE_OFFSET))(this);
	}

	::System::Void set_SkipStartCurve(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_SET_SKIPSTARTCURVE_OFFSET))(this, a1);
	}

	::System::UInt32 get_SpawnPositionEntityId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_GET_SPAWNPOSITIONENTITYID_OFFSET))(this);
	}

	::System::Void set_SpawnPositionEntityId(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_SET_SPAWNPOSITIONENTITYID_OFFSET))(this, a1);
	}

	::System::Void TriggerLittleGameCustomEvent(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET))(this, a1);
	}

	::System::Void TriggerLittleGameCustomEvent_1(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET))(this, a1, a2);
	}

	::System::Void AddLittleGameCustomEventListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET))(this, a1, a2);
	}

	::System::Void AddLittleGameCustomEventListener_1(::System::String* a1, ::System::UInt32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void RemoveLittleGameCustomEventListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET))(this, a1, a2);
	}

	::System::Void RemoveLittleGameCustomEventListener_1(::System::String* a1, ::System::UInt32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetLevelVarShort(::System::String* a1, ::RPG::GameCore::DynamicFloat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_SETLEVELVARSHORT_OFFSET))(this, a1, a2);
	}

	::System::Int16 EvaluateLevelVarShort(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::System::Int16(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_EVALUATELEVELVARSHORT_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint EvaluateLevelVarNumber(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_EVALUATELEVELVARNUMBER_OFFSET))(this, a1);
	}

	::System::Void AddLevelVariableListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_ADDLEVELVARIABLELISTENER_OFFSET))(this, a1, a2);
	}

	::System::Void RemoveLevelVariableListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_REMOVELEVELVARIABLELISTENER_OFFSET))(this, a1, a2);
	}

	::Class_1_47EE63CB5C4DC8FC_5* GetServices()
	{
		return ((::Class_1_47EE63CB5C4DC8FC_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_GETSERVICES_OFFSET))(this);
	}

	::System::Void Method_2_E4D7CA44911A3A88(::System::Boolean a1, ::RPG::Client::LittleGame::FiveDim::PlayerDisableInteractReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::LittleGame::FiveDim::PlayerDisableInteractReason))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_E4D7CA44911A3A88_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_2_CB85B033A22FCEF0()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_CB85B033A22FCEF0_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void __OnTick_b__43_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01___ONTICK_B__43_0_OFFSET))(this);
	}

	static ::System::Int32 __BuildEntities_g__GetIndex_44_3(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01___BUILDENTITIES_G__GETINDEX_44_3_OFFSET))(a1);
	}
};
