#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class OpticalIllusionSetOpCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7FBB0041E5790783_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCE5340)
#define CLASS_3_7FBB0041E5790783__CTOR_OFFSET UNITYSDK_OFFSET(0xBCE5310)

inline static constexpr unsigned int Class_3_7FBB0041E5790783_TypeDefinitionIndex = 53318;

class Class_3_7FBB0041E5790783 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::OpticalIllusionSetOpCount*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpticalIllusionSetOpCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpticalIllusionSetOpCount*))((::PBYTE)hIl2Cpp + CLASS_3_7FBB0041E5790783__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7FBB0041E5790783_ONTASKBEGIN_OFFSET))(this);
	}
};
