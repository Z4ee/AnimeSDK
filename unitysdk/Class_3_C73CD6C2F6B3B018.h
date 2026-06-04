#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByPreCalcHPDamage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C73CD6C2F6B3B018_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA699EB0)
#define CLASS_3_C73CD6C2F6B3B018__CTOR_OFFSET UNITYSDK_OFFSET(0xA699DD0)

inline static constexpr unsigned int Class_3_C73CD6C2F6B3B018_TypeDefinitionIndex = 51797;

class Class_3_C73CD6C2F6B3B018 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByPreCalcHPDamage*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByPreCalcHPDamage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByPreCalcHPDamage*))((::PBYTE)hIl2Cpp + CLASS_3_C73CD6C2F6B3B018__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C73CD6C2F6B3B018_ONTASKBEGIN_OFFSET))(this);
	}
};
