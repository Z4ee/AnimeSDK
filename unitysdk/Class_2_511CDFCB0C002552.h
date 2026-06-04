#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/TurnbasedPluginBase_1.h"

class Class_1_C39BA4C2B7A442A2;
class Class_2_1DB6C02CA182EEBA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace RPG::GameCore { class LevelCharacterCreate; }
namespace RPG::GameCore { class LevelPlayerCreateFnishAdv; }
namespace System { class String; }

#define CLASS_2_511CDFCB0C002552_METHOD_2_05E18E3D0B7CB7FC_OFFSET UNITYSDK_OFFSET(0xB2CC900)
#define CLASS_2_511CDFCB0C002552_METHOD_2_126AC2A49218E7E6_OFFSET UNITYSDK_OFFSET(0xB2CC660)
#define CLASS_2_511CDFCB0C002552_METHOD_2_17ED2F1403285A08_OFFSET UNITYSDK_OFFSET(0xB2CC780)
#define CLASS_2_511CDFCB0C002552_METHOD_2_33D5F885A0F4310C_OFFSET UNITYSDK_OFFSET(0xB2CB880)
#define CLASS_2_511CDFCB0C002552_METHOD_2_3894A263CC234BE3_OFFSET UNITYSDK_OFFSET(0xB2CC890)
#define CLASS_2_511CDFCB0C002552_METHOD_2_41A4A9AAA0B617DB_OFFSET UNITYSDK_OFFSET(0xB2CB3B0)
#define CLASS_2_511CDFCB0C002552_METHOD_2_465139FAEB34BF05_OFFSET UNITYSDK_OFFSET(0xB2CCB70)
#define CLASS_2_511CDFCB0C002552_METHOD_2_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0xB2CCDB0)
#define CLASS_2_511CDFCB0C002552_METHOD_2_653FCB00C01A04A0_OFFSET UNITYSDK_OFFSET(0xB2CCC30)
#define CLASS_2_511CDFCB0C002552_METHOD_2_849E01E627CA8AAB_OFFSET UNITYSDK_OFFSET(0xB2CC9A0)
#define CLASS_2_511CDFCB0C002552_METHOD_2_8BFED279DCC28FCB_OFFSET UNITYSDK_OFFSET(0xB2CC7D0)
#define CLASS_2_511CDFCB0C002552_METHOD_2_C4ED09556529F069_OFFSET UNITYSDK_OFFSET(0xB2CC830)
#define CLASS_2_511CDFCB0C002552_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xB2CCE10)
#define CLASS_2_511CDFCB0C002552_METHOD_2_DC8AA765E2AFD1B6_OFFSET UNITYSDK_OFFSET(0xB2CCD40)
#define CLASS_2_511CDFCB0C002552_METHOD_2_EA0BA3E4AF50C583_OFFSET UNITYSDK_OFFSET(0xB2CBA00)
#define CLASS_2_511CDFCB0C002552_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xB2CB1D0)
#define CLASS_2_511CDFCB0C002552_ONUNINITIALIZE_OFFSET UNITYSDK_OFFSET(0xB2CB2C0)
#define CLASS_2_511CDFCB0C002552__CTOR_OFFSET UNITYSDK_OFFSET(0xB2CCE20)
#define CLASS_2_511CDFCB0C002552___IFIXBASEPROXY_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xB2CD0B0)
#define CLASS_2_511CDFCB0C002552___IFIXBASEPROXY_ONUNINITIALIZE_OFFSET UNITYSDK_OFFSET(0xB2CD0C0)

inline static constexpr unsigned int Class_2_511CDFCB0C002552_TypeDefinitionIndex = 52504;

class Class_2_511CDFCB0C002552 : public ::RPG::GameCore::TurnbasedPluginBase_1<::Class_2_511CDFCB0C002552*>
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_2_1DB6C02CA182EEBA* Field_2_1; // 0x28
	::Il2CppArray<::Class_1_C39BA4C2B7A442A2*>* Field_2_2; // 0x30
	::System::Boolean Field_2_3; // 0x38
	::System::Int32 Field_2_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552__CTOR_OFFSET))(this);
	}

	::System::Void OnInitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_ONINITIALIZE_OFFSET))(this);
	}

	::System::Void OnUninitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_ONUNINITIALIZE_OFFSET))(this);
	}

	::System::Void Method_2_41A4A9AAA0B617DB(::Class_2_1DB6C02CA182EEBA* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1DB6C02CA182EEBA*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_41A4A9AAA0B617DB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_17ED2F1403285A08(::RPG::GameCore::LevelPlayerCreateFnishAdv* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPlayerCreateFnishAdv*))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_17ED2F1403285A08_OFFSET))(this, a1);
	}

	::System::Void Method_2_8BFED279DCC28FCB(::RPG::GameCore::LevelCharacterCreate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterCreate*))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_8BFED279DCC28FCB_OFFSET))(this, a1);
	}

	::System::Void Method_2_C4ED09556529F069(::RPG::GameCore::LevelBattleEventCreate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_C4ED09556529F069_OFFSET))(this, a1);
	}

	::System::Void Method_2_3894A263CC234BE3(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AliveState a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_3894A263CC234BE3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_126AC2A49218E7E6(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_126AC2A49218E7E6_OFFSET))(this, a1);
	}

	::System::Void Method_2_05E18E3D0B7CB7FC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_05E18E3D0B7CB7FC_OFFSET))(this, a1);
	}

	::System::Void Method_2_EA0BA3E4AF50C583()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_EA0BA3E4AF50C583_OFFSET))(this);
	}

	::System::Void Method_2_849E01E627CA8AAB(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_849E01E627CA8AAB_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_465139FAEB34BF05(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_465139FAEB34BF05_OFFSET))(this, a1);
	}

	::System::Void Method_2_653FCB00C01A04A0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_653FCB00C01A04A0_OFFSET))(this, a1);
	}

	::System::Void Method_2_33D5F885A0F4310C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_33D5F885A0F4310C_OFFSET))(this, a1);
	}

	::Class_1_C39BA4C2B7A442A2* Method_2_DC8AA765E2AFD1B6(::System::Int32 a1)
	{
		return ((::Class_1_C39BA4C2B7A442A2*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_DC8AA765E2AFD1B6_OFFSET))(this, a1);
	}

	::Class_1_C39BA4C2B7A442A2* Method_2_47FCE72550F759BF()
	{
		return ((::Class_1_C39BA4C2B7A442A2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_47FCE72550F759BF_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnInitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552___IFIXBASEPROXY_ONINITIALIZE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552___IFIXBASEPROXY_ONUNINITIALIZE_OFFSET))(this);
	}
};
