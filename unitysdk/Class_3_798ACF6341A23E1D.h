#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnableBattleOnAttacked; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_798ACF6341A23E1D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A2C480)
#define CLASS_3_798ACF6341A23E1D__CTOR_OFFSET UNITYSDK_OFFSET(0x17A2C450)

inline static constexpr unsigned int Class_3_798ACF6341A23E1D_TypeDefinitionIndex = 58254;

class Class_3_798ACF6341A23E1D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnableBattleOnAttacked*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableBattleOnAttacked* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableBattleOnAttacked*))((::PBYTE)hIl2Cpp + CLASS_3_798ACF6341A23E1D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_798ACF6341A23E1D_ONTASKBEGIN_OFFSET))(this);
	}
};
