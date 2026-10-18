#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ClearRecordEntityFormation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8AD2352EDD4460DE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4D2790)
#define CLASS_3_8AD2352EDD4460DE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4D2760)

inline static constexpr unsigned int Class_3_8AD2352EDD4460DE_TypeDefinitionIndex = 55285;

class Class_3_8AD2352EDD4460DE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ClearRecordEntityFormation*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearRecordEntityFormation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearRecordEntityFormation*))((::PBYTE)hIl2Cpp + CLASS_3_8AD2352EDD4460DE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8AD2352EDD4460DE_ONTASKBEGIN_OFFSET))(this);
	}
};
