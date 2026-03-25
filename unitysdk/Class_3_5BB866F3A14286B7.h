#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvAddVisionUseCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5BB866F3A14286B7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11662670)
#define CLASS_3_5BB866F3A14286B7__CTOR_OFFSET UNITYSDK_OFFSET(0x11662640)

inline static constexpr unsigned int Class_3_5BB866F3A14286B7_TypeDefinitionIndex = 42350;

class Class_3_5BB866F3A14286B7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvAddVisionUseCount*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvAddVisionUseCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvAddVisionUseCount*))((::PBYTE)hIl2Cpp + CLASS_3_5BB866F3A14286B7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5BB866F3A14286B7_ONTASKBEGIN_OFFSET))(this);
	}
};
