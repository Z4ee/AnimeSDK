#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class CalcYawAngle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FA6C6BBA35575985_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18238F10)
#define CLASS_3_FA6C6BBA35575985__CTOR_OFFSET UNITYSDK_OFFSET(0x18238E30)

inline static constexpr unsigned int Class_3_FA6C6BBA35575985_TypeDefinitionIndex = 53816;

class Class_3_FA6C6BBA35575985 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CalcYawAngle*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CalcYawAngle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CalcYawAngle*))((::PBYTE)hIl2Cpp + CLASS_3_FA6C6BBA35575985__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA6C6BBA35575985_ONTASKBEGIN_OFFSET))(this);
	}
};
