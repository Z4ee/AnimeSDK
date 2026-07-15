#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CreateAttachPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_574F9B0E9A5893A3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16209C30)
#define CLASS_3_574F9B0E9A5893A3__CTOR_OFFSET UNITYSDK_OFFSET(0x16209C00)

inline static constexpr unsigned int Class_3_574F9B0E9A5893A3_TypeDefinitionIndex = 52486;

class Class_3_574F9B0E9A5893A3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreateAttachPoint*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateAttachPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateAttachPoint*))((::PBYTE)hIl2Cpp + CLASS_3_574F9B0E9A5893A3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_574F9B0E9A5893A3_ONTASKBEGIN_OFFSET))(this);
	}
};
