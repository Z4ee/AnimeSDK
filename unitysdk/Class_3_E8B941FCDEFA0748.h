#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerHitVibration; }

#define CLASS_3_E8B941FCDEFA0748_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12A83D10)
#define CLASS_3_E8B941FCDEFA0748_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12A83D50)
#define CLASS_3_E8B941FCDEFA0748__CTOR_OFFSET UNITYSDK_OFFSET(0x12A83CE0)
#define CLASS_3_E8B941FCDEFA0748___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12A83F10)

inline static constexpr unsigned int Class_3_E8B941FCDEFA0748_TypeDefinitionIndex = 52047;

class Class_3_E8B941FCDEFA0748 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerHitVibration*>
{
public:
	::RPG::GameCore::GameEntity* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerHitVibration* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerHitVibration*))((::PBYTE)hIl2Cpp + CLASS_3_E8B941FCDEFA0748__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E8B941FCDEFA0748_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E8B941FCDEFA0748_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E8B941FCDEFA0748___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
