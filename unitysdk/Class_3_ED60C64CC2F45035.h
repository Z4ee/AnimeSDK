#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ModifyFMChannelSourceSignal; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_ED60C64CC2F45035_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC7AE740)
#define CLASS_3_ED60C64CC2F45035__CTOR_OFFSET UNITYSDK_OFFSET(0xC7AE710)

inline static constexpr unsigned int Class_3_ED60C64CC2F45035_TypeDefinitionIndex = 53300;

class Class_3_ED60C64CC2F45035 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyFMChannelSourceSignal*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyFMChannelSourceSignal* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyFMChannelSourceSignal*))((::PBYTE)hIl2Cpp + CLASS_3_ED60C64CC2F45035__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ED60C64CC2F45035_ONTASKBEGIN_OFFSET))(this);
	}
};
