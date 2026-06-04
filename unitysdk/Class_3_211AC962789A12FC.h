#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class InfiniteWaveSkipTo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_211AC962789A12FC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA8C6EB0)
#define CLASS_3_211AC962789A12FC__CTOR_OFFSET UNITYSDK_OFFSET(0xA8C6E80)

inline static constexpr unsigned int Class_3_211AC962789A12FC_TypeDefinitionIndex = 51482;

class Class_3_211AC962789A12FC : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::InfiniteWaveSkipTo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InfiniteWaveSkipTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InfiniteWaveSkipTo*))((::PBYTE)hIl2Cpp + CLASS_3_211AC962789A12FC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_211AC962789A12FC_ONTASKBEGIN_OFFSET))(this);
	}
};
