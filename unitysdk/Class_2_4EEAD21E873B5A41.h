#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E0103A0EA6CD0F4C.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PlayerDisableInteractReason.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2CDF619C23140440;
class Class_1_47EE63CB5C4DC8FC_5;
class Class_1_4CD8A1ACD565F336;
class Class_1_BEFFF38E22C3198D;
class Class_2_B8E38BF47138A2E5;
class Class_2_BCFC54C6C3BB4207;
class Class_3_912CC478F2B21832;
class Class_3_E609D9AD888941AB;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class FPSCameraOverride; }
namespace RPG::Client::LittleGame { template <typename T> class SimpleEventService_1; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class FourRotateVoxelLevelEnvConfig; }
namespace RPG::GameCore { class FourRotateVoxelLevelSettings; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameLevelVarBindingMap; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_4EEAD21E873B5A41_ADDLEVELVARIABLELISTENER_OFFSET UNITYSDK_OFFSET(0xBDFDBE0)
#define CLASS_2_4EEAD21E873B5A41_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0xBDFD230)
#define CLASS_2_4EEAD21E873B5A41_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0xBDFD120)
#define CLASS_2_4EEAD21E873B5A41_EVALUATELEVELVARNUMBER_OFFSET UNITYSDK_OFFSET(0xBDFDA90)
#define CLASS_2_4EEAD21E873B5A41_EVALUATELEVELVARSHORT_OFFSET UNITYSDK_OFFSET(0xBDFD7F0)
#define CLASS_2_4EEAD21E873B5A41_GETSERVICES_OFFSET UNITYSDK_OFFSET(0xBDFDD70)
#define CLASS_2_4EEAD21E873B5A41_GET_SKIPSTARTCURVE_OFFSET UNITYSDK_OFFSET(0xBDFCF90)
#define CLASS_2_4EEAD21E873B5A41_GET_SPAWNPOSITIONENTITYID_OFFSET UNITYSDK_OFFSET(0xBDFCFB0)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_01109DD29CB4D216_1_OFFSET UNITYSDK_OFFSET(0xBDF3BB0)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_01109DD29CB4D216_OFFSET UNITYSDK_OFFSET(0xBDF3220)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_1283EC0876EAAACF_OFFSET UNITYSDK_OFFSET(0xBDF8560)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xBDFA920)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0xBDF55B0)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xBDFCF60)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_294B5C69E8F113D9_OFFSET UNITYSDK_OFFSET(0xBDFA810)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_2DC57A98C12C3B08_OFFSET UNITYSDK_OFFSET(0xBDF3AD0)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xBDFA890)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_326C15C73868CA24_OFFSET UNITYSDK_OFFSET(0xBDFB990)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_369F47CCB61A607A_OFFSET UNITYSDK_OFFSET(0xBDFA710)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_3BB1E557C1407BEB_OFFSET UNITYSDK_OFFSET(0xBDF8C30)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_45B5CA713DA5A736_OFFSET UNITYSDK_OFFSET(0xBDF9600)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_5235B5F69CBBC9EB_OFFSET UNITYSDK_OFFSET(0xBDF3050)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_5AC715804517063C_OFFSET UNITYSDK_OFFSET(0xBDFA2F0)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0xBDFAB90)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_6044DE137CAC4D46_OFFSET UNITYSDK_OFFSET(0xBDFA560)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0xBDFB2D0)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_7AE29092A0A8F415_OFFSET UNITYSDK_OFFSET(0xBDF9400)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0xBDF6B30)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_85434A11E0B64A3B_OFFSET UNITYSDK_OFFSET(0xBDFC8B0)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_8BCB3191E6BEE7CB_1_OFFSET UNITYSDK_OFFSET(0xBDFCB20)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0xBDF57A0)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_9897A7575657242E_OFFSET UNITYSDK_OFFSET(0xBDFDE30)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_9B03FF6968A7B763_OFFSET UNITYSDK_OFFSET(0xBDFCE60)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_A03904F105051FB9_OFFSET UNITYSDK_OFFSET(0xBDFA170)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_AA2D3E889C8A52CA_1_OFFSET UNITYSDK_OFFSET(0xBDF52A0)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xBDF5240)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xBDF6420)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xBDFB950)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBDF6AF0)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0xBDF7E50)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_CEC79AA2175202D8_OFFSET UNITYSDK_OFFSET(0xBDF9EA0)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_D282F73E0F70FCFD_OFFSET UNITYSDK_OFFSET(0xBDFA250)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_D3A74B3A0A824B0A_OFFSET UNITYSDK_OFFSET(0xBDF9570)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0xBDF5110)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xBDFA2A0)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_E4D7CA44911A3A88_OFFSET UNITYSDK_OFFSET(0xBDFDDC0)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_E5630A859AA24FB3_OFFSET UNITYSDK_OFFSET(0xBDFCE00)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_EBAF10BBA97B82DD_OFFSET UNITYSDK_OFFSET(0xBDF8500)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_EF94853A4119525A_OFFSET UNITYSDK_OFFSET(0xBDF3160)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xBDFCF80)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0xBDFCDA0)
#define CLASS_2_4EEAD21E873B5A41_METHOD_2_F239777256F9BA8F_OFFSET UNITYSDK_OFFSET(0xBDFCF70)
#define CLASS_2_4EEAD21E873B5A41_REMOVELEVELVARIABLELISTENER_OFFSET UNITYSDK_OFFSET(0xBDFDCC0)
#define CLASS_2_4EEAD21E873B5A41_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0xBDFD410)
#define CLASS_2_4EEAD21E873B5A41_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0xBDFD310)
#define CLASS_2_4EEAD21E873B5A41_SETLEVELVARSHORT_OFFSET UNITYSDK_OFFSET(0xBDFD4F0)
#define CLASS_2_4EEAD21E873B5A41_SET_SKIPSTARTCURVE_OFFSET UNITYSDK_OFFSET(0xBDFCFA0)
#define CLASS_2_4EEAD21E873B5A41_SET_SPAWNPOSITIONENTITYID_OFFSET UNITYSDK_OFFSET(0xBDFCFC0)
#define CLASS_2_4EEAD21E873B5A41_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET UNITYSDK_OFFSET(0xBDFD080)
#define CLASS_2_4EEAD21E873B5A41_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xBDFCFD0)
#define CLASS_2_4EEAD21E873B5A41__CANLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBDFBED0)
#define CLASS_2_4EEAD21E873B5A41__CCTOR_OFFSET UNITYSDK_OFFSET(0xBDFDF60)
#define CLASS_2_4EEAD21E873B5A41__CTOR_OFFSET UNITYSDK_OFFSET(0xBDFDED0)
#define CLASS_2_4EEAD21E873B5A41__FINISHINIT_OFFSET UNITYSDK_OFFSET(0xBDFAA00)
#define CLASS_2_4EEAD21E873B5A41__ONCLEAR_OFFSET UNITYSDK_OFFSET(0xBDFBB50)
#define CLASS_2_4EEAD21E873B5A41__ONINIT_OFFSET UNITYSDK_OFFSET(0xBDF5300)
#define CLASS_2_4EEAD21E873B5A41__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBDFBF10)
#define CLASS_2_4EEAD21E873B5A41__ONSTART_OFFSET UNITYSDK_OFFSET(0xBDF6550)
#define CLASS_2_4EEAD21E873B5A41__ONSTOP_OFFSET UNITYSDK_OFFSET(0xBDFB490)
#define CLASS_2_4EEAD21E873B5A41__ONTICK_OFFSET UNITYSDK_OFFSET(0xBDFC080)
#define CLASS_2_4EEAD21E873B5A41__SETPOSTPROCESSONCLEAR_OFFSET UNITYSDK_OFFSET(0xBDFBE90)
#define CLASS_2_4EEAD21E873B5A41__SETPOSTPROCESSONINIT_OFFSET UNITYSDK_OFFSET(0xBDFBE50)
#define CLASS_2_4EEAD21E873B5A41__STARTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xBDFB450)
#define CLASS_2_4EEAD21E873B5A41___BUILDENTITIES_G__GETINDEX_55_4_OFFSET UNITYSDK_OFFSET(0xBDFE050)
#define CLASS_2_4EEAD21E873B5A41___ONTICK_B__54_0_OFFSET UNITYSDK_OFFSET(0xBDFDF70)

inline static constexpr unsigned int Class_2_4EEAD21E873B5A41_TypeDefinitionIndex = 60400;

class Class_2_4EEAD21E873B5A41 : public ::Class_1_E0103A0EA6CD0F4C
{
public:
	static ::Class_2_4EEAD21E873B5A41** StaticGet_BBCBPBGNKEL()
	{
		return (::Class_2_4EEAD21E873B5A41**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4EEAD21E873B5A41_TypeDefinitionIndex)->GetStaticField(0x60D60);
	}
	static ::System::Int32* StaticGet_NDAPMBOHJAB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4EEAD21E873B5A41_TypeDefinitionIndex)->GetStaticField(0x14AC0);
	}
	// static const ::System::String* JDADJLDNJCD; // 0x0
	// static const ::System::String* CIPAIDMBAHC; // 0x0
	// static const ::System::Int16 GHGBOEGCMLD = 0x2; // 0x0
	// static const ::System::Int16 FEPCIPCGPOP = 0x0; // 0x0
	// static const ::System::Int16 HIAOHNFFEJH = 0x1; // 0x0
	// static const ::System::Int16 FOGIDIDNMGM = 0x2; // 0x0
	::UnityEngine::GameObject* GIHBMMMBGCD; // 0x78
	::RPG::Client::FPSCameraOverride* OJDNFPBAGFA; // 0x80
	::System::String* CAIHNODFHAM; // 0x88
	::Class_1_2CDF619C23140440* FKINCGODJEP; // 0x90
	::Class_3_E609D9AD888941AB* JEIALFDCPND; // 0x98
	::RPG::GameCore::FourRotateVoxelLevelEnvConfig* EKCHLDPEKHB; // 0xA0
	::UnityEngine::GameObject* JMJNGJODDCI; // 0xA8
	::RPG::GameCore::GameEntity* IOOEIJILBML; // 0xB0
	::Class_3_912CC478F2B21832* PDENFEFCAGN; // 0xB8
	::RPG::Client::AdventurePhase* DEIEJIOELMO; // 0xC0
	::RPG::Client::LittleGame::SimpleEventService_1<::Class_2_B8E38BF47138A2E5*>* LGEFCADNPMN; // 0xC8
	::UnityEngine::GameObject* PEILPPADALD; // 0xD0
	::System::String* ILNGKDPNPNL; // 0xD8
	::RPG::GameCore::LittleGameLevelVarBindingMap* CIFBEJIBBDG; // 0xE0
	::System::UInt32 _SpawnPositionEntityId_k__BackingField; // 0xE8
	::System::Single COAEKALJMAK; // 0xEC
	::System::Boolean HDJOGGDMCIO; // 0xF0
	::System::Boolean _SkipStartCurve_k__BackingField; // 0xF1
	::System::Boolean MABFMALCGKF; // 0xF2

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41__CCTOR_OFFSET))();
	}

	::Class_1_BEFFF38E22C3198D* Method_2_5235B5F69CBBC9EB()
	{
		return ((::Class_1_BEFFF38E22C3198D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_5235B5F69CBBC9EB_OFFSET))(this);
	}

	::System::Void Method_2_EF94853A4119525A(::Class_1_BEFFF38E22C3198D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BEFFF38E22C3198D*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_EF94853A4119525A_OFFSET))(this, a1);
	}

	::System::Void Method_2_01109DD29CB4D216()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_01109DD29CB4D216_OFFSET))(this);
	}

	::System::Void Method_2_2DC57A98C12C3B08(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_2DC57A98C12C3B08_OFFSET))(this, a1);
	}

	::System::Void Method_2_01109DD29CB4D216_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_01109DD29CB4D216_1_OFFSET))(this);
	}

	::System::UInt32 Method_2_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::UInt32 Method_2_AA2D3E889C8A52CA_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_AA2D3E889C8A52CA_1_OFFSET))(this);
	}

	::System::Void _OnInit(::Class_1_4CD8A1ACD565F336* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CD8A1ACD565F336*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41__ONINIT_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void _OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41__ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::System::Void Method_2_EBAF10BBA97B82DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_EBAF10BBA97B82DD_OFFSET))(this);
	}

	::System::Void Method_2_1283EC0876EAAACF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_1283EC0876EAAACF_OFFSET))(this);
	}

	::System::Void Method_2_7AE29092A0A8F415(::RPG::GameCore::FourRotateVoxelLevelSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelLevelSettings*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_7AE29092A0A8F415_OFFSET))(this, a1);
	}

	::RPG::GameCore::FourRotateVoxelLevelEnvConfig* Method_2_CEC79AA2175202D8(::RPG::GameCore::FourRotateVoxelLevelSettings* a1)
	{
		return ((::RPG::GameCore::FourRotateVoxelLevelEnvConfig*(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelLevelSettings*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_CEC79AA2175202D8_OFFSET))(this, a1);
	}

	::RPG::GameCore::FourRotateVoxelLevelEnvConfig* Method_2_D282F73E0F70FCFD()
	{
		return ((::RPG::GameCore::FourRotateVoxelLevelEnvConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_D282F73E0F70FCFD_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Boolean Method_2_A03904F105051FB9(::RPG::GameCore::FourRotateVoxelLevelEnvConfig* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelLevelEnvConfig*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_A03904F105051FB9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_294B5C69E8F113D9(::RPG::GameCore::FourRotateVoxelLevelEnvConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelLevelEnvConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_294B5C69E8F113D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_5AC715804517063C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_5AC715804517063C_OFFSET))(this, a1);
	}

	::System::Void Method_2_6044DE137CAC4D46(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_6044DE137CAC4D46_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_369F47CCB61A607A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_369F47CCB61A607A_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void _FinishInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41__FINISHINIT_OFFSET))(this);
	}

	::System::Void _StartLevelGraph()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41__STARTLEVELGRAPH_OFFSET))(this);
	}

	::System::Void Method_2_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_2_5D3D37F2BAE9FB65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_5D3D37F2BAE9FB65_OFFSET))(this);
	}

	::System::Void _OnStop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41__ONSTOP_OFFSET))(this);
	}

	::System::Void Method_2_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void Method_2_326C15C73868CA24(::System::Int16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_326C15C73868CA24_OFFSET))(this, a1);
	}

	::System::Void Method_2_D3A74B3A0A824B0A(::RPG::GameCore::FourRotateVoxelLevelSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelLevelSettings*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_D3A74B3A0A824B0A_OFFSET))(this, a1);
	}

	::System::Void Method_2_45B5CA713DA5A736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_45B5CA713DA5A736_OFFSET))(this);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void _OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41__ONCLEAR_OFFSET))(this);
	}

	::System::Void _SetPostProcessOnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41__SETPOSTPROCESSONINIT_OFFSET))(this);
	}

	::System::Void _SetPostProcessOnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41__SETPOSTPROCESSONCLEAR_OFFSET))(this);
	}

	::System::Boolean _CanLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41__CANLATEUPDATE_OFFSET))(this);
	}

	::System::Void _OnLateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41__ONLATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_81FEFD1B22CE37A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_81FEFD1B22CE37A2_OFFSET))(this);
	}

	::System::Int32 Method_2_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::Class_2_BCFC54C6C3BB4207* Method_2_E5630A859AA24FB3()
	{
		return ((::Class_2_BCFC54C6C3BB4207*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_E5630A859AA24FB3_OFFSET))(this);
	}

	::System::Void Method_2_85434A11E0B64A3B(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameEntityConfig*, ::Class_2_B8E38BF47138A2E5*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameEntityConfig*, ::Class_2_B8E38BF47138A2E5*>*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_85434A11E0B64A3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BB1E557C1407BEB(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameEntityConfig*, ::Class_2_B8E38BF47138A2E5*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameEntityConfig*, ::Class_2_B8E38BF47138A2E5*>*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_3BB1E557C1407BEB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9B03FF6968A7B763(::Class_2_B8E38BF47138A2E5* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_9B03FF6968A7B763_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_8BCB3191E6BEE7CB_1_OFFSET))(this);
	}

	::Class_1_2CDF619C23140440* Method_2_24748FC20F375725()
	{
		return ((::Class_1_2CDF619C23140440*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::Class_3_912CC478F2B21832* Method_2_F239777256F9BA8F()
	{
		return ((::Class_3_912CC478F2B21832*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_F239777256F9BA8F_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean get_SkipStartCurve()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_GET_SKIPSTARTCURVE_OFFSET))(this);
	}

	::System::Void set_SkipStartCurve(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_SET_SKIPSTARTCURVE_OFFSET))(this, a1);
	}

	::System::UInt32 get_SpawnPositionEntityId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_GET_SPAWNPOSITIONENTITYID_OFFSET))(this);
	}

	::System::Void set_SpawnPositionEntityId(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_SET_SPAWNPOSITIONENTITYID_OFFSET))(this, a1);
	}

	::System::Void TriggerLittleGameCustomEvent(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET))(this, a1);
	}

	::System::Void TriggerLittleGameCustomEvent_1(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET))(this, a1, a2);
	}

	::System::Void AddLittleGameCustomEventListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET))(this, a1, a2);
	}

	::System::Void AddLittleGameCustomEventListener_1(::System::String* a1, ::System::UInt32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void RemoveLittleGameCustomEventListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET))(this, a1, a2);
	}

	::System::Void RemoveLittleGameCustomEventListener_1(::System::String* a1, ::System::UInt32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetLevelVarShort(::System::String* a1, ::RPG::GameCore::DynamicFloat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_SETLEVELVARSHORT_OFFSET))(this, a1, a2);
	}

	::System::Int16 EvaluateLevelVarShort(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::System::Int16(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_EVALUATELEVELVARSHORT_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint EvaluateLevelVarNumber(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_EVALUATELEVELVARNUMBER_OFFSET))(this, a1);
	}

	::System::Void AddLevelVariableListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_ADDLEVELVARIABLELISTENER_OFFSET))(this, a1, a2);
	}

	::System::Void RemoveLevelVariableListener(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_REMOVELEVELVARIABLELISTENER_OFFSET))(this, a1, a2);
	}

	::Class_1_47EE63CB5C4DC8FC_5* GetServices()
	{
		return ((::Class_1_47EE63CB5C4DC8FC_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_GETSERVICES_OFFSET))(this);
	}

	::System::Void Method_2_E4D7CA44911A3A88(::System::Boolean a1, ::RPG::Client::LittleGame::FiveDim::PlayerDisableInteractReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::LittleGame::FiveDim::PlayerDisableInteractReason))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_E4D7CA44911A3A88_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_2_9897A7575657242E()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_9897A7575657242E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void __OnTick_b__54_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41___ONTICK_B__54_0_OFFSET))(this);
	}

	static ::System::Int32 __BuildEntities_g__GetIndex_55_4(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41___BUILDENTITIES_G__GETINDEX_55_4_OFFSET))(a1);
	}
};
