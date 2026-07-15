#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetDynamicValueByBattleTargetParam; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_23E965961F9C2E0A_METHOD_3_BBA40177DF6F6B52_OFFSET UNITYSDK_OFFSET(0x14E62FB0)
#define CLASS_3_23E965961F9C2E0A_METHOD_3_D9A623A22F492C00_OFFSET UNITYSDK_OFFSET(0x14E62E70)
#define CLASS_3_23E965961F9C2E0A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14E62DD0)
#define CLASS_3_23E965961F9C2E0A__CTOR_OFFSET UNITYSDK_OFFSET(0x14E62DA0)

inline static constexpr unsigned int Class_3_23E965961F9C2E0A_TypeDefinitionIndex = 52903;

class Class_3_23E965961F9C2E0A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByBattleTargetParam*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByBattleTargetParam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByBattleTargetParam*))((::PBYTE)hIl2Cpp + CLASS_3_23E965961F9C2E0A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23E965961F9C2E0A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_D9A623A22F492C00(::System::UInt32 a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_3_23E965961F9C2E0A_METHOD_3_D9A623A22F492C00_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BBA40177DF6F6B52(::System::String* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_23E965961F9C2E0A_METHOD_3_BBA40177DF6F6B52_OFFSET))(this, a1, a2);
	}
};
