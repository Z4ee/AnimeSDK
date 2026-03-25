#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetFloatingTextInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B87E3305DE19C93C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10BA03E0)
#define CLASS_3_B87E3305DE19C93C__CTOR_OFFSET UNITYSDK_OFFSET(0x10BA03B0)

inline static constexpr unsigned int Class_3_B87E3305DE19C93C_TypeDefinitionIndex = 47239;

class Class_3_B87E3305DE19C93C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetFloatingTextInfo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFloatingTextInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFloatingTextInfo*))((::PBYTE)hIl2Cpp + CLASS_3_B87E3305DE19C93C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B87E3305DE19C93C_ONTASKBEGIN_OFFSET))(this);
	}
};
