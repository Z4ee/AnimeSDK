#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvAddGlobalWeakness; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_15584052327357A9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1546F450)
#define CLASS_3_15584052327357A9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1546F490)
#define CLASS_3_15584052327357A9__CTOR_OFFSET UNITYSDK_OFFSET(0x1546F420)

inline static constexpr unsigned int Class_3_15584052327357A9_TypeDefinitionIndex = 52609;

class Class_3_15584052327357A9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvAddGlobalWeakness*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvAddGlobalWeakness* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvAddGlobalWeakness*))((::PBYTE)hIl2Cpp + CLASS_3_15584052327357A9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_15584052327357A9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_15584052327357A9_ONTASKBEGIN_OFFSET))(this);
	}
};
