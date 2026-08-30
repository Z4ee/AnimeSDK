#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_RtTask_1.h"

namespace RPG::GameCore { class ST_RtSelectTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F8CCE27E82103E77_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE041BC0)
#define CLASS_3_F8CCE27E82103E77_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE041F70)
#define CLASS_3_F8CCE27E82103E77__CTOR_OFFSET UNITYSDK_OFFSET(0xE041B90)

inline static constexpr unsigned int Class_3_F8CCE27E82103E77_TypeDefinitionIndex = 54362;

class Class_3_F8CCE27E82103E77 : public ::RPG::GameCore::ST_RtTask_1<::RPG::GameCore::ST_RtSelectTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_RtSelectTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_RtSelectTarget*))((::PBYTE)hIl2Cpp + CLASS_3_F8CCE27E82103E77__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8CCE27E82103E77_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8CCE27E82103E77_ONTASKRESET_OFFSET))(this);
	}
};
