#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TryAsyncLoadUI; }

#define CLASS_3_9C59E5C0F2F844A4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18CEFD90)
#define CLASS_3_9C59E5C0F2F844A4__CTOR_OFFSET UNITYSDK_OFFSET(0x18CEFD60)

inline static constexpr unsigned int Class_3_9C59E5C0F2F844A4_TypeDefinitionIndex = 53712;

class Class_3_9C59E5C0F2F844A4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TryAsyncLoadUI*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TryAsyncLoadUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TryAsyncLoadUI*))((::PBYTE)hIl2Cpp + CLASS_3_9C59E5C0F2F844A4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C59E5C0F2F844A4_ONTASKBEGIN_OFFSET))(this);
	}
};
