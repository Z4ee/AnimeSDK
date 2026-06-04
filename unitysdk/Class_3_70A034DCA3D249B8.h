#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByTournFloorType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_70A034DCA3D249B8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA85F080)
#define CLASS_3_70A034DCA3D249B8__CTOR_OFFSET UNITYSDK_OFFSET(0xA85EFA0)

inline static constexpr unsigned int Class_3_70A034DCA3D249B8_TypeDefinitionIndex = 51815;

class Class_3_70A034DCA3D249B8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByTournFloorType*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByTournFloorType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByTournFloorType*))((::PBYTE)hIl2Cpp + CLASS_3_70A034DCA3D249B8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70A034DCA3D249B8_ONTASKBEGIN_OFFSET))(this);
	}
};
