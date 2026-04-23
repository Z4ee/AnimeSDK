#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByHPRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_20D661A664EB4082_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11A2AB40)
#define CLASS_3_20D661A664EB4082__CTOR_OFFSET UNITYSDK_OFFSET(0x11A2AA60)

inline static constexpr unsigned int Class_3_20D661A664EB4082_TypeDefinitionIndex = 51116;

class Class_3_20D661A664EB4082 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByHPRatio*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByHPRatio* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByHPRatio*))((::PBYTE)hIl2Cpp + CLASS_3_20D661A664EB4082__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_20D661A664EB4082_ONTASKBEGIN_OFFSET))(this);
	}
};
