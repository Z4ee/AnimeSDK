#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0AD6129525BF5F86.h"

class Class_1_2B8E0B4950FE44E7;
class Class_1_A2D8E5AB4B623162;
class Class_2_7B950A63AC5D7438;
class Class_3_98C806684F7CC372_7;
class Class_3_98C806684F7CC372_8;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class ProjectileData; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_AA23F9AB52F53415_GET_MUTEXNAME_OFFSET UNITYSDK_OFFSET(0xA207A00)
#define CLASS_2_AA23F9AB52F53415_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0xA2076B0)
#define CLASS_2_AA23F9AB52F53415_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xA207700)
#define CLASS_2_AA23F9AB52F53415_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA207880)
#define CLASS_2_AA23F9AB52F53415_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA207A20)
#define CLASS_2_AA23F9AB52F53415_METHOD_2_A1F9BFB7EBB25DAC_OFFSET UNITYSDK_OFFSET(0xA207AA0)
#define CLASS_2_AA23F9AB52F53415_METHOD_2_A88B36294D55B85C_OFFSET UNITYSDK_OFFSET(0xA207A90)
#define CLASS_2_AA23F9AB52F53415_METHOD_2_BD2F8ECECEAD4800_OFFSET UNITYSDK_OFFSET(0xA2078F0)
#define CLASS_2_AA23F9AB52F53415_METHOD_2_BFEF8ED4FA433DEA_OFFSET UNITYSDK_OFFSET(0xA207A80)
#define CLASS_2_AA23F9AB52F53415_METHOD_2_E1A2D6AA65D6A12C_OFFSET UNITYSDK_OFFSET(0xA2077C0)
#define CLASS_2_AA23F9AB52F53415_SET_MUTEXNAME_OFFSET UNITYSDK_OFFSET(0xA207A10)
#define CLASS_2_AA23F9AB52F53415__CTOR_OFFSET UNITYSDK_OFFSET(0xA207660)

inline static constexpr unsigned int Class_2_AA23F9AB52F53415_TypeDefinitionIndex = 43800;

class Class_2_AA23F9AB52F53415 : public ::Class_1_0AD6129525BF5F86
{
public:
	::System::String* _MutexName_k__BackingField; // 0x138
	::Class_2_7B950A63AC5D7438* Field_2_0; // 0x140

	::System::Void _ctor(::RPG::GameCore::ProjectileData* a1, ::Class_1_A2D8E5AB4B623162* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4, ::Class_3_98C806684F7CC372_7* a5, ::Class_1_2B8E0B4950FE44E7* a6, ::Class_3_98C806684F7CC372_8* a7, ::System::Boolean a8, ::RPG::GameCore::NewProjectileConfig* a9)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ProjectileData*, ::Class_1_A2D8E5AB4B623162*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_3_98C806684F7CC372_7*, ::Class_1_2B8E0B4950FE44E7*, ::Class_3_98C806684F7CC372_8*, ::System::Boolean, ::RPG::GameCore::NewProjectileConfig*))((::PBYTE)hIl2Cpp + CLASS_2_AA23F9AB52F53415__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_AA23F9AB52F53415_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA23F9AB52F53415_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_E1A2D6AA65D6A12C(::RPG::Client::MonoEffect* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_AA23F9AB52F53415_METHOD_2_E1A2D6AA65D6A12C_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA23F9AB52F53415_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_BD2F8ECECEAD4800()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA23F9AB52F53415_METHOD_2_BD2F8ECECEAD4800_OFFSET))(this);
	}

	::System::String* get_MutexName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA23F9AB52F53415_GET_MUTEXNAME_OFFSET))(this);
	}

	::System::Void set_MutexName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_AA23F9AB52F53415_SET_MUTEXNAME_OFFSET))(this, value);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA23F9AB52F53415_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_BFEF8ED4FA433DEA(::RPG::Client::MonoEffect* P0)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_AA23F9AB52F53415_METHOD_2_BFEF8ED4FA433DEA_OFFSET))(this, P0);
	}

	::System::Void Method_2_A88B36294D55B85C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA23F9AB52F53415_METHOD_2_A88B36294D55B85C_OFFSET))(this);
	}

	::System::Void Method_2_A1F9BFB7EBB25DAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA23F9AB52F53415_METHOD_2_A1F9BFB7EBB25DAC_OFFSET))(this);
	}
};
