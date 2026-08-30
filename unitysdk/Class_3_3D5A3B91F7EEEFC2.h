#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByVersusBar; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3D5A3B91F7EEEFC2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19C45EA0)
#define CLASS_3_3D5A3B91F7EEEFC2__CTOR_OFFSET UNITYSDK_OFFSET(0x19C45DC0)

inline static constexpr unsigned int Class_3_3D5A3B91F7EEEFC2_TypeDefinitionIndex = 55990;

class Class_3_3D5A3B91F7EEEFC2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByVersusBar*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByVersusBar* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByVersusBar*))((::PBYTE)hIl2Cpp + CLASS_3_3D5A3B91F7EEEFC2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D5A3B91F7EEEFC2_ONTASKBEGIN_OFFSET))(this);
	}
};
