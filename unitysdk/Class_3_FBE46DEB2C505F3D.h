#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvRemoveNpcVisionConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FBE46DEB2C505F3D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEC9D030)
#define CLASS_3_FBE46DEB2C505F3D__CTOR_OFFSET UNITYSDK_OFFSET(0xEC9D000)

inline static constexpr unsigned int Class_3_FBE46DEB2C505F3D_TypeDefinitionIndex = 48456;

class Class_3_FBE46DEB2C505F3D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvRemoveNpcVisionConfig*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvRemoveNpcVisionConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvRemoveNpcVisionConfig*))((::PBYTE)hIl2Cpp + CLASS_3_FBE46DEB2C505F3D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBE46DEB2C505F3D_ONTASKBEGIN_OFFSET))(this);
	}
};
