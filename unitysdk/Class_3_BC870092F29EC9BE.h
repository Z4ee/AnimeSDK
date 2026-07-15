#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetGraphDynamicString; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BC870092F29EC9BE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18DC52E0)
#define CLASS_3_BC870092F29EC9BE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC52B0)

inline static constexpr unsigned int Class_3_BC870092F29EC9BE_TypeDefinitionIndex = 50814;

class Class_3_BC870092F29EC9BE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetGraphDynamicString*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetGraphDynamicString* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetGraphDynamicString*))((::PBYTE)hIl2Cpp + CLASS_3_BC870092F29EC9BE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC870092F29EC9BE_ONTASKBEGIN_OFFSET))(this);
	}
};
