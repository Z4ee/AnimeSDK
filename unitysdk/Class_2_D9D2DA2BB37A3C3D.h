#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_151B93D9C4BBDCA4.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PlayerDisableInteractReason.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2CDF619C23140440;
class Class_1_47EE63CB5C4DC8FC_5;
class Class_1_4CD8A1ACD565F336;
class Class_1_EE559462F37DF929;
class Class_2_B8E38BF47138A2E5;
class Class_3_0F63B4D65B5CDECD;
class Class_3_D6E9A038FA23103A;
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

#define CLASS_2_D9D2DA2BB37A3C3D_ADDLEVELVARIABLELISTENER_OFFSET UNITYSDK_OFFSET(0xAB41B30)
#define CLASS_2_D9D2DA2BB37A3C3D_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0xAB41190)
#define CLASS_2_D9D2DA2BB37A3C3D_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0xAB41080)
#define CLASS_2_D9D2DA2BB37A3C3D_EVALUATELEVELVARNUMBER_OFFSET UNITYSDK_OFFSET(0xAB419E0)
#define CLASS_2_D9D2DA2BB37A3C3D_EVALUATELEVELVARSHORT_OFFSET UNITYSDK_OFFSET(0xAB41740)
#define CLASS_2_D9D2DA2BB37A3C3D_GETSERVICES_OFFSET UNITYSDK_OFFSET(0xAB41CC0)
#define CLASS_2_D9D2DA2BB37A3C3D_GET_SKIPSTARTCURVE_OFFSET UNITYSDK_OFFSET(0xAB40F10)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_08BBACE844405300_OFFSET UNITYSDK_OFFSET(0xAB3AFB0)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0xAB3BC90)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_2F225F0B8533D9B1_OFFSET UNITYSDK_OFFSET(0xAB3AD70)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_52C18C0DA8AC23E5_OFFSET UNITYSDK_OFFSET(0xAB3E710)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0xAB3F3E0)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0xAB3B8C0)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0xAB3FB30)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0xAB3D150)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xAB3CAF0)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0xAB3BE80)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_AA2D3E889C8A52CA_1_OFFSET UNITYSDK_OFFSET(0xAB3B9B0)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xAB3B950)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xAB40200)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAB3D110)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0xAB3E000)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_E4D7CA44911A3A88_OFFSET UNITYSDK_OFFSET(0xAB41D10)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_EBAF10BBA97B82DD_OFFSET UNITYSDK_OFFSET(0xAB3E6B0)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_EF94853A4119525A_OFFSET UNITYSDK_OFFSET(0xAB3AEF0)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xAB40F00)
#define CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_F1EE1DC82503291D_OFFSET UNITYSDK_OFFSET(0xAB3ECD0)
#define CLASS_2_D9D2DA2BB37A3C3D_REMOVELEVELVARIABLELISTENER_OFFSET UNITYSDK_OFFSET(0xAB41C10)
#define CLASS_2_D9D2DA2BB37A3C3D_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0xAB41370)
#define CLASS_2_D9D2DA2BB37A3C3D_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0xAB41270)
#define CLASS_2_D9D2DA2BB37A3C3D_SETLEVELVARSHORT_OFFSET UNITYSDK_OFFSET(0xAB41450)
#define CLASS_2_D9D2DA2BB37A3C3D_SET_SKIPSTARTCURVE_OFFSET UNITYSDK_OFFSET(0xAB40F20)
#define CLASS_2_D9D2DA2BB37A3C3D_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET UNITYSDK_OFFSET(0xAB40FE0)
#define CLASS_2_D9D2DA2BB37A3C3D_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xAB40F30)
#define CLASS_2_D9D2DA2BB37A3C3D__CANLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAB40530)
#define CLASS_2_D9D2DA2BB37A3C3D__CCTOR_OFFSET UNITYSDK_OFFSET(0xAB41E20)
#define CLASS_2_D9D2DA2BB37A3C3D__CTOR_OFFSET UNITYSDK_OFFSET(0xAB41D80)
#define CLASS_2_D9D2DA2BB37A3C3D__FINISHINIT_OFFSET UNITYSDK_OFFSET(0xAB3F250)
#define CLASS_2_D9D2DA2BB37A3C3D__ONCLEAR_OFFSET UNITYSDK_OFFSET(0xAB40240)
#define CLASS_2_D9D2DA2BB37A3C3D__ONINIT_OFFSET UNITYSDK_OFFSET(0xAB3BA10)
#define CLASS_2_D9D2DA2BB37A3C3D__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAB40570)
#define CLASS_2_D9D2DA2BB37A3C3D__ONSTART_OFFSET UNITYSDK_OFFSET(0xAB3CCB0)
#define CLASS_2_D9D2DA2BB37A3C3D__ONSTOP_OFFSET UNITYSDK_OFFSET(0xAB3FCF0)
#define CLASS_2_D9D2DA2BB37A3C3D__ONTICK_OFFSET UNITYSDK_OFFSET(0xAB40650)
#define CLASS_2_D9D2DA2BB37A3C3D__SETPOSTPROCESSONCLEAR_OFFSET UNITYSDK_OFFSET(0xAB404F0)
#define CLASS_2_D9D2DA2BB37A3C3D__SETPOSTPROCESSONINIT_OFFSET UNITYSDK_OFFSET(0xAB404B0)
#define CLASS_2_D9D2DA2BB37A3C3D__STARTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xAB3FCB0)
#define CLASS_2_D9D2DA2BB37A3C3D___BUILDENTITIES_G__GETINDEX_34_2_OFFSET UNITYSDK_OFFSET(0xAB41EE0)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_ADDLEVELVARIABLELISTENER_OFFSET UNITYSDK_OFFSET(0xAB42340)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0xAB422E0)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0xAB422D0)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_EVALUATELEVELVARNUMBER_OFFSET UNITYSDK_OFFSET(0xAB42330)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_EVALUATELEVELVARSHORT_OFFSET UNITYSDK_OFFSET(0xAB42320)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_GETSERVICES_OFFSET UNITYSDK_OFFSET(0xAB42360)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_REMOVELEVELVARIABLELISTENER_OFFSET UNITYSDK_OFFSET(0xAB42350)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0xAB42300)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0xAB422F0)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_SETLEVELVARSHORT_OFFSET UNITYSDK_OFFSET(0xAB42310)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET UNITYSDK_OFFSET(0xAB422C0)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xAB422B0)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__CANLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAB42190)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__FINISHINIT_OFFSET UNITYSDK_OFFSET(0xAB42040)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__ONCLEAR_OFFSET UNITYSDK_OFFSET(0xAB42110)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__ONINIT_OFFSET UNITYSDK_OFFSET(0xAB41F80)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAB421F0)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__ONSTART_OFFSET UNITYSDK_OFFSET(0xAB41FE0)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__ONSTOP_OFFSET UNITYSDK_OFFSET(0xAB420B0)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xAB42250)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__SETPOSTPROCESSONCLEAR_OFFSET UNITYSDK_OFFSET(0xAB42180)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__SETPOSTPROCESSONINIT_OFFSET UNITYSDK_OFFSET(0xAB42170)
#define CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__STARTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xAB420A0)
#define CLASS_2_D9D2DA2BB37A3C3D___ONTICK_B__33_0_OFFSET UNITYSDK_OFFSET(0xAB41E30)

inline static constexpr unsigned int Class_2_D9D2DA2BB37A3C3D_TypeDefinitionIndex = 56455;

class Class_2_D9D2DA2BB37A3C3D : public ::Class_1_151B93D9C4BBDCA4
{
public:
	static ::Class_2_D9D2DA2BB37A3C3D** StaticGet_Field_2_0()
	{
		return (::Class_2_D9D2DA2BB37A3C3D**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D9D2DA2BB37A3C3D_TypeDefinitionIndex)->GetStaticField(0x86E0);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D9D2DA2BB37A3C3D_TypeDefinitionIndex)->GetStaticField(0x3900);
	}
	::RPG::Client::AdventurePhase* Field_2_2; // 0x78
	::Class_3_0F63B4D65B5CDECD* Field_2_3; // 0x80
	::System::String* Field_2_4; // 0x88
	::RPG::Client::FPSCameraOverride* Field_2_5; // 0x90
	::Class_3_D6E9A038FA23103A* Field_2_6; // 0x98
	::Class_1_2CDF619C23140440* Field_2_7; // 0xA0
	::UnityEngine::GameObject* Field_2_8; // 0xA8
	::RPG::Client::LittleGame::SimpleEventService_1<::Class_2_B8E38BF47138A2E5*>* Field_2_9; // 0xB0
	::RPG::GameCore::GameEntity* Field_2_10; // 0xB8
	::RPG::GameCore::LittleGameLevelVarBindingMap* Field_2_11; // 0xC0
	::UnityEngine::GameObject* Field_2_12; // 0xC8
	::System::Boolean Field_2_13; // 0xD0
	::System::Boolean _SkipStartCurve_k__BackingField; // 0xD1
	::System::Boolean Field_2_15; // 0xD2
	::System::Single Field_2_16; // 0xD4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__CCTOR_OFFSET))();
	}

	::Class_1_EE559462F37DF929* Method_2_2F225F0B8533D9B1()
	{
		return ((::Class_1_EE559462F37DF929*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_2F225F0B8533D9B1_OFFSET))(this);
	}

	::System::Void Method_2_EF94853A4119525A(::Class_1_EE559462F37DF929* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EE559462F37DF929*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_EF94853A4119525A_OFFSET))(this, a1);
	}

	::System::Void Method_2_08BBACE844405300()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_08BBACE844405300_OFFSET))(this);
	}

	::System::Void Method_2_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_626C719A884DEF9A_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::UInt32 Method_2_AA2D3E889C8A52CA_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_AA2D3E889C8A52CA_1_OFFSET))(this);
	}

	::System::Void _OnInit(::Class_1_4CD8A1ACD565F336* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CD8A1ACD565F336*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__ONINIT_OFFSET))(this, a1);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void _OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::System::Void Method_2_EBAF10BBA97B82DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_EBAF10BBA97B82DD_OFFSET))(this);
	}

	::System::Void Method_2_52C18C0DA8AC23E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_52C18C0DA8AC23E5_OFFSET))(this);
	}

	::System::Void Method_2_F1EE1DC82503291D(::RPG::GameCore::FourRotateVoxelLevelSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelLevelSettings*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_F1EE1DC82503291D_OFFSET))(this, a1);
	}

	::System::Void _FinishInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__FINISHINIT_OFFSET))(this);
	}

	::System::Void _StartLevelGraph()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__STARTLEVELGRAPH_OFFSET))(this);
	}

	::System::Void Method_2_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_2_5D3D37F2BAE9FB65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_5D3D37F2BAE9FB65_OFFSET))(this);
	}

	::System::Void _OnStop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__ONSTOP_OFFSET))(this);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void _OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__ONCLEAR_OFFSET))(this);
	}

	::System::Void _SetPostProcessOnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__SETPOSTPROCESSONINIT_OFFSET))(this);
	}

	::System::Void _SetPostProcessOnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__SETPOSTPROCESSONCLEAR_OFFSET))(this);
	}

	::System::Boolean _CanLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__CANLATEUPDATE_OFFSET))(this);
	}

	::System::Void _OnLateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__ONLATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_81FEFD1B22CE37A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_81FEFD1B22CE37A2_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean get_SkipStartCurve()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_GET_SKIPSTARTCURVE_OFFSET))(this);
	}

	::System::Void set_SkipStartCurve(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_SET_SKIPSTARTCURVE_OFFSET))(this, a1);
	}

	::System::Void TriggerLittleGameCustomEvent(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET))(this, a1);
	}

	::System::Void TriggerLittleGameCustomEvent_1(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET))(this, a1, a2);
	}

	::System::Void AddLittleGameCustomEventListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET))(this, a1, a2);
	}

	::System::Void AddLittleGameCustomEventListener_1(::System::String* a1, ::System::UInt32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void RemoveLittleGameCustomEventListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET))(this, a1, a2);
	}

	::System::Void RemoveLittleGameCustomEventListener_1(::System::String* a1, ::System::UInt32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetLevelVarShort(::System::String* a1, ::RPG::GameCore::DynamicFloat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_SETLEVELVARSHORT_OFFSET))(this, a1, a2);
	}

	::System::Int16 EvaluateLevelVarShort(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::System::Int16(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_EVALUATELEVELVARSHORT_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint EvaluateLevelVarNumber(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_EVALUATELEVELVARNUMBER_OFFSET))(this, a1);
	}

	::System::Void AddLevelVariableListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_ADDLEVELVARIABLELISTENER_OFFSET))(this, a1, a2);
	}

	::System::Void RemoveLevelVariableListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_REMOVELEVELVARIABLELISTENER_OFFSET))(this, a1, a2);
	}

	::Class_1_47EE63CB5C4DC8FC_5* GetServices()
	{
		return ((::Class_1_47EE63CB5C4DC8FC_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_GETSERVICES_OFFSET))(this);
	}

	::System::Void Method_2_E4D7CA44911A3A88(::System::Boolean a1, ::RPG::Client::LittleGame::FiveDim::PlayerDisableInteractReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::LittleGame::FiveDim::PlayerDisableInteractReason))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_E4D7CA44911A3A88_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void __OnTick_b__33_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___ONTICK_B__33_0_OFFSET))(this);
	}

	static ::System::Int32 __BuildEntities_g__GetIndex_34_2(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___BUILDENTITIES_G__GETINDEX_34_2_OFFSET))(a1);
	}

	::System::Void __iFixBaseProxy__OnInit(::Class_1_4CD8A1ACD565F336* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CD8A1ACD565F336*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__ONINIT_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__ONSTART_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__FinishInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__FINISHINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__StartLevelGraph()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__STARTLEVELGRAPH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnStop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__ONSTOP_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__ONCLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetPostProcessOnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__SETPOSTPROCESSONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetPostProcessOnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__SETPOSTPROCESSONCLEAR_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__CanLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__CANLATEUPDATE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnLateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__ONLATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_TriggerLittleGameCustomEvent(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_TriggerLittleGameCustomEvent_1(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_AddLittleGameCustomEventListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_AddLittleGameCustomEventListener_1(::System::String* a1, ::System::UInt32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_RemoveLittleGameCustomEventListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_RemoveLittleGameCustomEventListener_1(::System::String* a1, ::System::UInt32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_SetLevelVarShort(::System::String* a1, ::RPG::GameCore::DynamicFloat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_SETLEVELVARSHORT_OFFSET))(this, a1, a2);
	}

	::System::Int16 __iFixBaseProxy_EvaluateLevelVarShort(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::System::Int16(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_EVALUATELEVELVARSHORT_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint __iFixBaseProxy_EvaluateLevelVarNumber(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_EVALUATELEVELVARNUMBER_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_AddLevelVariableListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_ADDLEVELVARIABLELISTENER_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_RemoveLevelVariableListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_REMOVELEVELVARIABLELISTENER_OFFSET))(this, a1, a2);
	}

	::Class_1_47EE63CB5C4DC8FC_5* __iFixBaseProxy_GetServices()
	{
		return ((::Class_1_47EE63CB5C4DC8FC_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9D2DA2BB37A3C3D___IFIXBASEPROXY_GETSERVICES_OFFSET))(this);
	}
};
