#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvSpecialVisionProtect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9319AA7B5591C256_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB37F70)
#define CLASS_3_9319AA7B5591C256__CTOR_OFFSET UNITYSDK_OFFSET(0xBB37F40)

inline static constexpr unsigned int Class_3_9319AA7B5591C256_TypeDefinitionIndex = 52785;

class Class_3_9319AA7B5591C256 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvSpecialVisionProtect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSpecialVisionProtect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSpecialVisionProtect*))((::PBYTE)hIl2Cpp + CLASS_3_9319AA7B5591C256__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9319AA7B5591C256_ONTASKBEGIN_OFFSET))(this);
	}
};
