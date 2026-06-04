#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EndPropSceneSelection; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C958A04556732C9F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13820CB0)
#define CLASS_3_C958A04556732C9F__CTOR_OFFSET UNITYSDK_OFFSET(0x13820C80)

inline static constexpr unsigned int Class_3_C958A04556732C9F_TypeDefinitionIndex = 54315;

class Class_3_C958A04556732C9F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EndPropSceneSelection*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EndPropSceneSelection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EndPropSceneSelection*))((::PBYTE)hIl2Cpp + CLASS_3_C958A04556732C9F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C958A04556732C9F_ONTASKBEGIN_OFFSET))(this);
	}
};
