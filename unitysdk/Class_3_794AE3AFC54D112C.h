#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetTargetDefaultDamageDisplayData; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_794AE3AFC54D112C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x117F31D0)
#define CLASS_3_794AE3AFC54D112C__CTOR_OFFSET UNITYSDK_OFFSET(0x117F31A0)

inline static constexpr unsigned int Class_3_794AE3AFC54D112C_TypeDefinitionIndex = 44511;

class Class_3_794AE3AFC54D112C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetTargetDefaultDamageDisplayData*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetDefaultDamageDisplayData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetDefaultDamageDisplayData*))((::PBYTE)hIl2Cpp + CLASS_3_794AE3AFC54D112C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_794AE3AFC54D112C_ONTASKBEGIN_OFFSET))(this);
	}
};
