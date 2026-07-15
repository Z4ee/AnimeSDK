#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class InitActivityTelevisionBuffInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7CC156EA5F11F0C7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x183E22F0)
#define CLASS_3_7CC156EA5F11F0C7__CTOR_OFFSET UNITYSDK_OFFSET(0x183E22C0)

inline static constexpr unsigned int Class_3_7CC156EA5F11F0C7_TypeDefinitionIndex = 45809;

class Class_3_7CC156EA5F11F0C7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::InitActivityTelevisionBuffInfo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InitActivityTelevisionBuffInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InitActivityTelevisionBuffInfo*))((::PBYTE)hIl2Cpp + CLASS_3_7CC156EA5F11F0C7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7CC156EA5F11F0C7_ONTASKBEGIN_OFFSET))(this);
	}
};
