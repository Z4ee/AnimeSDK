#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvPauseTickValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C2A465EA8B67865B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16F66890)
#define CLASS_3_C2A465EA8B67865B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16F66910)
#define CLASS_3_C2A465EA8B67865B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16F668D0)
#define CLASS_3_C2A465EA8B67865B__CTOR_OFFSET UNITYSDK_OFFSET(0x16F66860)

inline static constexpr unsigned int Class_3_C2A465EA8B67865B_TypeDefinitionIndex = 55310;

class Class_3_C2A465EA8B67865B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvPauseTickValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPauseTickValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPauseTickValue*))((::PBYTE)hIl2Cpp + CLASS_3_C2A465EA8B67865B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2A465EA8B67865B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2A465EA8B67865B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2A465EA8B67865B_ONTASKBEGIN_OFFSET))(this);
	}
};
