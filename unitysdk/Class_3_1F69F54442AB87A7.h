#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByMagicUnitCounter; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1F69F54442AB87A7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1419F6B0)
#define CLASS_3_1F69F54442AB87A7__CTOR_OFFSET UNITYSDK_OFFSET(0x1419F5D0)

inline static constexpr unsigned int Class_3_1F69F54442AB87A7_TypeDefinitionIndex = 51792;

class Class_3_1F69F54442AB87A7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByMagicUnitCounter*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByMagicUnitCounter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByMagicUnitCounter*))((::PBYTE)hIl2Cpp + CLASS_3_1F69F54442AB87A7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F69F54442AB87A7_ONTASKBEGIN_OFFSET))(this);
	}
};
