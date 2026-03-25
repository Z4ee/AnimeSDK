#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterRemoveShield; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B49E223DF80566EF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x89404D0)
#define CLASS_2_B49E223DF80566EF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x89405B0)
#define CLASS_2_B49E223DF80566EF_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x893F7E0)
#define CLASS_2_B49E223DF80566EF_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x89400E0)
#define CLASS_2_B49E223DF80566EF_METHOD_2_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x893F500)
#define CLASS_2_B49E223DF80566EF_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8940140)
#define CLASS_2_B49E223DF80566EF_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x8940750)
#define CLASS_2_B49E223DF80566EF_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x89406F0)
#define CLASS_2_B49E223DF80566EF_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x893FAB0)
#define CLASS_2_B49E223DF80566EF_METHOD_2_8FD6B76FE7C1761D_OFFSET UNITYSDK_OFFSET(0x893FCE0)
#define CLASS_2_B49E223DF80566EF_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x893FBB0)
#define CLASS_2_B49E223DF80566EF_METHOD_2_A00FA3762EA46365_OFFSET UNITYSDK_OFFSET(0x893FFB0)
#define CLASS_2_B49E223DF80566EF_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x8940410)
#define CLASS_2_B49E223DF80566EF_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x8940350)
#define CLASS_2_B49E223DF80566EF_METHOD_2_AC96313FF120BAE7_OFFSET UNITYSDK_OFFSET(0x893F750)
#define CLASS_2_B49E223DF80566EF_METHOD_2_BD6A3C745D127D79_OFFSET UNITYSDK_OFFSET(0x893FC30)
#define CLASS_2_B49E223DF80566EF_METHOD_2_C4E2F930A41E34C0_OFFSET UNITYSDK_OFFSET(0x8940240)
#define CLASS_2_B49E223DF80566EF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x89401E0)
#define CLASS_2_B49E223DF80566EF_METHOD_2_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0x89407B0)
#define CLASS_2_B49E223DF80566EF__CTOR_OFFSET UNITYSDK_OFFSET(0x8940660)
#define CLASS_2_B49E223DF80566EF__ONBIND_OFFSET UNITYSDK_OFFSET(0x893F3C0)
#define CLASS_2_B49E223DF80566EF___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8940820)
#define CLASS_2_B49E223DF80566EF___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8940880)
#define CLASS_2_B49E223DF80566EF___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8940690)

inline static constexpr unsigned int Class_2_B49E223DF80566EF_TypeDefinitionIndex = 58560;

class Class_2_B49E223DF80566EF : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_11; // 0x0
	// static const ::System::String* Field_2_12; // 0x0
	// static const ::System::String* Field_2_13; // 0x0
	::RPG::Client::PrefabLoadMeta* Field_2_9; // 0x60
	::UnityEngine::Animation* Field_2_3; // 0x68
	::UnityEngine::Transform* Field_2_6; // 0x70
	::RPG::GameCore::GameEntity* Field_2_5; // 0x78
	::RPG::Client::PrefabLoadMeta* Field_2_10; // 0x80
	::UnityEngine::Animation* Field_2_4; // 0x88
	::UnityEngine::Transform* Field_2_7; // 0x90
	::RPG::Client::LocalizedText* Field_2_8; // 0x98
	::System::Int32 Field_2_0; // 0xA0
	::System::Boolean Field_2_1; // 0xA4
	::System::Boolean Field_2_2; // 0xA5

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Void Method_2_AC96313FF120BAE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_AC96313FF120BAE7_OFFSET))(this);
	}

	::System::Void Method_2_BD6A3C745D127D79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_BD6A3C745D127D79_OFFSET))(this, a1);
	}

	::System::Void Method_2_8FD6B76FE7C1761D(::RPG::GameCore::AbilityCurrentShieldChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_8FD6B76FE7C1761D_OFFSET))(this, a1);
	}

	::System::Void Method_2_A00FA3762EA46365(::RPG::GameCore::LevelCharacterRemoveShield* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRemoveShield*))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_A00FA3762EA46365_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C4E2F930A41E34C0(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_C4E2F930A41E34C0_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
