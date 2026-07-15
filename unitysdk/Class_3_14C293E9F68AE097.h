#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropSwitchMaterial; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_14C293E9F68AE097_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14D6BC80)
#define CLASS_3_14C293E9F68AE097_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14D6BA90)
#define CLASS_3_14C293E9F68AE097_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14D6BC30)
#define CLASS_3_14C293E9F68AE097__CTOR_OFFSET UNITYSDK_OFFSET(0x14D6BA60)

inline static constexpr unsigned int Class_3_14C293E9F68AE097_TypeDefinitionIndex = 55778;

class Class_3_14C293E9F68AE097 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropSwitchMaterial*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSwitchMaterial* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSwitchMaterial*))((::PBYTE)hIl2Cpp + CLASS_3_14C293E9F68AE097__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14C293E9F68AE097_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14C293E9F68AE097_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14C293E9F68AE097_DISPOSE_OFFSET))(this);
	}
};
