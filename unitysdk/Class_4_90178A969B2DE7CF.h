#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_20D661A664EB4082.h"

namespace RPG::GameCore { class SetDynamicValueByHPRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_90178A969B2DE7CF__CTOR_OFFSET UNITYSDK_OFFSET(0x11B9AFF0)

inline static constexpr unsigned int Class_4_90178A969B2DE7CF_TypeDefinitionIndex = 51117;

class Class_4_90178A969B2DE7CF : public ::Class_3_20D661A664EB4082
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByHPRatio* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByHPRatio*))((::PBYTE)hIl2Cpp + CLASS_4_90178A969B2DE7CF__CTOR_OFFSET))(this, a1, a2);
	}
};
