#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"

class Class_2_2AB52985650A641C_Class_1_B8A20FEC1912A1AD;
class Class_2_3DB821AE92F66655_Class_1_5F6DF7B18D30AC6A;
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

#define CLASS_2_3DB821AE92F66655_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB270160)
#define CLASS_2_3DB821AE92F66655_GET_BLOCKOTHERENTITYEFFECTS_OFFSET UNITYSDK_OFFSET(0xB274A60)
#define CLASS_2_3DB821AE92F66655_METHOD_2_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0xB272BE0)
#define CLASS_2_3DB821AE92F66655_METHOD_2_0BD910F164B4EBBD_OFFSET UNITYSDK_OFFSET(0xB2715D0)
#define CLASS_2_3DB821AE92F66655_METHOD_2_117D6E49E7E02C23_OFFSET UNITYSDK_OFFSET(0xB2703C0)
#define CLASS_2_3DB821AE92F66655_METHOD_2_171A78990297C4D8_OFFSET UNITYSDK_OFFSET(0xB2710B0)
#define CLASS_2_3DB821AE92F66655_METHOD_2_1C6C20AF82FBBC1A_OFFSET UNITYSDK_OFFSET(0xB272650)
#define CLASS_2_3DB821AE92F66655_METHOD_2_2633462A211DFA0A_OFFSET UNITYSDK_OFFSET(0xB2734A0)
#define CLASS_2_3DB821AE92F66655_METHOD_2_26C10505EC7B83BF_OFFSET UNITYSDK_OFFSET(0xB273EF0)
#define CLASS_2_3DB821AE92F66655_METHOD_2_324A41B0A8CAAF42_OFFSET UNITYSDK_OFFSET(0xB2724E0)
#define CLASS_2_3DB821AE92F66655_METHOD_2_351924BBE566B97B_OFFSET UNITYSDK_OFFSET(0xB2727A0)
#define CLASS_2_3DB821AE92F66655_METHOD_2_365CDDD9A524D46C_OFFSET UNITYSDK_OFFSET(0xB2732E0)
#define CLASS_2_3DB821AE92F66655_METHOD_2_3E3080D7FEDFB5FD_OFFSET UNITYSDK_OFFSET(0xB271410)
#define CLASS_2_3DB821AE92F66655_METHOD_2_425535E07371B55B_OFFSET UNITYSDK_OFFSET(0xB26FF00)
#define CLASS_2_3DB821AE92F66655_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB26F2F0)
#define CLASS_2_3DB821AE92F66655_METHOD_2_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0xB2704E0)
#define CLASS_2_3DB821AE92F66655_METHOD_2_48574B5CAFA7ED51_OFFSET UNITYSDK_OFFSET(0xB26F590)
#define CLASS_2_3DB821AE92F66655_METHOD_2_4A9DCECA1942BB1E_OFFSET UNITYSDK_OFFSET(0xB26FD50)
#define CLASS_2_3DB821AE92F66655_METHOD_2_59E2538CF2D1A0AC_OFFSET UNITYSDK_OFFSET(0xB274100)
#define CLASS_2_3DB821AE92F66655_METHOD_2_64E468F1846E5C67_OFFSET UNITYSDK_OFFSET(0xB271310)
#define CLASS_2_3DB821AE92F66655_METHOD_2_6562CE538BF30F61_OFFSET UNITYSDK_OFFSET(0xB2744C0)
#define CLASS_2_3DB821AE92F66655_METHOD_2_7419723BBE441FAC_OFFSET UNITYSDK_OFFSET(0xB273030)
#define CLASS_2_3DB821AE92F66655_METHOD_2_7A920ECF739E1E9B_OFFSET UNITYSDK_OFFSET(0xB272720)
#define CLASS_2_3DB821AE92F66655_METHOD_2_7DC9AA1A2F8E9886_OFFSET UNITYSDK_OFFSET(0xB26FAA0)
#define CLASS_2_3DB821AE92F66655_METHOD_2_7E9C4D81D04C3024_1_OFFSET UNITYSDK_OFFSET(0xB2723A0)
#define CLASS_2_3DB821AE92F66655_METHOD_2_7E9C4D81D04C3024_OFFSET UNITYSDK_OFFSET(0xB271FB0)
#define CLASS_2_3DB821AE92F66655_METHOD_2_8BB12FCF0BE4FD69_OFFSET UNITYSDK_OFFSET(0xB2720F0)
#define CLASS_2_3DB821AE92F66655_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0xB270A50)
#define CLASS_2_3DB821AE92F66655_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB271CF0)
#define CLASS_2_3DB821AE92F66655_METHOD_2_98E79F85CB2090B1_OFFSET UNITYSDK_OFFSET(0xB271900)
#define CLASS_2_3DB821AE92F66655_METHOD_2_9E3751A8C9767297_OFFSET UNITYSDK_OFFSET(0xB26F1F0)
#define CLASS_2_3DB821AE92F66655_METHOD_2_A65568B808AC59C2_OFFSET UNITYSDK_OFFSET(0xB2726E0)
#define CLASS_2_3DB821AE92F66655_METHOD_2_A839234C97F06D2D_OFFSET UNITYSDK_OFFSET(0xB2730C0)
#define CLASS_2_3DB821AE92F66655_METHOD_2_AD0A0470C4B5BFC0_OFFSET UNITYSDK_OFFSET(0xB273920)
#define CLASS_2_3DB821AE92F66655_METHOD_2_AE5D2F3CFBE15D74_1_OFFSET UNITYSDK_OFFSET(0xB2708B0)
#define CLASS_2_3DB821AE92F66655_METHOD_2_AE5D2F3CFBE15D74_OFFSET UNITYSDK_OFFSET(0xB272E90)
#define CLASS_2_3DB821AE92F66655_METHOD_2_B635A7C904F00359_OFFSET UNITYSDK_OFFSET(0xB272A70)
#define CLASS_2_3DB821AE92F66655_METHOD_2_BA02A633D288DFE5_OFFSET UNITYSDK_OFFSET(0xB270F50)
#define CLASS_2_3DB821AE92F66655_METHOD_2_C105A7B356CF12DB_OFFSET UNITYSDK_OFFSET(0xB271D60)
#define CLASS_2_3DB821AE92F66655_METHOD_2_C35ABDA3C35DF7C5_OFFSET UNITYSDK_OFFSET(0xB271520)
#define CLASS_2_3DB821AE92F66655_METHOD_2_C8C9046C855DC8D4_OFFSET UNITYSDK_OFFSET(0xB274930)
#define CLASS_2_3DB821AE92F66655_METHOD_2_C92B450F857D3FBC_OFFSET UNITYSDK_OFFSET(0xB271490)
#define CLASS_2_3DB821AE92F66655_METHOD_2_CA1CBDB88349AD44_OFFSET UNITYSDK_OFFSET(0xB271010)
#define CLASS_2_3DB821AE92F66655_METHOD_2_CAAD348673D160EF_OFFSET UNITYSDK_OFFSET(0xB273A00)
#define CLASS_2_3DB821AE92F66655_METHOD_2_DB0C73B8871BB304_1_OFFSET UNITYSDK_OFFSET(0xB273790)
#define CLASS_2_3DB821AE92F66655_METHOD_2_DB0C73B8871BB304_OFFSET UNITYSDK_OFFSET(0xB273580)
#define CLASS_2_3DB821AE92F66655_METHOD_2_DDBAEC63B9B81F06_OFFSET UNITYSDK_OFFSET(0xB272A10)
#define CLASS_2_3DB821AE92F66655_METHOD_2_E042974966CAD4B5_OFFSET UNITYSDK_OFFSET(0xB271390)
#define CLASS_2_3DB821AE92F66655_METHOD_2_E2FD463B3BF06D3F_OFFSET UNITYSDK_OFFSET(0xB271200)
#define CLASS_2_3DB821AE92F66655_METHOD_2_E4055E7D98F200E6_OFFSET UNITYSDK_OFFSET(0xB270DC0)
#define CLASS_2_3DB821AE92F66655_SET_BLOCKOTHERENTITYEFFECTS_OFFSET UNITYSDK_OFFSET(0xB274A70)
#define CLASS_2_3DB821AE92F66655_TICK_OFFSET UNITYSDK_OFFSET(0xB26FE90)
#define CLASS_2_3DB821AE92F66655__CCTOR_OFFSET UNITYSDK_OFFSET(0xB274BD0)
#define CLASS_2_3DB821AE92F66655__CTOR_OFFSET UNITYSDK_OFFSET(0xB274A80)
#define CLASS_2_3DB821AE92F66655__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xB26FDC0)
#define CLASS_2_3DB821AE92F66655___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xB274C90)
#define CLASS_2_3DB821AE92F66655___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xB274C30)

inline static constexpr unsigned int Class_2_3DB821AE92F66655_TypeDefinitionIndex = 46174;

class Class_2_3DB821AE92F66655 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>** StaticGet_Field_2_16()
	{
		return (::Il2CppArray<::RPG::GameCore::MonoEffectFlag>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3DB821AE92F66655_TypeDefinitionIndex)->GetStaticField(0x3A0C0);
	}
	static ::System::String** StaticGet_Field_2_17()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3DB821AE92F66655_TypeDefinitionIndex)->GetStaticField(0x3A0C8);
	}
	::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* Field_2_10; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdvEffectConfig*>* Field_2_2; // 0x20
	::RPG::Client::MonoEffectManager* Field_2_5; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::JsonConfig*>* Field_2_15; // 0x30
	::Class_2_751108DFDC405F93* Field_2_13; // 0x38
	::System::Collections::Generic::List_1<::RPG::Client::TriggerEffectParamsRef>* Field_2_8; // 0x40
	::RPG::GameCore::PropComponent* Field_2_12; // 0x48
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_7; // 0x50
	::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* Field_2_9; // 0x58
	::RPG::GameCore::TaskContext* Field_2_4; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::TriggerEffectParamsRef>* Field_2_3; // 0x68
	::Class_2_3DB821AE92F66655_Class_1_5F6DF7B18D30AC6A* Field_2_0; // 0x70
	::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* Field_2_11; // 0x78
	::System::Boolean Field_2_14; // 0x80
	::System::Boolean Field_2_6; // 0x81
	::System::Boolean _BlockOtherEntityEffects_k__BackingField; // 0x82

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655__CCTOR_OFFSET))();
	}

	::System::Void Method_2_9E3751A8C9767297(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_9E3751A8C9767297_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_48574B5CAFA7ED51(::RPG::PoolList_1<::Class_2_2AB52985650A641C_Class_1_B8A20FEC1912A1AD*>* a1, ::RPG::PoolList_1<::Class_2_2AB52985650A641C_Class_1_B8A20FEC1912A1AD*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::PoolList_1<::Class_2_2AB52985650A641C_Class_1_B8A20FEC1912A1AD*>*, ::RPG::PoolList_1<::Class_2_2AB52985650A641C_Class_1_B8A20FEC1912A1AD*>*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_48574B5CAFA7ED51_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_7DC9AA1A2F8E9886(::Class_2_2AB52985650A641C_Class_1_B8A20FEC1912A1AD* a1, ::System::Boolean a2, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_2AB52985650A641C_Class_1_B8A20FEC1912A1AD*, ::System::Boolean, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_7DC9AA1A2F8E9886_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4A9DCECA1942BB1E(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_4A9DCECA1942BB1E_OFFSET))(this, a1, a2);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E4055E7D98F200E6(::System::Boolean a1, ::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_E4055E7D98F200E6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA1CBDB88349AD44(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_CA1CBDB88349AD44_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E2FD463B3BF06D3F(::Il2CppArray<::RPG::GameCore::EffectConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::EffectConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_E2FD463B3BF06D3F_OFFSET))(this, a1);
	}

	::System::Void Method_2_171A78990297C4D8(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_171A78990297C4D8_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E3080D7FEDFB5FD(::RPG::GameCore::AdvTriggerEffectList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvTriggerEffectList*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_3E3080D7FEDFB5FD_OFFSET))(this, a1);
	}

	::System::Void Method_2_64E468F1846E5C67(::RPG::GameCore::EffectConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EffectConfig*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_64E468F1846E5C67_OFFSET))(this, a1);
	}

	::System::Void Method_2_E042974966CAD4B5(::RPG::GameCore::TriggerEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEffect*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_E042974966CAD4B5_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_464B80C09A37526F_OFFSET))(this);
	}

	::System::Void Method_2_7E9C4D81D04C3024()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_7E9C4D81D04C3024_OFFSET))(this);
	}

	::System::Void Method_2_7E9C4D81D04C3024_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_7E9C4D81D04C3024_1_OFFSET))(this);
	}

	::System::Void Method_2_324A41B0A8CAAF42(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_324A41B0A8CAAF42_OFFSET))(this, a1);
	}

	::System::Void Method_2_1C6C20AF82FBBC1A(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_1C6C20AF82FBBC1A_OFFSET))(this, a1);
	}

	::System::Void Method_2_117D6E49E7E02C23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_117D6E49E7E02C23_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* Method_2_A65568B808AC59C2()
	{
		return ((::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_A65568B808AC59C2_OFFSET))(this);
	}

	::System::Void Method_2_7A920ECF739E1E9B(::RPG::Client::TriggerEffectParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_7A920ECF739E1E9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_351924BBE566B97B(::RPG::Client::TriggerEffectParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_351924BBE566B97B_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DDBAEC63B9B81F06(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_DDBAEC63B9B81F06_OFFSET))(this, a1);
	}

	::System::Void Method_2_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_03C4FFAD29DE0852_OFFSET))(this);
	}

	::System::Void Method_2_AE5D2F3CFBE15D74()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_AE5D2F3CFBE15D74_OFFSET))(this);
	}

	::System::Void Method_2_AE5D2F3CFBE15D74_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_AE5D2F3CFBE15D74_1_OFFSET))(this);
	}

	::System::Void Method_2_7419723BBE441FAC(::RPG::Client::TriggerEffectParams* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_7419723BBE441FAC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_2633462A211DFA0A(::System::String* a1, ::RPG::GameCore::AdvEffectConfig*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::AdvEffectConfig*&))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_2633462A211DFA0A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DB0C73B8871BB304(::System::String* a1, ::RPG::Client::TriggerEffectParams* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_DB0C73B8871BB304_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DB0C73B8871BB304_1(::System::String* a1, ::RPG::Client::TriggerEffectParams*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::TriggerEffectParams*&))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_DB0C73B8871BB304_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_AD0A0470C4B5BFC0(::System::String* a1, ::RPG::Client::TriggerEffectParams*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::TriggerEffectParams*&))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_AD0A0470C4B5BFC0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CAAD348673D160EF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_CAAD348673D160EF_OFFSET))(this, a1);
	}

	::System::Void Method_2_26C10505EC7B83BF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_26C10505EC7B83BF_OFFSET))(this, a1);
	}

	::System::Void Method_2_59E2538CF2D1A0AC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_59E2538CF2D1A0AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA02A633D288DFE5(::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_BA02A633D288DFE5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_2_6562CE538BF30F61(::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_6562CE538BF30F61_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8C9046C855DC8D4(::RPG::GameCore::AdvEffectConfig* a1, ::RPG::GameCore::LevelAdvEffectOverrideInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvEffectConfig*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_C8C9046C855DC8D4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_365CDDD9A524D46C(::RPG::Client::TriggerEffectParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_365CDDD9A524D46C_OFFSET))(this, a1);
	}

	::System::Void Method_2_C92B450F857D3FBC(::RPG::GameCore::JsonConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_C92B450F857D3FBC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B635A7C904F00359(::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_B635A7C904F00359_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_425535E07371B55B(::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_425535E07371B55B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A839234C97F06D2D(::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_A839234C97F06D2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C105A7B356CF12DB(::RPG::GameCore::JsonConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_C105A7B356CF12DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_8BB12FCF0BE4FD69(::RPG::GameCore::JsonConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_8BB12FCF0BE4FD69_OFFSET))(this, a1);
	}

	::System::Void Method_2_0BD910F164B4EBBD(::RPG::GameCore::EffectConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EffectConfig*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_0BD910F164B4EBBD_OFFSET))(this, a1);
	}

	::System::Void Method_2_98E79F85CB2090B1(::RPG::GameCore::TriggerEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEffect*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_98E79F85CB2090B1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C35ABDA3C35DF7C5(::RPG::GameCore::AdvTriggerEffectList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvTriggerEffectList*))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_METHOD_2_C35ABDA3C35DF7C5_OFFSET))(this, a1);
	}

	::System::Boolean get_BlockOtherEntityEffects()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_GET_BLOCKOTHERENTITYEFFECTS_OFFSET))(this);
	}

	::System::Void set_BlockOtherEntityEffects(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655_SET_BLOCKOTHERENTITYEFFECTS_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3DB821AE92F66655___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
