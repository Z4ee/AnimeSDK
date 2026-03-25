#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByBaseTypeCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2E838FA676AA1BF9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10AE6600)
#define CLASS_3_2E838FA676AA1BF9__CTOR_OFFSET UNITYSDK_OFFSET(0x10AE6520)

inline static constexpr unsigned int Class_3_2E838FA676AA1BF9_TypeDefinitionIndex = 44366;

class Class_3_2E838FA676AA1BF9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByBaseTypeCount*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByBaseTypeCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByBaseTypeCount*))((::PBYTE)hIl2Cpp + CLASS_3_2E838FA676AA1BF9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2E838FA676AA1BF9_ONTASKBEGIN_OFFSET))(this);
	}
};
