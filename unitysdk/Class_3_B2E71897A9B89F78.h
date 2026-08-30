#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ResetPhotoGraphTargets; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B2E71897A9B89F78_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1594C650)
#define CLASS_3_B2E71897A9B89F78__CTOR_OFFSET UNITYSDK_OFFSET(0x1594C620)

inline static constexpr unsigned int Class_3_B2E71897A9B89F78_TypeDefinitionIndex = 53464;

class Class_3_B2E71897A9B89F78 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ResetPhotoGraphTargets*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetPhotoGraphTargets* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetPhotoGraphTargets*))((::PBYTE)hIl2Cpp + CLASS_3_B2E71897A9B89F78__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B2E71897A9B89F78_ONTASKBEGIN_OFFSET))(this);
	}
};
