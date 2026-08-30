#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class BindTimeRewindController; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_60AA2BC3A2DE38DB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19C18220)
#define CLASS_3_60AA2BC3A2DE38DB__CTOR_OFFSET UNITYSDK_OFFSET(0x19C181F0)

inline static constexpr unsigned int Class_3_60AA2BC3A2DE38DB_TypeDefinitionIndex = 53619;

class Class_3_60AA2BC3A2DE38DB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::BindTimeRewindController*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BindTimeRewindController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindTimeRewindController*))((::PBYTE)hIl2Cpp + CLASS_3_60AA2BC3A2DE38DB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60AA2BC3A2DE38DB_ONTASKBEGIN_OFFSET))(this);
	}
};
