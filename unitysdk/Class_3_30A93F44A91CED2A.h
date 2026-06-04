#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class LoseHPByRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_30A93F44A91CED2A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x137D2560)
#define CLASS_3_30A93F44A91CED2A__CTOR_OFFSET UNITYSDK_OFFSET(0x137D2490)

inline static constexpr unsigned int Class_3_30A93F44A91CED2A_TypeDefinitionIndex = 51526;

class Class_3_30A93F44A91CED2A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LoseHPByRatio*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LoseHPByRatio* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LoseHPByRatio*))((::PBYTE)hIl2Cpp + CLASS_3_30A93F44A91CED2A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30A93F44A91CED2A_ONTASKBEGIN_OFFSET))(this);
	}
};
