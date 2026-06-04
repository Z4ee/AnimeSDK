#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_F0C0379712E53AD9;
class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class EmoPlayableGraphConfig; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class BattlePerformCaptureActor; }
namespace RPG::GameCore { class BattlePerformConfig; }
namespace RPG::GameCore { class BattlePerformCreateActor; }
namespace RPG::GameCore { class BattlePerformInit; }
namespace RPG::GameCore { class BattlePerformStageConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FEC0278FE3DEA4E2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA467340)
#define CLASS_2_FEC0278FE3DEA4E2_GET_WORKFINISH_OFFSET UNITYSDK_OFFSET(0xA46B760)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xA467520)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_18D64D8FCCC1D09F_1_OFFSET UNITYSDK_OFFSET(0xA46AD20)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_18D64D8FCCC1D09F_OFFSET UNITYSDK_OFFSET(0xA469F20)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_1B59235A910528B9_OFFSET UNITYSDK_OFFSET(0xA46A680)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_226842F6044F973B_OFFSET UNITYSDK_OFFSET(0xA467A10)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_27C87B63AFD1A352_OFFSET UNITYSDK_OFFSET(0xA46AE00)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_27EC2C099D14356D_OFFSET UNITYSDK_OFFSET(0xA46B620)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_2E6FB1478A87D6D2_OFFSET UNITYSDK_OFFSET(0xA468380)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_2F820B7CD0C616C8_OFFSET UNITYSDK_OFFSET(0xA46A8E0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xA46B780)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_41A074549EF25F63_1_OFFSET UNITYSDK_OFFSET(0xA4676C0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xA4675C0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_435C766C09C307BB_OFFSET UNITYSDK_OFFSET(0xA469D60)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_4D048E895C608EDE_OFFSET UNITYSDK_OFFSET(0xA46B4C0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_62882324FFF46D85_OFFSET UNITYSDK_OFFSET(0xA469FA0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_651156E1722E01FB_OFFSET UNITYSDK_OFFSET(0xA46AB70)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_698AEA6086494C95_OFFSET UNITYSDK_OFFSET(0xA469620)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_790854EC4529F6BD_OFFSET UNITYSDK_OFFSET(0xA4691C0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_8B8044560BDA702E_OFFSET UNITYSDK_OFFSET(0xA46A310)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_91B479DECE7491D8_OFFSET UNITYSDK_OFFSET(0xA469DD0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xA467390)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xA46B5D0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_AF35526B98502BDF_OFFSET UNITYSDK_OFFSET(0xA467B60)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_B0E5A94005A811FC_OFFSET UNITYSDK_OFFSET(0xA46A960)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0xA4685B0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_BD658202BB4C4431_OFFSET UNITYSDK_OFFSET(0xA4696D0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_C0D4F45F16A4FB85_OFFSET UNITYSDK_OFFSET(0xA469B00)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_C4AFE676986D96B9_OFFSET UNITYSDK_OFFSET(0xA4694A0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0xA468190)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA46B580)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA468330)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_D34432C0B65E6441_OFFSET UNITYSDK_OFFSET(0xA46ADA0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_EB522918F22FFA3B_OFFSET UNITYSDK_OFFSET(0xA467940)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_EB8DB967ADFFC4B2_OFFSET UNITYSDK_OFFSET(0xA46AA20)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_F0BBF1071C8E942E_OFFSET UNITYSDK_OFFSET(0xA469330)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_F89C48EE20723849_OFFSET UNITYSDK_OFFSET(0xA467D80)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_FA4A64C9A59CC8E0_OFFSET UNITYSDK_OFFSET(0xA4677C0)
#define CLASS_2_FEC0278FE3DEA4E2_SET_WORKFINISH_OFFSET UNITYSDK_OFFSET(0xA46B770)
#define CLASS_2_FEC0278FE3DEA4E2_TICK_OFFSET UNITYSDK_OFFSET(0xA4674A0)
#define CLASS_2_FEC0278FE3DEA4E2__CCTOR_OFFSET UNITYSDK_OFFSET(0xA46B820)
#define CLASS_2_FEC0278FE3DEA4E2__CTOR_OFFSET UNITYSDK_OFFSET(0xA46B7E0)
#define CLASS_2_FEC0278FE3DEA4E2___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA46B840)

inline static constexpr unsigned int Class_2_FEC0278FE3DEA4E2_TypeDefinitionIndex = 53569;

class Class_2_FEC0278FE3DEA4E2 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FEC0278FE3DEA4E2_TypeDefinitionIndex)->GetStaticField(0x6E20);
	}
	// static const ::System::String* Field_2_1; // 0x0
	::RPG::GameCore::LevelGraphComponent* Field_2_2; // 0x18
	::RPG::GameCore::BattlePerformInit* Field_2_3; // 0x20
	::RPG::Client::EmoPlayableGraphConfig* Field_2_4; // 0x28
	::RPG::GameCore::BattlePerformStageConfig* Field_2_5; // 0x30
	::RPG::Client::Promises::Promise* Field_2_6; // 0x38
	::RPG::GameCore::BattlePerformConfig* Field_2_7; // 0x40
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* Field_2_8; // 0x48
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::RPG::GameCore::BattlePerformCreateActor*, ::RPG::GameCore::GameEntity*>>* Field_2_9; // 0x50
	::Class_1_F0C0379712E53AD9* Field_2_10; // 0x58
	::System::String* Field_2_11; // 0x60
	::System::Exception* Field_2_12; // 0x68
	::RPG::GameCore::TaskContext* Field_2_13; // 0x70
	::RPG::Client::Promises::Promise* Field_2_14; // 0x78
	::RPG::Client::Promises::Promise* Field_2_15; // 0x80
	::Class_1_F0C0379712E53AD9* Field_2_16; // 0x88
	::Class_3_07C3C4D2990C49EE* Field_2_17; // 0x90
	::Class_3_07C3C4D2990C49EE* Field_2_18; // 0x98
	::RPG::GameCore::GameWorld* Field_2_19; // 0xA0
	::System::Boolean Field_2_20; // 0xA8
	::System::Boolean _WorkFinish_k__BackingField; // 0xA9
	::System::Int32 Field_2_22; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_AF35526B98502BDF(::RPG::GameCore::BattlePerformInit* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::RPG::GameCore::BattlePerformInit*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_AF35526B98502BDF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_C5F2E178DAEB1793_OFFSET))(this);
	}

	::System::Void Method_2_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_2_F0BBF1071C8E942E(::RPG::GameCore::BattlePerformCreateActor* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCreateActor*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_F0BBF1071C8E942E_OFFSET))(this, a1);
	}

	::System::Void Method_2_790854EC4529F6BD(::RPG::GameCore::BattlePerformCaptureActor* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_790854EC4529F6BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_BD658202BB4C4431()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_BD658202BB4C4431_OFFSET))(this);
	}

	::System::Int32 Method_2_435C766C09C307BB(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::BattlePerformCaptureActor* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::BattlePerformCaptureActor*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_435C766C09C307BB_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_2_91B479DECE7491D8(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_91B479DECE7491D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B59235A910528B9(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_1B59235A910528B9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B0E5A94005A811FC(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_B0E5A94005A811FC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EB8DB967ADFFC4B2(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_EB8DB967ADFFC4B2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_18D64D8FCCC1D09F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_18D64D8FCCC1D09F_OFFSET))(this, a1);
	}

	::System::Void Method_2_18D64D8FCCC1D09F_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_18D64D8FCCC1D09F_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_651156E1722E01FB(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_651156E1722E01FB_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_2_C4AFE676986D96B9(::RPG::GameCore::BattlePerformCreateActor* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::BattlePerformCreateActor*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_C4AFE676986D96B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C0D4F45F16A4FB85(::RPG::GameCore::BattlePerformCreateActor* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCreateActor*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_C0D4F45F16A4FB85_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2F820B7CD0C616C8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_2F820B7CD0C616C8_OFFSET))(this, a1);
	}

	::System::Void Method_2_62882324FFF46D85(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_62882324FFF46D85_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_698AEA6086494C95(::RPG::GameCore::BattlePerformCaptureActor* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_698AEA6086494C95_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B8044560BDA702E(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_8B8044560BDA702E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FA4A64C9A59CC8E0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_FA4A64C9A59CC8E0_OFFSET))(this, a1);
	}

	::System::Void Method_2_226842F6044F973B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_226842F6044F973B_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_41A074549EF25F63_1_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_2E6FB1478A87D6D2()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_2E6FB1478A87D6D2_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_F89C48EE20723849()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_F89C48EE20723849_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_27C87B63AFD1A352()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_27C87B63AFD1A352_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D048E895C608EDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_4D048E895C608EDE_OFFSET))(this);
	}

	::System::Void Method_2_EB522918F22FFA3B(::RPG::Client::Promises::Promise* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_EB522918F22FFA3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_D34432C0B65E6441(::RPG::Client::Promises::Promise* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_D34432C0B65E6441_OFFSET))(this, a1);
	}

	::System::Void Method_2_27EC2C099D14356D(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_27EC2C099D14356D_OFFSET))(this, a1);
	}

	::System::Boolean get_WorkFinish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_GET_WORKFINISH_OFFSET))(this);
	}

	::System::Void set_WorkFinish(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_SET_WORKFINISH_OFFSET))(this, a1);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
