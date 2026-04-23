#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"

class Class_2_2AB52985650A641C_Class_1_B8A20FEC1912A1AD;
class Class_2_4E07C96326FD0035_Class_1_EE8B4FAC2A8315CA;
class Class_2_751108DFDC405F93;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class AdvEffectConfig; }
namespace RPG::GameCore { class AdvTriggerEffectList; }
namespace RPG::GameCore { class EffectConfig; }
namespace RPG::GameCore { class JsonConfig; }
namespace RPG::GameCore { class LevelAdvEffectOverrideInfo; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEffect; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4E07C96326FD0035_DISPOSE_OFFSET UNITYSDK_OFFSET(0x98CC510)
#define CLASS_2_4E07C96326FD0035_GET_BLOCKOTHERENTITYEFFECTS_OFFSET UNITYSDK_OFFSET(0x98D0FD0)
#define CLASS_2_4E07C96326FD0035_METHOD_2_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x98CF100)
#define CLASS_2_4E07C96326FD0035_METHOD_2_117D6E49E7E02C23_OFFSET UNITYSDK_OFFSET(0x98CC7F0)
#define CLASS_2_4E07C96326FD0035_METHOD_2_171A78990297C4D8_OFFSET UNITYSDK_OFFSET(0x98CD4E0)
#define CLASS_2_4E07C96326FD0035_METHOD_2_1BE82BC94414160F_OFFSET UNITYSDK_OFFSET(0x98CF800)
#define CLASS_2_4E07C96326FD0035_METHOD_2_1C6C20AF82FBBC1A_OFFSET UNITYSDK_OFFSET(0x98CEB70)
#define CLASS_2_4E07C96326FD0035_METHOD_2_2633462A211DFA0A_OFFSET UNITYSDK_OFFSET(0x98CF9C0)
#define CLASS_2_4E07C96326FD0035_METHOD_2_26C10505EC7B83BF_OFFSET UNITYSDK_OFFSET(0x98D0460)
#define CLASS_2_4E07C96326FD0035_METHOD_2_324A41B0A8CAAF42_OFFSET UNITYSDK_OFFSET(0x98CEA00)
#define CLASS_2_4E07C96326FD0035_METHOD_2_351924BBE566B97B_OFFSET UNITYSDK_OFFSET(0x98CECC0)
#define CLASS_2_4E07C96326FD0035_METHOD_2_3E3080D7FEDFB5FD_OFFSET UNITYSDK_OFFSET(0x98CD840)
#define CLASS_2_4E07C96326FD0035_METHOD_2_425535E07371B55B_OFFSET UNITYSDK_OFFSET(0x98CC2B0)
#define CLASS_2_4E07C96326FD0035_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x98CB620)
#define CLASS_2_4E07C96326FD0035_METHOD_2_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x98CC910)
#define CLASS_2_4E07C96326FD0035_METHOD_2_48574B5CAFA7ED51_OFFSET UNITYSDK_OFFSET(0x98CB8C0)
#define CLASS_2_4E07C96326FD0035_METHOD_2_4A9DCECA1942BB1E_OFFSET UNITYSDK_OFFSET(0x98CC100)
#define CLASS_2_4E07C96326FD0035_METHOD_2_4D43FA57FC1E3606_OFFSET UNITYSDK_OFFSET(0x98CFF20)
#define CLASS_2_4E07C96326FD0035_METHOD_2_59E2538CF2D1A0AC_OFFSET UNITYSDK_OFFSET(0x98D0670)
#define CLASS_2_4E07C96326FD0035_METHOD_2_6562CE538BF30F61_OFFSET UNITYSDK_OFFSET(0x98D0A30)
#define CLASS_2_4E07C96326FD0035_METHOD_2_71556A63BDA81606_OFFSET UNITYSDK_OFFSET(0x98CD7C0)
#define CLASS_2_4E07C96326FD0035_METHOD_2_7419723BBE441FAC_OFFSET UNITYSDK_OFFSET(0x98CF550)
#define CLASS_2_4E07C96326FD0035_METHOD_2_7A920ECF739E1E9B_OFFSET UNITYSDK_OFFSET(0x98CEC40)
#define CLASS_2_4E07C96326FD0035_METHOD_2_7E9C4D81D04C3024_1_OFFSET UNITYSDK_OFFSET(0x98CE8C0)
#define CLASS_2_4E07C96326FD0035_METHOD_2_7E9C4D81D04C3024_OFFSET UNITYSDK_OFFSET(0x98CE4D0)
#define CLASS_2_4E07C96326FD0035_METHOD_2_8BB12FCF0BE4FD69_OFFSET UNITYSDK_OFFSET(0x98CE610)
#define CLASS_2_4E07C96326FD0035_METHOD_2_8F5AC3360E3E2C5E_OFFSET UNITYSDK_OFFSET(0x98CD740)
#define CLASS_2_4E07C96326FD0035_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x98CCE80)
#define CLASS_2_4E07C96326FD0035_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x98CE210)
#define CLASS_2_4E07C96326FD0035_METHOD_2_9E3751A8C9767297_OFFSET UNITYSDK_OFFSET(0x98CB520)
#define CLASS_2_4E07C96326FD0035_METHOD_2_A5086DED81676DE8_OFFSET UNITYSDK_OFFSET(0x98CDDB0)
#define CLASS_2_4E07C96326FD0035_METHOD_2_A65568B808AC59C2_OFFSET UNITYSDK_OFFSET(0x98CEC00)
#define CLASS_2_4E07C96326FD0035_METHOD_2_A839234C97F06D2D_OFFSET UNITYSDK_OFFSET(0x98CF5E0)
#define CLASS_2_4E07C96326FD0035_METHOD_2_AC6FFDFB28009F6B_OFFSET UNITYSDK_OFFSET(0x98CDA00)
#define CLASS_2_4E07C96326FD0035_METHOD_2_AD0A0470C4B5BFC0_OFFSET UNITYSDK_OFFSET(0x98CFE40)
#define CLASS_2_4E07C96326FD0035_METHOD_2_AE5D2F3CFBE15D74_1_OFFSET UNITYSDK_OFFSET(0x98CCCE0)
#define CLASS_2_4E07C96326FD0035_METHOD_2_AE5D2F3CFBE15D74_OFFSET UNITYSDK_OFFSET(0x98CF3B0)
#define CLASS_2_4E07C96326FD0035_METHOD_2_B635A7C904F00359_OFFSET UNITYSDK_OFFSET(0x98CEF90)
#define CLASS_2_4E07C96326FD0035_METHOD_2_BA02A633D288DFE5_OFFSET UNITYSDK_OFFSET(0x98CD380)
#define CLASS_2_4E07C96326FD0035_METHOD_2_C105A7B356CF12DB_OFFSET UNITYSDK_OFFSET(0x98CE280)
#define CLASS_2_4E07C96326FD0035_METHOD_2_C35ABDA3C35DF7C5_OFFSET UNITYSDK_OFFSET(0x98CD950)
#define CLASS_2_4E07C96326FD0035_METHOD_2_C8C9046C855DC8D4_OFFSET UNITYSDK_OFFSET(0x98D0EA0)
#define CLASS_2_4E07C96326FD0035_METHOD_2_C92B450F857D3FBC_OFFSET UNITYSDK_OFFSET(0x98CD8C0)
#define CLASS_2_4E07C96326FD0035_METHOD_2_CA1CBDB88349AD44_OFFSET UNITYSDK_OFFSET(0x98CD440)
#define CLASS_2_4E07C96326FD0035_METHOD_2_D997C0B622B034C8_OFFSET UNITYSDK_OFFSET(0x98CBDD0)
#define CLASS_2_4E07C96326FD0035_METHOD_2_DB0C73B8871BB304_1_OFFSET UNITYSDK_OFFSET(0x98CFCB0)
#define CLASS_2_4E07C96326FD0035_METHOD_2_DB0C73B8871BB304_OFFSET UNITYSDK_OFFSET(0x98CFAA0)
#define CLASS_2_4E07C96326FD0035_METHOD_2_DDBAEC63B9B81F06_OFFSET UNITYSDK_OFFSET(0x98CEF30)
#define CLASS_2_4E07C96326FD0035_METHOD_2_E2FD463B3BF06D3F_OFFSET UNITYSDK_OFFSET(0x98CD630)
#define CLASS_2_4E07C96326FD0035_METHOD_2_E4055E7D98F200E6_OFFSET UNITYSDK_OFFSET(0x98CD1F0)
#define CLASS_2_4E07C96326FD0035_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x98D0FF0)
#define CLASS_2_4E07C96326FD0035_SET_BLOCKOTHERENTITYEFFECTS_OFFSET UNITYSDK_OFFSET(0x98D0FE0)
#define CLASS_2_4E07C96326FD0035_TICK_OFFSET UNITYSDK_OFFSET(0x98CC240)
#define CLASS_2_4E07C96326FD0035__CCTOR_OFFSET UNITYSDK_OFFSET(0x98D1300)
#define CLASS_2_4E07C96326FD0035__CTOR_OFFSET UNITYSDK_OFFSET(0x98D11B0)
#define CLASS_2_4E07C96326FD0035__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x98CC170)
#define CLASS_2_4E07C96326FD0035___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x98D13C0)
#define CLASS_2_4E07C96326FD0035___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x98D1360)

inline static constexpr unsigned int Class_2_4E07C96326FD0035_TypeDefinitionIndex = 52838;

class Class_2_4E07C96326FD0035 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::String** StaticGet_Field_2_17()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4E07C96326FD0035_TypeDefinitionIndex)->GetStaticField(0x145D0);
	}
	static ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>** StaticGet_Field_2_16()
	{
		return (::Il2CppArray<::RPG::GameCore::MonoEffectFlag>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4E07C96326FD0035_TypeDefinitionIndex)->GetStaticField(0x145D8);
	}
	::RPG::Client::MonoEffectManager* Field_2_5; // 0x18
	::Class_2_4E07C96326FD0035_Class_1_EE8B4FAC2A8315CA* Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::TriggerEffectParamsRef>* Field_2_8; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_7; // 0x30
	::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* Field_2_11; // 0x38
	::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* Field_2_9; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdvEffectConfig*>* Field_2_2; // 0x48
	::RPG::GameCore::PropComponent* Field_2_12; // 0x50
	::RPG::GameCore::TaskContext* Field_2_4; // 0x58
	::System::Collections::Generic::List_1<::RPG::GameCore::JsonConfig*>* Field_2_15; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::TriggerEffectParamsRef>* Field_2_3; // 0x68
	::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* Field_2_10; // 0x70
	::Class_2_751108DFDC405F93* Field_2_13; // 0x78
	::System::Boolean Field_2_6; // 0x80
	::System::Boolean _BlockOtherEntityEffects_k__BackingField; // 0x81
	::System::Boolean Field_2_14; // 0x82

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035__CCTOR_OFFSET))();
	}

	::System::Void Method_2_9E3751A8C9767297(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_9E3751A8C9767297_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_48574B5CAFA7ED51(::RPG::PoolList_1<::Class_2_2AB52985650A641C_Class_1_B8A20FEC1912A1AD*>* a1, ::RPG::PoolList_1<::Class_2_2AB52985650A641C_Class_1_B8A20FEC1912A1AD*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::PoolList_1<::Class_2_2AB52985650A641C_Class_1_B8A20FEC1912A1AD*>*, ::RPG::PoolList_1<::Class_2_2AB52985650A641C_Class_1_B8A20FEC1912A1AD*>*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_48574B5CAFA7ED51_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_D997C0B622B034C8(::Class_2_2AB52985650A641C_Class_1_B8A20FEC1912A1AD* a1, ::System::Boolean a2, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_2AB52985650A641C_Class_1_B8A20FEC1912A1AD*, ::System::Boolean, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_D997C0B622B034C8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4A9DCECA1942BB1E(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_4A9DCECA1942BB1E_OFFSET))(this, a1, a2);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E4055E7D98F200E6(::System::Boolean a1, ::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_E4055E7D98F200E6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA1CBDB88349AD44(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_CA1CBDB88349AD44_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E2FD463B3BF06D3F(::Il2CppArray<::RPG::GameCore::EffectConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::EffectConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_E2FD463B3BF06D3F_OFFSET))(this, a1);
	}

	::System::Void Method_2_171A78990297C4D8(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_171A78990297C4D8_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E3080D7FEDFB5FD(::RPG::GameCore::AdvTriggerEffectList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvTriggerEffectList*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_3E3080D7FEDFB5FD_OFFSET))(this, a1);
	}

	::System::Void Method_2_8F5AC3360E3E2C5E(::RPG::GameCore::EffectConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EffectConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_8F5AC3360E3E2C5E_OFFSET))(this, a1);
	}

	::System::Void Method_2_71556A63BDA81606(::RPG::GameCore::TriggerEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEffect*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_71556A63BDA81606_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_464B80C09A37526F_OFFSET))(this);
	}

	::System::Void Method_2_7E9C4D81D04C3024()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_7E9C4D81D04C3024_OFFSET))(this);
	}

	::System::Void Method_2_7E9C4D81D04C3024_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_7E9C4D81D04C3024_1_OFFSET))(this);
	}

	::System::Void Method_2_324A41B0A8CAAF42(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_324A41B0A8CAAF42_OFFSET))(this, a1);
	}

	::System::Void Method_2_1C6C20AF82FBBC1A(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_1C6C20AF82FBBC1A_OFFSET))(this, a1);
	}

	::System::Void Method_2_117D6E49E7E02C23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_117D6E49E7E02C23_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* Method_2_A65568B808AC59C2()
	{
		return ((::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_A65568B808AC59C2_OFFSET))(this);
	}

	::System::Void Method_2_7A920ECF739E1E9B(::RPG::Client::TriggerEffectParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_7A920ECF739E1E9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_351924BBE566B97B(::RPG::Client::TriggerEffectParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_351924BBE566B97B_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DDBAEC63B9B81F06(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_DDBAEC63B9B81F06_OFFSET))(this, a1);
	}

	::System::Void Method_2_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_03C4FFAD29DE0852_OFFSET))(this);
	}

	::System::Void Method_2_AE5D2F3CFBE15D74()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_AE5D2F3CFBE15D74_OFFSET))(this);
	}

	::System::Void Method_2_AE5D2F3CFBE15D74_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_AE5D2F3CFBE15D74_1_OFFSET))(this);
	}

	::System::Void Method_2_7419723BBE441FAC(::RPG::Client::TriggerEffectParams* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_7419723BBE441FAC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_2633462A211DFA0A(::System::String* a1, ::RPG::GameCore::AdvEffectConfig*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::AdvEffectConfig*&))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_2633462A211DFA0A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DB0C73B8871BB304(::System::String* a1, ::RPG::Client::TriggerEffectParams* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_DB0C73B8871BB304_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DB0C73B8871BB304_1(::System::String* a1, ::RPG::Client::TriggerEffectParams*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::TriggerEffectParams*&))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_DB0C73B8871BB304_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_AD0A0470C4B5BFC0(::System::String* a1, ::RPG::Client::TriggerEffectParams*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::TriggerEffectParams*&))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_AD0A0470C4B5BFC0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4D43FA57FC1E3606(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_4D43FA57FC1E3606_OFFSET))(this, a1);
	}

	::System::Void Method_2_26C10505EC7B83BF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_26C10505EC7B83BF_OFFSET))(this, a1);
	}

	::System::Void Method_2_59E2538CF2D1A0AC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_59E2538CF2D1A0AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA02A633D288DFE5(::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_BA02A633D288DFE5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_2_6562CE538BF30F61(::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_6562CE538BF30F61_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8C9046C855DC8D4(::RPG::GameCore::AdvEffectConfig* a1, ::RPG::GameCore::LevelAdvEffectOverrideInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvEffectConfig*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_C8C9046C855DC8D4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1BE82BC94414160F(::RPG::Client::TriggerEffectParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_1BE82BC94414160F_OFFSET))(this, a1);
	}

	::System::Void Method_2_C92B450F857D3FBC(::RPG::GameCore::JsonConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_C92B450F857D3FBC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B635A7C904F00359(::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_B635A7C904F00359_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_425535E07371B55B(::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_425535E07371B55B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A839234C97F06D2D(::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_A839234C97F06D2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C105A7B356CF12DB(::RPG::GameCore::JsonConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_C105A7B356CF12DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_8BB12FCF0BE4FD69(::RPG::GameCore::JsonConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_8BB12FCF0BE4FD69_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC6FFDFB28009F6B(::RPG::GameCore::EffectConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EffectConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_AC6FFDFB28009F6B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A5086DED81676DE8(::RPG::GameCore::TriggerEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEffect*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_A5086DED81676DE8_OFFSET))(this, a1);
	}

	::System::Void Method_2_C35ABDA3C35DF7C5(::RPG::GameCore::AdvTriggerEffectList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvTriggerEffectList*))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_METHOD_2_C35ABDA3C35DF7C5_OFFSET))(this, a1);
	}

	::System::Boolean get_BlockOtherEntityEffects()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_GET_BLOCKOTHERENTITYEFFECTS_OFFSET))(this);
	}

	::System::Void set_BlockOtherEntityEffects(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_SET_BLOCKOTHERENTITYEFFECTS_OFFSET))(this, value);
	}

	::System::Void ResetToDefault()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_RESETTODEFAULT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
