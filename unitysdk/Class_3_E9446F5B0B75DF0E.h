#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropSwitchShowInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E9446F5B0B75DF0E_METHOD_3_4BBD386276E7E50D_OFFSET UNITYSDK_OFFSET(0x1248E320)
#define CLASS_3_E9446F5B0B75DF0E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1248DF90)
#define CLASS_3_E9446F5B0B75DF0E__CTOR_OFFSET UNITYSDK_OFFSET(0x1248DF60)

inline static constexpr unsigned int Class_3_E9446F5B0B75DF0E_TypeDefinitionIndex = 49040;

class Class_3_E9446F5B0B75DF0E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropSwitchShowInfo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSwitchShowInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSwitchShowInfo*))((::PBYTE)hIl2Cpp + CLASS_3_E9446F5B0B75DF0E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9446F5B0B75DF0E_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_4BBD386276E7E50D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9446F5B0B75DF0E_METHOD_3_4BBD386276E7E50D_OFFSET))(this);
	}
};
