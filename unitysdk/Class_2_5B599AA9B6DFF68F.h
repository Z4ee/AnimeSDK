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

class Class_1_9CBC71DC5240DC00;
namespace RPG::Client { class EraFlipperCommonConfig; }
namespace RPG::Client { class EraFlipperManager; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class ProxyEffectProp; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_5B599AA9B6DFF68F_BEFOREDISPOSE_OFFSET UNITYSDK_OFFSET(0x124AB9D0)
#define CLASS_2_5B599AA9B6DFF68F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x124ABDD0)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_08E6E5B849FC7A4B_1_OFFSET UNITYSDK_OFFSET(0x124ADA90)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_08E6E5B849FC7A4B_2_OFFSET UNITYSDK_OFFSET(0x124ADBA0)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_08E6E5B849FC7A4B_OFFSET UNITYSDK_OFFSET(0x124ADA30)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_091B1F0E0E06E7DD_OFFSET UNITYSDK_OFFSET(0x124ADAF0)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_0A1ADF8043C25695_OFFSET UNITYSDK_OFFSET(0x124ABF60)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_0BD490DFD500C054_OFFSET UNITYSDK_OFFSET(0x124AC850)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_110F0F8BA45288EF_OFFSET UNITYSDK_OFFSET(0x124AAA00)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_1288E4E02611722A_OFFSET UNITYSDK_OFFSET(0x124ACF10)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x124AC9C0)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x124AB980)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_3E8209FF824D1D26_OFFSET UNITYSDK_OFFSET(0x124AD730)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_4A918A6E23AF172D_OFFSET UNITYSDK_OFFSET(0x124AA560)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_6A9F77F92E4C4D4B_OFFSET UNITYSDK_OFFSET(0x124ACA10)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_731625464DEE752F_OFFSET UNITYSDK_OFFSET(0x124AD420)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_7BA5C34C54F10DFA_OFFSET UNITYSDK_OFFSET(0x124AB450)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_8C0E3211A8AE23ED_OFFSET UNITYSDK_OFFSET(0x124ACA90)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_B1B466AFE3B0CC1E_OFFSET UNITYSDK_OFFSET(0x124ABD30)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x124AD270)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x124ADC00)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_DAD3604E9A4C3C87_OFFSET UNITYSDK_OFFSET(0x124AC910)
#define CLASS_2_5B599AA9B6DFF68F_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x124AC4E0)
#define CLASS_2_5B599AA9B6DFF68F_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x124AC2B0)
#define CLASS_2_5B599AA9B6DFF68F_TICK_OFFSET UNITYSDK_OFFSET(0x124AB460)
#define CLASS_2_5B599AA9B6DFF68F__BEFOREDISPOSE_B__4_0_OFFSET UNITYSDK_OFFSET(0x124ADD10)
#define CLASS_2_5B599AA9B6DFF68F__CTOR_OFFSET UNITYSDK_OFFSET(0x124ADC40)
#define CLASS_2_5B599AA9B6DFF68F__INITCOMPONENT_B__0_0_OFFSET UNITYSDK_OFFSET(0x124ADC50)
#define CLASS_2_5B599AA9B6DFF68F__INITCOMPONENT_B__0_1_OFFSET UNITYSDK_OFFSET(0x124ADC90)
#define CLASS_2_5B599AA9B6DFF68F__INITCOMPONENT_B__0_2_OFFSET UNITYSDK_OFFSET(0x124ADCD0)
#define CLASS_2_5B599AA9B6DFF68F___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x124ADD50)

inline static constexpr unsigned int Class_2_5B599AA9B6DFF68F_TypeDefinitionIndex = 67514;

class Class_2_5B599AA9B6DFF68F : public ::RPG::GameCore::GameComponentBase
{
public:
	// static const ::System::UInt32 Field_2_19 = 0x3DB5B6; // 0x0
	::RPG::Client::EraFlipperManager* Field_2_0; // 0x18
	::System::String* Field_2_13; // 0x20
	::RPG::GameCore::PropComponent* Field_2_16; // 0x28
	::Class_1_9CBC71DC5240DC00* Field_2_15; // 0x30
	::RPG::Client::EraFlipperCommonConfig* Field_2_12; // 0x38
	::RPG::GameCore::GameEntity* Field_2_1; // 0x40
	::System::Nullable_1<::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState> Field_2_8; // 0x48
	::System::Boolean Field_2_3; // 0x50
	::System::Boolean Field_2_14; // 0x51
	::System::Boolean Field_2_7; // 0x52
	::System::Boolean Field_2_9; // 0x53
	::System::UInt32 Field_2_11; // 0x54
	::System::UInt32 Field_2_10; // 0x58
	::RPG::Client::EraEntityType Field_2_2; // 0x5C
	::RPG::Client::ReasonBool_1<::RPG::Client::EraVisibleReason> Field_2_6; // 0x60
	::RPG::GameCore::EraStateType Field_2_5; // 0x68
	::System::Boolean Field_2_4; // 0x6C
	::System::Boolean Field_2_17; // 0x6D
	::System::Boolean Field_2_18; // 0x6E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4A918A6E23AF172D(::RPG::GameCore::GameEntity* a1, ::RPG::Client::EraEntityType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::EraEntityType))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_METHOD_2_4A918A6E23AF172D_OFFSET))(this, a1, a2);
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

	::System::Void Method_2_0A1ADF8043C25695(::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_METHOD_2_0A1ADF8043C25695_OFFSET))(this, a1);
	}

	::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
	}

	::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_0BD490DFD500C054(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_METHOD_2_0BD490DFD500C054_OFFSET))(this, a1);
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

	::System::Void Method_2_3E8209FF824D1D26(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_METHOD_2_3E8209FF824D1D26_OFFSET))(this, a1);
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

	::System::Void Method_2_6A9F77F92E4C4D4B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F_METHOD_2_6A9F77F92E4C4D4B_OFFSET))(this, a1);
	}

	::System::Boolean _InitComponent_b__0_0(::System::UInt32 tuple)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F__INITCOMPONENT_B__0_0_OFFSET))(this, tuple);
	}

	::System::Boolean _InitComponent_b__0_1(::RPG::Client::ProxyEffectProp* tuple)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ProxyEffectProp*))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F__INITCOMPONENT_B__0_1_OFFSET))(this, tuple);
	}

	::System::Boolean _InitComponent_b__0_2(::System::UInt32 tuple)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F__INITCOMPONENT_B__0_2_OFFSET))(this, tuple);
	}

	::System::Boolean _BeforeDispose_b__4_0(::System::UInt32 tuple)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F__BEFOREDISPOSE_B__4_0_OFFSET))(this, tuple);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5B599AA9B6DFF68F___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
