#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ProjectileParams.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_230F5EDDB35DAEBA;
class Class_2_A59080F652920B7A;
namespace RPG::Client { class RoadRashFireProjectileLaunchPoint; }
namespace RPG::Client { class RoadRashGameAbility_FireProjectile; }
namespace RPG::Client::RoadRash { class MonoRoadRashGameProjectile; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_5F1E86AFB612196C_METHOD_3_162771D1DAA4EFB8_OFFSET UNITYSDK_OFFSET(0xCCE0150)
#define CLASS_3_5F1E86AFB612196C_METHOD_3_540626B7009D7518_OFFSET UNITYSDK_OFFSET(0xCCE0F40)
#define CLASS_3_5F1E86AFB612196C_METHOD_3_5F26FDE6ACBCE7B3_OFFSET UNITYSDK_OFFSET(0xCCE10E0)
#define CLASS_3_5F1E86AFB612196C_METHOD_3_971D8F3CEEAF69D2_OFFSET UNITYSDK_OFFSET(0xCCE0EA0)
#define CLASS_3_5F1E86AFB612196C_METHOD_3_ED4204CB2510E9D7_OFFSET UNITYSDK_OFFSET(0xCCE02D0)
#define CLASS_3_5F1E86AFB612196C_METHOD_3_EFB1DEE9733E0A98_OFFSET UNITYSDK_OFFSET(0xCCE0530)
#define CLASS_3_5F1E86AFB612196C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCCDFD10)
#define CLASS_3_5F1E86AFB612196C__CTOR_OFFSET UNITYSDK_OFFSET(0xCCDFCE0)

inline static constexpr unsigned int Class_3_5F1E86AFB612196C_TypeDefinitionIndex = 58554;

class Class_3_5F1E86AFB612196C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::Client::RoadRashGameAbility_FireProjectile*>
{
public:
	static ::System::Int32* StaticGet_NNOCHMEAAGA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_5F1E86AFB612196C_TypeDefinitionIndex)->GetStaticField(0x133E0);
	}

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameAbility_FireProjectile* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameAbility_FireProjectile*))((::PBYTE)hIl2Cpp + CLASS_3_5F1E86AFB612196C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F1E86AFB612196C_ONTASKBEGIN_OFFSET))(this);
	}

	static ::System::Boolean Method_3_ED4204CB2510E9D7(::Class_2_A59080F652920B7A* a1, ::Class_2_230F5EDDB35DAEBA* a2, ::RPG::Client::RoadRashGameAbility_FireProjectile* a3, ::System::Int32 a4, ::RPG::Client::RoadRashFireProjectileLaunchPoint* a5)
	{
		return ((::System::Boolean(*)(::Class_2_A59080F652920B7A*, ::Class_2_230F5EDDB35DAEBA*, ::RPG::Client::RoadRashGameAbility_FireProjectile*, ::System::Int32, ::RPG::Client::RoadRashFireProjectileLaunchPoint*))((::PBYTE)hIl2Cpp + CLASS_3_5F1E86AFB612196C_METHOD_3_ED4204CB2510E9D7_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_3_540626B7009D7518(::Class_2_A59080F652920B7A* a1, ::Class_2_230F5EDDB35DAEBA* a2, ::RPG::Client::RoadRashGameAbility_FireProjectile* a3, ::RPG::Client::RoadRashFireProjectileLaunchPoint* a4)
	{
		return ((::System::Boolean(*)(::Class_2_A59080F652920B7A*, ::Class_2_230F5EDDB35DAEBA*, ::RPG::Client::RoadRashGameAbility_FireProjectile*, ::RPG::Client::RoadRashFireProjectileLaunchPoint*))((::PBYTE)hIl2Cpp + CLASS_3_5F1E86AFB612196C_METHOD_3_540626B7009D7518_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_EFB1DEE9733E0A98(::Class_2_A59080F652920B7A* a1, ::Class_2_230F5EDDB35DAEBA* a2, ::RPG::Client::RoadRashGameAbility_FireProjectile* a3, ::RPG::Client::RoadRashFireProjectileLaunchPoint* a4, ::RPG::Client::RoadRash::MonoRoadRashGameProjectile*& a5, ::RPG::Client::LittleGame::RoadRash::ProjectileParams& a6)
	{
		return ((::System::Boolean(*)(::Class_2_A59080F652920B7A*, ::Class_2_230F5EDDB35DAEBA*, ::RPG::Client::RoadRashGameAbility_FireProjectile*, ::RPG::Client::RoadRashFireProjectileLaunchPoint*, ::RPG::Client::RoadRash::MonoRoadRashGameProjectile*&, ::RPG::Client::LittleGame::RoadRash::ProjectileParams&))((::PBYTE)hIl2Cpp + CLASS_3_5F1E86AFB612196C_METHOD_3_EFB1DEE9733E0A98_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_971D8F3CEEAF69D2(::RPG::Client::RoadRash::MonoRoadRashGameProjectile* a1)
	{
		return ((::System::Void(*)(::RPG::Client::RoadRash::MonoRoadRashGameProjectile*))((::PBYTE)hIl2Cpp + CLASS_3_5F1E86AFB612196C_METHOD_3_971D8F3CEEAF69D2_OFFSET))(a1);
	}

	static ::System::Single Method_3_5F26FDE6ACBCE7B3(::Class_2_A59080F652920B7A* a1, ::Class_2_230F5EDDB35DAEBA* a2)
	{
		return ((::System::Single(*)(::Class_2_A59080F652920B7A*, ::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_3_5F1E86AFB612196C_METHOD_3_5F26FDE6ACBCE7B3_OFFSET))(a1, a2);
	}

	static ::System::String* Method_3_162771D1DAA4EFB8(::Class_2_A59080F652920B7A* a1, ::Class_2_230F5EDDB35DAEBA* a2)
	{
		return ((::System::String*(*)(::Class_2_A59080F652920B7A*, ::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_3_5F1E86AFB612196C_METHOD_3_162771D1DAA4EFB8_OFFSET))(a1, a2);
	}
};
