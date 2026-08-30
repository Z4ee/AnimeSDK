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

#define CLASS_2_5B599AA9B6DFF68F_BEFOREDISPOSE_OFFSET UNITYSDK_OFFSET(0x15702D20)
#define CLASS_2_5B599AA9B6DFF68F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15703140)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_08E6E5B849FC7A4B_1_OFFSET UNITYSDK_OFFSET(0x15704E60)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_08E6E5B849FC7A4B_2_OFFSET UNITYSDK_OFFSET(0x15704F70)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_08E6E5B849FC7A4B_OFFSET UNITYSDK_OFFSET(0x15704E00)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_091B1F0E0E06E7DD_OFFSET UNITYSDK_OFFSET(0x15704EC0)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_110F0F8BA45288EF_OFFSET UNITYSDK_OFFSET(0x15701D60)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_1288E4E02611722A_OFFSET UNITYSDK_OFFSET(0x15704300)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_2AB2DA210EBA511D_OFFSET UNITYSDK_OFFSET(0x15703320)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x15703D80)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x15702CD0)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_731625464DEE752F_OFFSET UNITYSDK_OFFSET(0x15704810)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_7BA5C34C54F10DFA_OFFSET UNITYSDK_OFFSET(0x157027C0)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_8C0E3211A8AE23ED_OFFSET UNITYSDK_OFFSET(0x15703E50)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_B1B466AFE3B0CC1E_OFFSET UNITYSDK_OFFSET(0x157030A0)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_BA904CAFF6C7217F_OFFSET UNITYSDK_OFFSET(0x15703DD0)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x15704660)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15704FD0)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_DAD3604E9A4C3C87_OFFSET UNITYSDK_OFFSET(0x15703CD0)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_DB51C66BCC16DD6E_OFFSET UNITYSDK_OFFSET(0x15704B20)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_E0A763B79A4221CB_OFFSET UNITYSDK_OFFSET(0x15703C10)
#define CLASS_2_5B599AA9B6DFF68F_METHOD_2_F04DA50340D2CF1E_OFFSET UNITYSDK_OFFSET(0x15701870)
#define CLASS_2_5B599AA9B6DFF68F_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x15703880)
#define CLASS_2_5B599AA9B6DFF68F_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x15703670)
#define CLASS_2_5B599AA9B6DFF68F_TICK_OFFSET UNITYSDK_OFFSET(0x157027D0)
#define CLASS_2_5B599AA9B6DFF68F__BEFOREDISPOSE_B__4_0_OFFSET UNITYSDK_OFFSET(0x157050C0)
#define CLASS_2_5B599AA9B6DFF68F__CTOR_OFFSET UNITYSDK_OFFSET(0x15705010)
#define CLASS_2_5B599AA9B6DFF68F__INITCOMPONENT_B__0_0_OFFSET UNITYSDK_OFFSET(0x15705020)
#define CLASS_2_5B599AA9B6DFF68F__INITCOMPONENT_B__0_1_OFFSET UNITYSDK_OFFSET(0x15705050)
#define CLASS_2_5B599AA9B6DFF68F__INITCOMPONENT_B__0_2_OFFSET UNITYSDK_OFFSET(0x15705090)

inline static constexpr unsigned int Class_2_5B599AA9B6DFF68F_TypeDefinitionIndex = 73220;

class Class_2_5B599AA9B6DFF68F : public ::RPG::GameCore::GameComponentBase
{
public:
	// static const ::System::UInt32 OAIHHECNKNF = 0x3DB5B6; // 0x0
	::RPG::Client::EraFlipperManager* KLKIMALJKKE; // 0x18
	::RPG::GameCore::GameEntity* MOOADPLGAIH; // 0x20
	::Class_1_1342B57709FD7AC5* OIDAGBPPNBJ; // 0x28
	::RPG::GameCore::PropComponent* NKILIBDMOMC; // 0x30
	::RPG::Client::EraFlipperCommonConfig* IGHAHBNLIJA; // 0x38
	::System::String* MBJBPGDIJOE; // 0x40
	::RPG::GameCore::EraStateType BGDKFBODOEO; // 0x48
	::System::UInt32 BGJGFPDIBBD; // 0x4C
	::System::UInt32 KOAIMKCDOIM; // 0x50
	::RPG::Client::EraEntityType LLGKKKFKBBC; // 0x54
	::RPG::Client::ReasonBool_1<::RPG::Client::EraVisibleReason> EPBLIMCONGG; // 0x58
	::System::Boolean GLOGHGMLHFA; // 0x60
	::System::Boolean GPPNKACPDEK; // 0x61
	::System::Boolean NOMAHDHHAOC; // 0x62
	::System::Nullable_1<::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState> HMNJLMFDCAL; // 0x64
	::System::Boolean JBNGIGALLIJ; // 0x6C
	::System::Boolean EPOBAPFJGBE; // 0x6D
	::System::Boolean LJNPFDGIOJA; // 0x6E
	::System::Boolean JNMNBBAJFEG; // 0x6F

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
};
