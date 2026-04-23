#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByFateContent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_AA7E7C07728C9D8D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x128ED8D0)
#define CLASS_3_AA7E7C07728C9D8D__CTOR_OFFSET UNITYSDK_OFFSET(0x128ED7F0)

inline static constexpr unsigned int Class_3_AA7E7C07728C9D8D_TypeDefinitionIndex = 51105;

class Class_3_AA7E7C07728C9D8D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByFateContent*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByFateContent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByFateContent*))((::PBYTE)hIl2Cpp + CLASS_3_AA7E7C07728C9D8D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA7E7C07728C9D8D_ONTASKBEGIN_OFFSET))(this);
	}
};
