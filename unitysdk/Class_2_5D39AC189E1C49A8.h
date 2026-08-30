#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_00007E9796694121;
class Class_2_2A3EC717DD5B9846_Class_1_B8A20FEC1912A1AD;
class Class_2_5D39AC189E1C49A8_Class_1_5F6DF7B18D30AC6A;
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

#define CLASS_2_5D39AC189E1C49A8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1607A790)
#define CLASS_2_5D39AC189E1C49A8_GET_BLOCKOTHERENTITYEFFECTS_OFFSET UNITYSDK_OFFSET(0x1607F460)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_0565A565A4380CDC_OFFSET UNITYSDK_OFFSET(0x1607DFD0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_0DD61B7EBFB9E6E3_OFFSET UNITYSDK_OFFSET(0x1607E8F0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_117D6E49E7E02C23_OFFSET UNITYSDK_OFFSET(0x1607A9F0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_171A78990297C4D8_OFFSET UNITYSDK_OFFSET(0x1607B600)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_1C6C20AF82FBBC1A_OFFSET UNITYSDK_OFFSET(0x1607CE00)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_1CC8ACC142900B1D_OFFSET UNITYSDK_OFFSET(0x1607CF50)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0x1607D320)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_2633462A211DFA0A_OFFSET UNITYSDK_OFFSET(0x1607DD00)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_2740CB316C378C00_OFFSET UNITYSDK_OFFSET(0x1607BAC0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_2C1E0912B9297963_OFFSET UNITYSDK_OFFSET(0x1607B9D0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_313D0869FA2F54E9_OFFSET UNITYSDK_OFFSET(0x16079F70)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_324A41B0A8CAAF42_OFFSET UNITYSDK_OFFSET(0x1607CC90)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x160797E0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_5911721BE651223D_OFFSET UNITYSDK_OFFSET(0x1607DB50)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_5F2FE02953E6D08C_OFFSET UNITYSDK_OFFSET(0x1607B3C0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_6458159D7CCACDFC_OFFSET UNITYSDK_OFFSET(0x1607E210)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_6562CE538BF30F61_OFFSET UNITYSDK_OFFSET(0x1607EF40)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_6FF9E88CDD3389EF_OFFSET UNITYSDK_OFFSET(0x1607B850)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_73C871312CC29FCD_OFFSET UNITYSDK_OFFSET(0x1607B560)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_7419723BBE441FAC_OFFSET UNITYSDK_OFFSET(0x1607D840)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_75671310B3DFDD76_OFFSET UNITYSDK_OFFSET(0x1607B950)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0x1607AAF0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_7A920ECF739E1E9B_OFFSET UNITYSDK_OFFSET(0x1607CED0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_80C6F9284462A545_OFFSET UNITYSDK_OFFSET(0x1607BBA0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_8573716B751478C1_OFFSET UNITYSDK_OFFSET(0x1607EB60)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_88F0DC2DE2B74947_OFFSET UNITYSDK_OFFSET(0x1607A2C0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_9690B767E7517EB1_OFFSET UNITYSDK_OFFSET(0x1607E350)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_9C844AB9164FA35A_1_OFFSET UNITYSDK_OFFSET(0x1607AED0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_9C844AB9164FA35A_OFFSET UNITYSDK_OFFSET(0x1607D680)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_9E3751A8C9767297_OFFSET UNITYSDK_OFFSET(0x160796E0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_A3F8E7F6B7EBC5D4_OFFSET UNITYSDK_OFFSET(0x1607BFF0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_A65568B808AC59C2_OFFSET UNITYSDK_OFFSET(0x1607CE90)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_B635A7C904F00359_OFFSET UNITYSDK_OFFSET(0x1607D1B0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_BA02A633D288DFE5_OFFSET UNITYSDK_OFFSET(0x1607B4A0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_BACBA6D0BDDA5A0E_OFFSET UNITYSDK_OFFSET(0x1607E3B0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_BD1A7230D64CA717_OFFSET UNITYSDK_OFFSET(0x1607A4E0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_BFC58C29ADC15578_OFFSET UNITYSDK_OFFSET(0x1607D8D0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_C8C9046C855DC8D4_OFFSET UNITYSDK_OFFSET(0x1607F330)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0x1607B090)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_DB08FB6317956E5D_OFFSET UNITYSDK_OFFSET(0x1607C510)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_DB0C73B8871BB304_OFFSET UNITYSDK_OFFSET(0x1607DDD0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_DDBAEC63B9B81F06_OFFSET UNITYSDK_OFFSET(0x1607D150)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_E2FD463B3BF06D3F_OFFSET UNITYSDK_OFFSET(0x1607B750)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x1607C490)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_EFEB83EAE54BAA83_OFFSET UNITYSDK_OFFSET(0x1607B8D0)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_F56D0501A2CD0B39_OFFSET UNITYSDK_OFFSET(0x1607C890)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_F74441856239DF08_1_OFFSET UNITYSDK_OFFSET(0x1607CB70)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_F74441856239DF08_OFFSET UNITYSDK_OFFSET(0x1607C770)
#define CLASS_2_5D39AC189E1C49A8_METHOD_2_FD3DD5C175D53298_OFFSET UNITYSDK_OFFSET(0x16079AA0)
#define CLASS_2_5D39AC189E1C49A8_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x1607F480)
#define CLASS_2_5D39AC189E1C49A8_SET_BLOCKOTHERENTITYEFFECTS_OFFSET UNITYSDK_OFFSET(0x1607F470)
#define CLASS_2_5D39AC189E1C49A8_TICK_OFFSET UNITYSDK_OFFSET(0x1607A470)
#define CLASS_2_5D39AC189E1C49A8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1607F6A0)
#define CLASS_2_5D39AC189E1C49A8__CTOR_OFFSET UNITYSDK_OFFSET(0x1607F5D0)
#define CLASS_2_5D39AC189E1C49A8__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x1607A330)

inline static constexpr unsigned int Class_2_5D39AC189E1C49A8_TypeDefinitionIndex = 57482;

class Class_2_5D39AC189E1C49A8 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::String** StaticGet_MGMGLGLNBBK()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5D39AC189E1C49A8_TypeDefinitionIndex)->GetStaticField(0x21320);
	}
	static ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>** StaticGet_OLGPGGOIHLE()
	{
		return (::Il2CppArray<::RPG::GameCore::MonoEffectFlag>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5D39AC189E1C49A8_TypeDefinitionIndex)->GetStaticField(0x21328);
	}
	::System::Collections::Generic::List_1<::RPG::Client::TriggerEffectParamsRef>* IFFGEFKJCDH; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_2_5D39AC189E1C49A8_Class_1_5F6DF7B18D30AC6A* NKHCHDALCJE; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::TriggerEffectParamsRef>* ADLBDCIKOHI; // 0x30
	::RPG::Client::MonoEffectManager* KENLJFPJNJO; // 0x38
	::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* PFDCFCCBLBG; // 0x40
	::System::Collections::Generic::List_1<::System::UInt32>* FLLCAKMNNLH; // 0x48
	::System::Collections::Generic::List_1<::RPG::GameCore::JsonConfig*>* IJMKMLPFIJE; // 0x50
	::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>* MPCMNIDNHJE; // 0x58
	::RPG::GameCore::PropComponent* IGLCEJGPMJN; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdvEffectConfig*>* KNJAEFDMNJJ; // 0x68
	::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* ODFPMCFIJLM; // 0x70
	::Class_2_00007E9796694121* BLCANICCCLP; // 0x78
	::System::Boolean _BlockOtherEntityEffects_k__BackingField; // 0x80
	::System::Boolean JBFGNEDEMMD; // 0x81
	::System::Boolean GBJAELBFONJ; // 0x82

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

	::System::Void Method_2_75671310B3DFDD76(::RPG::GameCore::AdvTriggerEffectList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvTriggerEffectList*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_75671310B3DFDD76_OFFSET))(this, a1);
	}

	::System::Void Method_2_6FF9E88CDD3389EF(::RPG::GameCore::EffectConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EffectConfig*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_6FF9E88CDD3389EF_OFFSET))(this, a1);
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

	::System::Void Method_2_9690B767E7517EB1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_9690B767E7517EB1_OFFSET))(this, a1);
	}

	::System::Void Method_2_BACBA6D0BDDA5A0E(::System::String* a1, ::System::Nullable_1<::System::Boolean> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_BACBA6D0BDDA5A0E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0DD61B7EBFB9E6E3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_0DD61B7EBFB9E6E3_OFFSET))(this, a1);
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

	::System::Void Method_2_BD1A7230D64CA717(::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_BD1A7230D64CA717_OFFSET))(this, a1);
	}

	::System::Void Method_2_BFC58C29ADC15578(::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParamsRef>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_BFC58C29ADC15578_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DB08FB6317956E5D(::RPG::GameCore::JsonConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_DB08FB6317956E5D_OFFSET))(this, a1);
	}

	::System::Void Method_2_F56D0501A2CD0B39(::RPG::GameCore::JsonConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_F56D0501A2CD0B39_OFFSET))(this, a1);
	}

	::System::Void Method_2_80C6F9284462A545(::RPG::GameCore::EffectConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EffectConfig*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_80C6F9284462A545_OFFSET))(this, a1);
	}

	::System::Void Method_2_A3F8E7F6B7EBC5D4(::RPG::GameCore::TriggerEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEffect*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_A3F8E7F6B7EBC5D4_OFFSET))(this, a1);
	}

	::System::Void Method_2_2740CB316C378C00(::RPG::GameCore::AdvTriggerEffectList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvTriggerEffectList*))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_METHOD_2_2740CB316C378C00_OFFSET))(this, a1);
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
};
