#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetTimeRewindEntityControlMode; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0AD2C019618C0E03_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1285E320)
#define CLASS_3_0AD2C019618C0E03__CTOR_OFFSET UNITYSDK_OFFSET(0x1285E2F0)

inline static constexpr unsigned int Class_3_0AD2C019618C0E03_TypeDefinitionIndex = 53650;

class Class_3_0AD2C019618C0E03 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetTimeRewindEntityControlMode*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTimeRewindEntityControlMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTimeRewindEntityControlMode*))((::PBYTE)hIl2Cpp + CLASS_3_0AD2C019618C0E03__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AD2C019618C0E03_ONTASKBEGIN_OFFSET))(this);
	}
};
