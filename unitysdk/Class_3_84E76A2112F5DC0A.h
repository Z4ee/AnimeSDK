#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ModifyDamageDisplayData; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_84E76A2112F5DC0A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x97F9CE0)
#define CLASS_3_84E76A2112F5DC0A__CTOR_OFFSET UNITYSDK_OFFSET(0x97F9CB0)

inline static constexpr unsigned int Class_3_84E76A2112F5DC0A_TypeDefinitionIndex = 50886;

class Class_3_84E76A2112F5DC0A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyDamageDisplayData*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyDamageDisplayData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyDamageDisplayData*))((::PBYTE)hIl2Cpp + CLASS_3_84E76A2112F5DC0A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84E76A2112F5DC0A_ONTASKBEGIN_OFFSET))(this);
	}
};
