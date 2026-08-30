#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PlayPenaconyEndmostScale; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_200E6F81DC090D9D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15AAE840)
#define CLASS_3_200E6F81DC090D9D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AAE720)
#define CLASS_3_200E6F81DC090D9D__CTOR_OFFSET UNITYSDK_OFFSET(0x15AAE6F0)

inline static constexpr unsigned int Class_3_200E6F81DC090D9D_TypeDefinitionIndex = 53342;

class Class_3_200E6F81DC090D9D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PlayPenaconyEndmostScale*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayPenaconyEndmostScale* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayPenaconyEndmostScale*))((::PBYTE)hIl2Cpp + CLASS_3_200E6F81DC090D9D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_200E6F81DC090D9D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_200E6F81DC090D9D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
