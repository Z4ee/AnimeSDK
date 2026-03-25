#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByCountOfBaseType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_73F43AB26075C339_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE4736B0)
#define CLASS_3_73F43AB26075C339__CTOR_OFFSET UNITYSDK_OFFSET(0xE4735D0)

inline static constexpr unsigned int Class_3_73F43AB26075C339_TypeDefinitionIndex = 44367;

class Class_3_73F43AB26075C339 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByCountOfBaseType*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByCountOfBaseType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByCountOfBaseType*))((::PBYTE)hIl2Cpp + CLASS_3_73F43AB26075C339__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_73F43AB26075C339_ONTASKBEGIN_OFFSET))(this);
	}
};
