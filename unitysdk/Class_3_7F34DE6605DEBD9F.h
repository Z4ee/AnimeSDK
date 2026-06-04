#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LockMainStreamSourceToPlayerTeleportPos; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7F34DE6605DEBD9F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA7040C0)
#define CLASS_3_7F34DE6605DEBD9F__CTOR_OFFSET UNITYSDK_OFFSET(0xA704090)

inline static constexpr unsigned int Class_3_7F34DE6605DEBD9F_TypeDefinitionIndex = 54402;

class Class_3_7F34DE6605DEBD9F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LockMainStreamSourceToPlayerTeleportPos*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockMainStreamSourceToPlayerTeleportPos* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockMainStreamSourceToPlayerTeleportPos*))((::PBYTE)hIl2Cpp + CLASS_3_7F34DE6605DEBD9F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7F34DE6605DEBD9F_ONTASKBEGIN_OFFSET))(this);
	}
};
