#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AddStreamingSource; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CBBBB718DB742F91_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A754E00)
#define CLASS_3_CBBBB718DB742F91__CTOR_OFFSET UNITYSDK_OFFSET(0x1A754DD0)

inline static constexpr unsigned int Class_3_CBBBB718DB742F91_TypeDefinitionIndex = 58019;

class Class_3_CBBBB718DB742F91 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddStreamingSource*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddStreamingSource* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddStreamingSource*))((::PBYTE)hIl2Cpp + CLASS_3_CBBBB718DB742F91__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CBBBB718DB742F91_ONTASKBEGIN_OFFSET))(this);
	}
};
