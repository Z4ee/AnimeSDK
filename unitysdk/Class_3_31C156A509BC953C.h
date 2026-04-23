#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByMaxBP; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_31C156A509BC953C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1280A730)
#define CLASS_3_31C156A509BC953C__CTOR_OFFSET UNITYSDK_OFFSET(0x1280A650)

inline static constexpr unsigned int Class_3_31C156A509BC953C_TypeDefinitionIndex = 51124;

class Class_3_31C156A509BC953C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByMaxBP*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByMaxBP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByMaxBP*))((::PBYTE)hIl2Cpp + CLASS_3_31C156A509BC953C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31C156A509BC953C_ONTASKBEGIN_OFFSET))(this);
	}
};
