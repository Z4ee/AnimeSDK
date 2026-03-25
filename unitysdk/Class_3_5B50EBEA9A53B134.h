#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByActivityElation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5B50EBEA9A53B134_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x87FC930)
#define CLASS_3_5B50EBEA9A53B134__CTOR_OFFSET UNITYSDK_OFFSET(0x87FC850)

inline static constexpr unsigned int Class_3_5B50EBEA9A53B134_TypeDefinitionIndex = 43867;

class Class_3_5B50EBEA9A53B134 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByActivityElation*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByActivityElation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByActivityElation*))((::PBYTE)hIl2Cpp + CLASS_3_5B50EBEA9A53B134__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B50EBEA9A53B134_ONTASKBEGIN_OFFSET))(this);
	}
};
