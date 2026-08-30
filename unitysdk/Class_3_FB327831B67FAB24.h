#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetFiveDimEntityAttachTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FB327831B67FAB24_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB723C40)
#define CLASS_3_FB327831B67FAB24__CTOR_OFFSET UNITYSDK_OFFSET(0xB723C10)

inline static constexpr unsigned int Class_3_FB327831B67FAB24_TypeDefinitionIndex = 53163;

class Class_3_FB327831B67FAB24 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetFiveDimEntityAttachTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFiveDimEntityAttachTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFiveDimEntityAttachTarget*))((::PBYTE)hIl2Cpp + CLASS_3_FB327831B67FAB24__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB327831B67FAB24_ONTASKBEGIN_OFFSET))(this);
	}
};
