#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0AD6129525BF5F86.h"

class Class_1_2B8E0B4950FE44E7;
class Class_1_A2D8E5AB4B623162;
class Class_2_D400E143FE02ADAB;
class Class_3_98C806684F7CC372_14;
class Class_3_98C806684F7CC372_15;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class ProjectileData; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_AA23F9AB52F53415_GET_MUTEXNAME_OFFSET UNITYSDK_OFFSET(0x153E0B80)
#define CLASS_2_AA23F9AB52F53415_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x153E0830)
#define CLASS_2_AA23F9AB52F53415_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x153E0880)
#define CLASS_2_AA23F9AB52F53415_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x153E0A00)
#define CLASS_2_AA23F9AB52F53415_METHOD_2_BD2F8ECECEAD4800_OFFSET UNITYSDK_OFFSET(0x153E0A70)
#define CLASS_2_AA23F9AB52F53415_METHOD_2_E1A2D6AA65D6A12C_OFFSET UNITYSDK_OFFSET(0x153E0940)
#define CLASS_2_AA23F9AB52F53415_SET_MUTEXNAME_OFFSET UNITYSDK_OFFSET(0x153E0B90)
#define CLASS_2_AA23F9AB52F53415__CTOR_OFFSET UNITYSDK_OFFSET(0x153E07E0)

inline static constexpr unsigned int Class_2_AA23F9AB52F53415_TypeDefinitionIndex = 54942;

class Class_2_AA23F9AB52F53415 : public ::Class_1_0AD6129525BF5F86
{
public:
	::System::String* _MutexName_k__BackingField; // 0x150
	::Class_2_D400E143FE02ADAB* LPCKAJHPMMH; // 0x158

	::System::Void _ctor(::RPG::GameCore::ProjectileData* a1, ::Class_1_A2D8E5AB4B623162* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4, ::Class_3_98C806684F7CC372_14* a5, ::Class_1_2B8E0B4950FE44E7* a6, ::Class_3_98C806684F7CC372_15* a7, ::System::Boolean a8, ::RPG::GameCore::NewProjectileConfig* a9)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ProjectileData*, ::Class_1_A2D8E5AB4B623162*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_3_98C806684F7CC372_14*, ::Class_1_2B8E0B4950FE44E7*, ::Class_3_98C806684F7CC372_15*, ::System::Boolean, ::RPG::GameCore::NewProjectileConfig*))((::PBYTE)hIl2Cpp + CLASS_2_AA23F9AB52F53415__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_AA23F9AB52F53415_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA23F9AB52F53415_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
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

	::System::Void set_MutexName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_AA23F9AB52F53415_SET_MUTEXNAME_OFFSET))(this, a1);
	}
};
