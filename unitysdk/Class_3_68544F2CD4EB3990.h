#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class ChessSetDynamicValueByProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_68544F2CD4EB3990_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11957F20)
#define CLASS_3_68544F2CD4EB3990__CTOR_OFFSET UNITYSDK_OFFSET(0x11957E40)

inline static constexpr unsigned int Class_3_68544F2CD4EB3990_TypeDefinitionIndex = 45205;

class Class_3_68544F2CD4EB3990 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChessSetDynamicValueByProperty*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChessSetDynamicValueByProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChessSetDynamicValueByProperty*))((::PBYTE)hIl2Cpp + CLASS_3_68544F2CD4EB3990__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_68544F2CD4EB3990_ONTASKBEGIN_OFFSET))(this);
	}
};
