#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EraEntityType.h"
#include "unitysdk/RPG/Client/EraVisibleReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/Client/TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_1342B57709FD7AC5;
namespace RPG::Client { class EraFlipperCommonConfig; }
namespace RPG::Client { class EraFlipperManager; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class ProxyEffectProp; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_5B599AA9B6DFF68F_BEFOREDISPOSE_OFFSET UNITYSDK_OFFSET(0x138CC7C0)
#define CLASS_2_5B599AA9B6DFF68F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x138CCBD0)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_08E6E5B849FC7A4B_1_OFFSET UNITYSDK_OFFSET(0x138CE900)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_08E6E5B849FC7A4B_2_OFFSET UNITYSDK_OFFSET(0x138CEA10)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_08E6E5B849FC7A4B_OFFSET UNITYSDK_OFFSET(0x138CE8A0)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_091B1F0E0E06E7DD_OFFSET UNITYSDK_OFFSET(0x138CE960)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_110F0F8BA45288EF_OFFSET UNITYSDK_OFFSET(0x138CB810)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_1288E4E02611722A_OFFSET UNITYSDK_OFFSET(0x138CDD90)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_2AB2DA210EBA511D_OFFSET UNITYSDK_OFFSET(0x138CCDB0)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x138CD810)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x138CC770)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_731625464DEE752F_OFFSET UNITYSDK_OFFSET(0x138CE2A0)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_7BA5C34C54F10DFA_OFFSET UNITYSDK_OFFSET(0x138CC260)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_8C0E3211A8AE23ED_OFFSET UNITYSDK_OFFSET(0x138CD8E0)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_B1B466AFE3B0CC1E_OFFSET UNITYSDK_OFFSET(0x138CCB40)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_BA904CAFF6C7217F_OFFSET UNITYSDK_OFFSET(0x138CD860)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x138CE0F0)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x138CEA70)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_DAD3604E9A4C3C87_OFFSET UNITYSDK_OFFSET(0x138CD760)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_DB51C66BCC16DD6E_OFFSET UNITYSDK_OFFSET(0x138CE5C0)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_E0A763B79A4221CB_OFFSET UNITYSDK_OFFSET(0x138CD6A0)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_F04DA50340D2CF1E_OFFSET UNITYSDK_OFFSET(0x138CB330)
#define CLASS_2_5B599AA9B6DFF68F_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x138CD310)
#define CLASS_2_5B599AA9B6DFF68F_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x138CD100)
#define CLASS_2_5B599AA9B6DFF68F_TICK_OFFSET UNITYSDK_OFFSET(0x138CC270)
#define CLASS_2_5B599AA9B6DFF68F__BEFOREDISPOSE_B__4_0_OFFSET UNITYSDK_OFFSET(0x138CEB60)
#define CLASS_2_5B599AA9B6DFF68F__CTOR_OFFSET UNITYSDK_OFFSET(0x138CEAB0)
#define CLASS_2_5B599AA9B6DFF68F__INITCOMPONENT_B__0_0_OFFSET UNITYSDK_OFFSET(0x138CEAC0)
#define CLASS_2_5B599AA9B6DFF68F__INITCOMPONENT_B__0_1_OFFSET UNITYSDK_OFFSET(0x138CEAF0)
#define CLASS_2_5B599AA9B6DFF68F__INITCOMPONENT_B__0_2_OFFSET UNITYSDK_OFFSET(0x138CEB30)
#define CLASS_2_5B599AA9B6DFF68F___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x138CEB90)

inline static constexpr unsigned int Class_2_5B599AA9B6DFF68F_TypeDefinitionIndex = 68468;

class Class_2_5B599AA9B6DFF68F : public ::RPG::GameCore::GameComponentBase
{
public:
	// static const ::System::UInt32 Field_2_0 = 0x3DB5B6; // 0x0
	::RPG::Client::EraFlipperCommonConfig* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::RPG::GameCore::GameEntity* Field_2_3; // 0x28
	::RPG::Client::EraFlipperManager* Field_2_4; // 0x30
	::RPG::GameCore::PropComponent* Field_2_5; // 0x38
	::Class_1_1342B57709FD7AC5* Field_2_6; // 0x40
	::System::UInt32 Field_2_7; // 0x48
	::System::Nullable_1<::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState> Field_2_8; // 0x4C
	::System::Boolean Field_2_9; // 0x54
	::System::Boolean Field_2_10; // 0x55
	::System::Boolean Field_2_11; // 0x56
	::System::Boolean Field_2_12; // 0x57
	::System::Boolean Field_2_13; // 0x58
	::System::Boolean Field_2_14; // 0x59
	::System::Boolean Field_2_15; // 0x5A
	::System::UInt32 Field_2_16; // 0x5C
	::RPG::Client::EraEntityType Field_2_17; // 0x60
	::RPG::GameCore::EraStateType Field_2_18; // 0x64
	::RPG::Client::ReasonBool_1<::RPG::Client::EraVisibleReason> Field_2_19; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F04DA50340D2CF1E(::RPG::GameCore::GameEntity* a1, ::RPG::Client::EraEntityType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::EraEntityType))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_METHOD_2_F04DA50340D2CF1E_OFFSET))(this, a1, a2);
	}

	::RPG::Client::EraEntityType Method_2_7BA5C34C54F10DFA()
	{
		return ((::RPG::Client::EraEntityType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_METHOD_2_7BA5C34C54F10DFA_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_TICK_OFFSET))(this, a1);
	}

	::System::Void BeforeDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_BEFOREDISPOSE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_2AB2DA210EBA511D(::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_METHOD_2_2AB2DA210EBA511D_OFFSET))(this, a1);
	}

	::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
	}

	::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_E0A763B79A4221CB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_METHOD_2_E0A763B79A4221CB_OFFSET))(this, a1);
	}

	::System::Void Method_2_DAD3604E9A4C3C87(::System::Boolean a1, ::RPG::Client::EraVisibleReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::EraVisibleReason))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_METHOD_2_DAD3604E9A4C3C87_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_110F0F8BA45288EF(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_METHOD_2_110F0F8BA45288EF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8C0E3211A8AE23ED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_METHOD_2_8C0E3211A8AE23ED_OFFSET))(this, a1);
	}

	::System::Void Method_2_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_METHOD_2_C8E2469222842786_OFFSET))(this);
	}

	::System::Void Method_2_731625464DEE752F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_METHOD_2_731625464DEE752F_OFFSET))(this, a1);
	}

	::System::Void Method_2_DB51C66BCC16DD6E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_METHOD_2_DB51C66BCC16DD6E_OFFSET))(this, a1);
	}

	::System::Void Method_2_08E6E5B849FC7A4B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_METHOD_2_08E6E5B849FC7A4B_OFFSET))(this, a1);
	}

	::System::Void Method_2_08E6E5B849FC7A4B_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_METHOD_2_08E6E5B849FC7A4B_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_091B1F0E0E06E7DD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_METHOD_2_091B1F0E0E06E7DD_OFFSET))(this, a1);
	}

	::System::Void Method_2_08E6E5B849FC7A4B_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_METHOD_2_08E6E5B849FC7A4B_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_1288E4E02611722A(::System::String* a1, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a2, ::System::Boolean a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_METHOD_2_1288E4E02611722A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B1B466AFE3B0CC1E(::System::UInt32& a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_METHOD_2_B1B466AFE3B0CC1E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_2_BA904CAFF6C7217F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_METHOD_2_BA904CAFF6C7217F_OFFSET))(this, a1);
	}

	::System::Boolean _InitComponent_b__0_0(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F__INITCOMPONENT_B__0_0_OFFSET))(this, a1);
	}

	::System::Boolean _InitComponent_b__0_1(::RPG::Client::ProxyEffectProp* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ProxyEffectProp*))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F__INITCOMPONENT_B__0_1_OFFSET))(this, a1);
	}

	::System::Boolean _InitComponent_b__0_2(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F__INITCOMPONENT_B__0_2_OFFSET))(this, a1);
	}

	::System::Boolean _BeforeDispose_b__4_0(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F__BEFOREDISPOSE_B__4_0_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
