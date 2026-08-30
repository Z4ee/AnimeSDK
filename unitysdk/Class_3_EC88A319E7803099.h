#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AutoMappingAttachPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EC88A319E7803099_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18352640)
#define CLASS_3_EC88A319E7803099__CTOR_OFFSET UNITYSDK_OFFSET(0x18352610)

inline static constexpr unsigned int Class_3_EC88A319E7803099_TypeDefinitionIndex = 55080;

class Class_3_EC88A319E7803099 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AutoMappingAttachPoint*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AutoMappingAttachPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AutoMappingAttachPoint*))((::PBYTE)hIl2Cpp + CLASS_3_EC88A319E7803099__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC88A319E7803099_ONTASKBEGIN_OFFSET))(this);
	}
};
