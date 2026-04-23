#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowActionCountDownIcon; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D695DF559253B3BC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x117E2830)
#define CLASS_3_D695DF559253B3BC__CTOR_OFFSET UNITYSDK_OFFSET(0x117E2800)

inline static constexpr unsigned int Class_3_D695DF559253B3BC_TypeDefinitionIndex = 50564;

class Class_3_D695DF559253B3BC : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowActionCountDownIcon*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowActionCountDownIcon* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowActionCountDownIcon*))((::PBYTE)hIl2Cpp + CLASS_3_D695DF559253B3BC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D695DF559253B3BC_ONTASKBEGIN_OFFSET))(this);
	}
};
