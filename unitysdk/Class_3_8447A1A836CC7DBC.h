#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class DynamicValueRoundToInt; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8447A1A836CC7DBC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18F841E0)
#define CLASS_3_8447A1A836CC7DBC__CTOR_OFFSET UNITYSDK_OFFSET(0x18F84100)

inline static constexpr unsigned int Class_3_8447A1A836CC7DBC_TypeDefinitionIndex = 53822;

class Class_3_8447A1A836CC7DBC : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DynamicValueRoundToInt*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DynamicValueRoundToInt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DynamicValueRoundToInt*))((::PBYTE)hIl2Cpp + CLASS_3_8447A1A836CC7DBC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8447A1A836CC7DBC_ONTASKBEGIN_OFFSET))(this);
	}
};
