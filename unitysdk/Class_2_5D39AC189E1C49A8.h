#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"

class Class_2_2A3EC717DD5B9846_Class_1_B8A20FEC1912A1AD;
class Class_2_5D39AC189E1C49A8_Class_1_5F6DF7B18D30AC6A;
class Class_2_F15F6264C4987650;
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

#define CLASS_2_5D39AC189E1C49A8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1415E960)
#define CLASS_2_5D39AC189E1C49A8_GET_BLOCKOTHERENTITYEFFECTS_OFFSET UNITYSDK_OFFSET(0x14163460)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_019C04DD793352A9_OFFSET UNITYSDK_OFFSET(0x14160B80)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_0565A565A4380CDC_OFFSET UNITYSDK_OFFSET(0x14160800)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_117D6E49E7E02C23_OFFSET UNITYSDK_OFFSET(0x1415EBB0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_1435EC5843AA7F8E_OFFSET UNITYSDK_OFFSET(0x14162520)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_171A78990297C4D8_OFFSET UNITYSDK_OFFSET(0x1415F3D0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_1C6C20AF82FBBC1A_OFFSET UNITYSDK_OFFSET(0x1415FBD0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_1CC8ACC142900B1D_OFFSET UNITYSDK_OFFSET(0x1415FD20)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0x1415FF80)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_2633462A211DFA0A_OFFSET UNITYSDK_OFFSET(0x14160530)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_2C1E0912B9297963_OFFSET UNITYSDK_OFFSET(0x141622C0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_313D0869FA2F54E9_OFFSET UNITYSDK_OFFSET(0x1415E450)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_324A41B0A8CAAF42_OFFSET UNITYSDK_OFFSET(0x1415FA60)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_3B865A370DBDF11F_OFFSET UNITYSDK_OFFSET(0x14162040)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_3E3080D7FEDFB5FD_OFFSET UNITYSDK_OFFSET(0x1415F720)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1415E1F0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_5911721BE651223D_OFFSET UNITYSDK_OFFSET(0x14161E90)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_5F2FE02953E6D08C_OFFSET UNITYSDK_OFFSET(0x1415F250)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_6458159D7CCACDFC_OFFSET UNITYSDK_OFFSET(0x14160A40)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_6562CE538BF30F61_OFFSET UNITYSDK_OFFSET(0x141616E0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_73C871312CC29FCD_OFFSET UNITYSDK_OFFSET(0x1415F330)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_7419723BBE441FAC_OFFSET UNITYSDK_OFFSET(0x141604A0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0x1415ECB0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_7A920ECF739E1E9B_OFFSET UNITYSDK_OFFSET(0x1415FCA0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_8573716B751478C1_OFFSET UNITYSDK_OFFSET(0x14161240)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_88F0DC2DE2B74947_OFFSET UNITYSDK_OFFSET(0x1415E7A0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_9C844AB9164FA35A_1_OFFSET UNITYSDK_OFFSET(0x1415F090)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_9C844AB9164FA35A_OFFSET UNITYSDK_OFFSET(0x141602E0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_9E3751A8C9767297_OFFSET UNITYSDK_OFFSET(0x1415E0F0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_A3F8E7F6B7EBC5D4_OFFSET UNITYSDK_OFFSET(0x14162F20)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_A65568B808AC59C2_OFFSET UNITYSDK_OFFSET(0x1415FC60)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_A927EE5C929DEF07_OFFSET UNITYSDK_OFFSET(0x1415F620)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_B635A7C904F00359_OFFSET UNITYSDK_OFFSET(0x141623B0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_BA02A633D288DFE5_OFFSET UNITYSDK_OFFSET(0x14161620)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_C35ABDA3C35DF7C5_OFFSET UNITYSDK_OFFSET(0x141633C0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_C8C9046C855DC8D4_OFFSET UNITYSDK_OFFSET(0x14161D60)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0x14161AD0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_DB08FB6317956E5D_OFFSET UNITYSDK_OFFSET(0x141627D0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_DB0C73B8871BB304_OFFSET UNITYSDK_OFFSET(0x14160600)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_DDBAEC63B9B81F06_OFFSET UNITYSDK_OFFSET(0x1415FF20)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_E2FD463B3BF06D3F_OFFSET UNITYSDK_OFFSET(0x1415F520)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_ED2AD443A6A309DC_OFFSET UNITYSDK_OFFSET(0x14162B40)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x1415F7A0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_EFEB83EAE54BAA83_OFFSET UNITYSDK_OFFSET(0x1415F6A0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_F0E013DCC0C9FE59_OFFSET UNITYSDK_OFFSET(0x141610F0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_F56D0501A2CD0B39_OFFSET UNITYSDK_OFFSET(0x14162A30)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_F74441856239DF08_1_OFFSET UNITYSDK_OFFSET(0x1415F940)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_F74441856239DF08_OFFSET UNITYSDK_OFFSET(0x1415F820)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_FD3DD5C175D53298_OFFSET UNITYSDK_OFFSET(0x1415E250)
#define CLASS_2_5D39AC189E1C49A8_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x14163480)
#define CLASS_2_5D39AC189E1C49A8_SET_BLOCKOTHERENTITYEFFECTS_OFFSET UNITYSDK_OFFSET(0x14163470)
#define CLASS_2_5D39AC189E1C49A8_TICK_OFFSET UNITYSDK_OFFSET(0x1415E8F0)
#define CLASS_2_5D39AC189E1C49A8__CCTOR_OFFSET UNITYSDK_OFFSET(0x141636B0)
#define CLASS_2_5D39AC189E1C49A8__CTOR_OFFSET UNITYSDK_OFFSET(0x141635E0)
#define CLASS_2_5D39AC189E1C49A8__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x1415E810)
#define CLASS_2_5D39AC189E1C49A8___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x14163770)
#define CLASS_2_5D39AC189E1C49A8___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x14163710)

inline static constexpr unsigned int Class_2_5D39AC189E1C49A8_TypeDefinitionIndex = 53545;

class Class_2_5D39AC189E1C49A8 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5D39AC189E1C49A8_TypeDefinitionIndex)->GetStaticField(0xF810);
	}
	static ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>** StaticGet_Field_2_1()
	{
		return (::Il2CppArray<::RPG::GameCore::MonoEffectFlag>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5D39AC189E1C49A8_TypeDefinitionIndex)->GetStaticField(0xF818);
	}
	::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* Field_2_2; // 0x18
	::Class_2_5D39AC189E1C49A8_Class_1_5F6DF7B18D30AC6A* Field_2_3; // 0x20
	::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* Field_2_4; // 0x28
	::RPG::GameCore::TaskContext* Field_2_5; // 0x30
	::Class_2_F15F6264C4987650* Field_2_6; // 0x38
	::RPG::Client::MonoEffectManager* Field_2_7; // 0x40
	::RPG::GameCore::PropComponent* Field_2_8; // 0x48
	::System::Collections::Generic::List_1<::RPG::GameCore::JsonConfig*>* Field_2_9; // 0x50
	::System::Collections::Generic::List_1<::RPG::Client::TriggerEffectParamsRef>* Field_2_10; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::TriggerEffectParamsRef>* Field_2_11; // 0x60
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_12; // 0x68
	::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* Field_2_13; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdvEffectConfig*>* Field_2_14; // 0x78
	::System::Boolean Field_2_15; // 0x80
	::System::Boolean Field_2_16; // 0x81
	::System::Boolean _BlockOtherEntityEffects_k__BackingField; // 0x82

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8__CCTOR_OFFSET))();
	}

	::System::Void Method_2_9E3751A8C9767297(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_9E3751A8C9767297_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_FD3DD5C175D53298(::RPG::PoolList_1<::Class_2_2A3EC717DD5B9846_Class_1_B8A20FEC1912A1AD*>* a1, ::RPG::PoolList_1<::Class_2_2A3EC717DD5B9846_Class_1_B8A20FEC1912A1AD*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::PoolList_1<::Class_2_2A3EC717DD5B9846_Class_1_B8A20FEC1912A1AD*>*, ::RPG::PoolList_1<::Class_2_2A3EC717DD5B9846_Class_1_B8A20FEC1912A1AD*>*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_FD3DD5C175D53298_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_313D0869FA2F54E9(::Class_2_2A3EC717DD5B9846_Class_1_B8A20FEC1912A1AD* a1, ::System::Boolean a2, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_2A3EC717DD5B9846_Class_1_B8A20FEC1912A1AD*, ::System::Boolean, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_313D0869FA2F54E9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_88F0DC2DE2B74947(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_88F0DC2DE2B74947_OFFSET))(this, a1, a2);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5F2FE02953E6D08C(::System::Boolean a1, ::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_5F2FE02953E6D08C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_73C871312CC29FCD(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_73C871312CC29FCD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E2FD463B3BF06D3F(::Il2CppArray<::RPG::GameCore::EffectConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::EffectConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_E2FD463B3BF06D3F_OFFSET))(this, a1);
	}

	::System::Void Method_2_171A78990297C4D8(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_171A78990297C4D8_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E3080D7FEDFB5FD(::RPG::GameCore::AdvTriggerEffectList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvTriggerEffectList*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_3E3080D7FEDFB5FD_OFFSET))(this, a1);
	}

	::System::Void Method_2_A927EE5C929DEF07(::RPG::GameCore::EffectConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EffectConfig*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_A927EE5C929DEF07_OFFSET))(this, a1);
	}

	::System::Void Method_2_EFEB83EAE54BAA83(::RPG::GameCore::TriggerEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEffect*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_EFEB83EAE54BAA83_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_2_777C630B90A28EF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_777C630B90A28EF1_OFFSET))(this);
	}

	::System::Void Method_2_F74441856239DF08()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_F74441856239DF08_OFFSET))(this);
	}

	::System::Void Method_2_F74441856239DF08_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_F74441856239DF08_1_OFFSET))(this);
	}

	::System::Void Method_2_324A41B0A8CAAF42(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_324A41B0A8CAAF42_OFFSET))(this, a1);
	}

	::System::Void Method_2_1C6C20AF82FBBC1A(::RPG::Client::MonoEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_1C6C20AF82FBBC1A_OFFSET))(this, a1);
	}

	::System::Void Method_2_117D6E49E7E02C23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_117D6E49E7E02C23_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* Method_2_A65568B808AC59C2()
	{
		return ((::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_A65568B808AC59C2_OFFSET))(this);
	}

	::System::Void Method_2_7A920ECF739E1E9B(::RPG::Client::TriggerEffectParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_7A920ECF739E1E9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_1CC8ACC142900B1D(::RPG::Client::TriggerEffectParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_1CC8ACC142900B1D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DDBAEC63B9B81F06(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_DDBAEC63B9B81F06_OFFSET))(this, a1);
	}

	::System::Void Method_2_25EC451C0EA68F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_25EC451C0EA68F53_OFFSET))(this);
	}

	::System::Void Method_2_9C844AB9164FA35A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_9C844AB9164FA35A_OFFSET))(this);
	}

	::System::Void Method_2_9C844AB9164FA35A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_9C844AB9164FA35A_1_OFFSET))(this);
	}

	::System::Void Method_2_7419723BBE441FAC(::RPG::Client::TriggerEffectParams* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_7419723BBE441FAC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_2633462A211DFA0A(::System::String* a1, ::RPG::GameCore::AdvEffectConfig*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::AdvEffectConfig*&))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_2633462A211DFA0A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DB0C73B8871BB304(::System::String* a1, ::RPG::Client::TriggerEffectParams* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_DB0C73B8871BB304_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_0565A565A4380CDC(::System::String* a1, ::RPG::Client::TriggerEffectParams*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::TriggerEffectParams*&))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_0565A565A4380CDC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_6458159D7CCACDFC(::System::String* a1, ::RPG::Client::TriggerEffectParams*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::TriggerEffectParams*&))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_6458159D7CCACDFC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_019C04DD793352A9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_019C04DD793352A9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0E013DCC0C9FE59(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_F0E013DCC0C9FE59_OFFSET))(this, a1);
	}

	::System::Void Method_2_8573716B751478C1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_8573716B751478C1_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA02A633D288DFE5(::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_BA02A633D288DFE5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DA37DFE3A5BDA9F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_DA37DFE3A5BDA9F4_OFFSET))(this);
	}

	::System::Void Method_2_6562CE538BF30F61(::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_6562CE538BF30F61_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8C9046C855DC8D4(::RPG::GameCore::AdvEffectConfig* a1, ::RPG::GameCore::LevelAdvEffectOverrideInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvEffectConfig*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_C8C9046C855DC8D4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5911721BE651223D(::RPG::Client::TriggerEffectParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_5911721BE651223D_OFFSET))(this, a1);
	}

	::System::Void Method_2_2C1E0912B9297963(::RPG::GameCore::JsonConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_2C1E0912B9297963_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B635A7C904F00359(::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_B635A7C904F00359_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1435EC5843AA7F8E(::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_1435EC5843AA7F8E_OFFSET))(this, a1);
	}

	::System::Void Method_2_3B865A370DBDF11F(::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_3B865A370DBDF11F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DB08FB6317956E5D(::RPG::GameCore::JsonConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_DB08FB6317956E5D_OFFSET))(this, a1);
	}

	::System::Void Method_2_F56D0501A2CD0B39(::RPG::GameCore::JsonConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_F56D0501A2CD0B39_OFFSET))(this, a1);
	}

	::System::Void Method_2_ED2AD443A6A309DC(::RPG::GameCore::EffectConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EffectConfig*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_ED2AD443A6A309DC_OFFSET))(this, a1);
	}

	::System::Void Method_2_A3F8E7F6B7EBC5D4(::RPG::GameCore::TriggerEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEffect*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_A3F8E7F6B7EBC5D4_OFFSET))(this, a1);
	}

	::System::Void Method_2_C35ABDA3C35DF7C5(::RPG::GameCore::AdvTriggerEffectList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvTriggerEffectList*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_C35ABDA3C35DF7C5_OFFSET))(this, a1);
	}

	::System::Boolean get_BlockOtherEntityEffects()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_GET_BLOCKOTHERENTITYEFFECTS_OFFSET))(this);
	}

	::System::Void set_BlockOtherEntityEffects(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_SET_BLOCKOTHERENTITYEFFECTS_OFFSET))(this, a1);
	}

	::System::Void ResetToDefault()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_RESETTODEFAULT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
