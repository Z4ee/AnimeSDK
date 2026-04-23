#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ClearWeakness; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3F346E0A834A9D64_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x975C850)
#define CLASS_3_3F346E0A834A9D64__CTOR_OFFSET UNITYSDK_OFFSET(0x975C820)

inline static constexpr unsigned int Class_3_3F346E0A834A9D64_TypeDefinitionIndex = 50700;

class Class_3_3F346E0A834A9D64 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ClearWeakness*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearWeakness* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearWeakness*))((::PBYTE)hIl2Cpp + CLASS_3_3F346E0A834A9D64__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F346E0A834A9D64_ONTASKBEGIN_OFFSET))(this);
	}
};
