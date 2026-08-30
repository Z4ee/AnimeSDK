#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByStatusProbability; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6542F40B3FCD77DD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4727C0)
#define CLASS_3_6542F40B3FCD77DD__CTOR_OFFSET UNITYSDK_OFFSET(0xB4726E0)

inline static constexpr unsigned int Class_3_6542F40B3FCD77DD_TypeDefinitionIndex = 55664;

class Class_3_6542F40B3FCD77DD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByStatusProbability*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByStatusProbability* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByStatusProbability*))((::PBYTE)hIl2Cpp + CLASS_3_6542F40B3FCD77DD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6542F40B3FCD77DD_ONTASKBEGIN_OFFSET))(this);
	}
};
