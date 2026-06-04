#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5C95470995792B5E;
namespace RPG::GameCore { class ElationActivityActionBarAbilityChange; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_3_50D67274759E9778_METHOD_3_BC53D0C0E999F7DD_OFFSET UNITYSDK_OFFSET(0xA404D90)
#define CLASS_3_50D67274759E9778_METHOD_3_CBB45D9B086B4A24_OFFSET UNITYSDK_OFFSET(0xA4050B0)
#define CLASS_3_50D67274759E9778_METHOD_3_CCC856F34F7B0DB2_OFFSET UNITYSDK_OFFSET(0xA4051B0)
#define CLASS_3_50D67274759E9778_METHOD_3_D34B35D59998D28C_OFFSET UNITYSDK_OFFSET(0xA404FC0)
#define CLASS_3_50D67274759E9778_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA404D30)
#define CLASS_3_50D67274759E9778__CTOR_OFFSET UNITYSDK_OFFSET(0xA404D00)

inline static constexpr unsigned int Class_3_50D67274759E9778_TypeDefinitionIndex = 51411;

class Class_3_50D67274759E9778 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ElationActivityActionBarAbilityChange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ElationActivityActionBarAbilityChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ElationActivityActionBarAbilityChange*))((::PBYTE)hIl2Cpp + CLASS_3_50D67274759E9778__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50D67274759E9778_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_BC53D0C0E999F7DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50D67274759E9778_METHOD_3_BC53D0C0E999F7DD_OFFSET))(this);
	}

	::System::Void Method_3_D34B35D59998D28C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50D67274759E9778_METHOD_3_D34B35D59998D28C_OFFSET))(this);
	}

	::RPG::GameCore::TurnBasedGameMode* Method_3_CCC856F34F7B0DB2()
	{
		return ((::RPG::GameCore::TurnBasedGameMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50D67274759E9778_METHOD_3_CCC856F34F7B0DB2_OFFSET))(this);
	}

	::Class_2_5C95470995792B5E* Method_3_CBB45D9B086B4A24()
	{
		return ((::Class_2_5C95470995792B5E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50D67274759E9778_METHOD_3_CBB45D9B086B4A24_OFFSET))(this);
	}
};
