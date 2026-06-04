#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class HardLevelGroupRow; }
namespace RPG::GameCore { class SetDynamicValueByHardLevelProperty; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_06004916717A0FA6_METHOD_3_28E526D2335C4C71_OFFSET UNITYSDK_OFFSET(0xAD136A0)
#define CLASS_3_06004916717A0FA6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAD13450)
#define CLASS_3_06004916717A0FA6__CTOR_OFFSET UNITYSDK_OFFSET(0xAD13370)

inline static constexpr unsigned int Class_3_06004916717A0FA6_TypeDefinitionIndex = 51788;

class Class_3_06004916717A0FA6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByHardLevelProperty*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByHardLevelProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByHardLevelProperty*))((::PBYTE)hIl2Cpp + CLASS_3_06004916717A0FA6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06004916717A0FA6_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_28E526D2335C4C71(::RPG::GameCore::HardLevelGroupRow* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::HardLevelGroupRow*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_06004916717A0FA6_METHOD_3_28E526D2335C4C71_OFFSET))(this, a1, a2);
	}
};
