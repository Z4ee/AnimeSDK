#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

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

#define CLASS_2_B49E223DF80566EF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xE2B8EE0)
#define CLASS_2_B49E223DF80566EF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xE2B9000)
#define CLASS_2_B49E223DF80566EF_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0xE2B8010)
#define CLASS_2_B49E223DF80566EF_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0xE2B8AF0)
#define CLASS_2_B49E223DF80566EF_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE2B8B50)
#define CLASS_2_B49E223DF80566EF_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xE2B8480)
#define CLASS_2_B49E223DF80566EF_METHOD_2_A00FA3762EA46365_OFFSET UNITYSDK_OFFSET(0xE2B89C0)
#define CLASS_2_B49E223DF80566EF_METHOD_2_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0xE2B82E0)
#define CLASS_2_B49E223DF80566EF_METHOD_2_BA84CD6B9377DF2C_OFFSET UNITYSDK_OFFSET(0xE2B85B0)
#define CLASS_2_B49E223DF80566EF_METHOD_2_BD6A3C745D127D79_OFFSET UNITYSDK_OFFSET(0xE2B8500)
#define CLASS_2_B49E223DF80566EF_METHOD_2_C4E2F930A41E34C0_OFFSET UNITYSDK_OFFSET(0xE2B8C50)
#define CLASS_2_B49E223DF80566EF_METHOD_2_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0xE2B7D40)
#define CLASS_2_B49E223DF80566EF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE2B8BF0)
#define CLASS_2_B49E223DF80566EF_METHOD_2_F0CA034D8F146D0A_OFFSET UNITYSDK_OFFSET(0xE2B7F80)
#define CLASS_2_B49E223DF80566EF_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xE2B8E20)
#define CLASS_2_B49E223DF80566EF_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xE2B8D60)
#define CLASS_2_B49E223DF80566EF__CTOR_OFFSET UNITYSDK_OFFSET(0xE2B90F0)
#define CLASS_2_B49E223DF80566EF__ONBIND_OFFSET UNITYSDK_OFFSET(0xE2B7CC0)

inline static constexpr unsigned int Class_2_B49E223DF80566EF_TypeDefinitionIndex = 71413;

class Class_2_B49E223DF80566EF : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* CJONLJJPLJM; // 0x0
	// static const ::System::String* JHNBEJJJLCO; // 0x0
	// static const ::System::String* PGMNJNHPMGG; // 0x0
	::RPG::Client::PrefabLoadMeta* GGBFOLPIFIL; // 0x60
	::RPG::Client::PrefabLoadMeta* CKPJOENDCDE; // 0x68
	::UnityEngine::Transform* HANPJFACEEG; // 0x70
	::UnityEngine::Animation* NGHBNMLGFNC; // 0x78
	::RPG::Client::LocalizedText* JGJCHJKLHFG; // 0x80
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x88
	::UnityEngine::Animation* GGHHILBNDJN; // 0x90
	::UnityEngine::Transform* IKOPFLFOJNJ; // 0x98
	::System::Int32 KIKIPLCFKNL; // 0xA0
	::System::Boolean EDILAOJDGBM; // 0xA4
	::System::Boolean HCEJJOLGIPH; // 0xA5

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::System::Void Method_2_F0CA034D8F146D0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_F0CA034D8F146D0A_OFFSET))(this);
	}

	::System::Void Method_2_BD6A3C745D127D79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_BD6A3C745D127D79_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA84CD6B9377DF2C(::RPG::GameCore::AbilityCurrentShieldChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_BA84CD6B9377DF2C_OFFSET))(this, a1);
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

	::System::Void Method_2_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_A3C36642AA77866E_OFFSET))(this);
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

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
