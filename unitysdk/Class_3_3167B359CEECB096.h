#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByStatusCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3167B359CEECB096_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8B76AB0)
#define CLASS_3_3167B359CEECB096__CTOR_OFFSET UNITYSDK_OFFSET(0x8B769D0)

inline static constexpr unsigned int Class_3_3167B359CEECB096_TypeDefinitionIndex = 44422;

class Class_3_3167B359CEECB096 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByStatusCount*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByStatusCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByStatusCount*))((::PBYTE)hIl2Cpp + CLASS_3_3167B359CEECB096__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3167B359CEECB096_ONTASKBEGIN_OFFSET))(this);
	}
};
