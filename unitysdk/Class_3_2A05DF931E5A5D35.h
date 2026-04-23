#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdaptEntityPosition; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2A05DF931E5A5D35_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12956490)
#define CLASS_3_2A05DF931E5A5D35__CTOR_OFFSET UNITYSDK_OFFSET(0x12956460)

inline static constexpr unsigned int Class_3_2A05DF931E5A5D35_TypeDefinitionIndex = 53349;

class Class_3_2A05DF931E5A5D35 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdaptEntityPosition*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdaptEntityPosition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdaptEntityPosition*))((::PBYTE)hIl2Cpp + CLASS_3_2A05DF931E5A5D35__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2A05DF931E5A5D35_ONTASKBEGIN_OFFSET))(this);
	}
};
