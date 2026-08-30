#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroUseBullet; }

#define CLASS_3_DD1494FFDA1F3D15_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB17420)
#define CLASS_3_DD1494FFDA1F3D15__CTOR_OFFSET UNITYSDK_OFFSET(0xBB173F0)

inline static constexpr unsigned int Class_3_DD1494FFDA1F3D15_TypeDefinitionIndex = 59116;

class Class_3_DD1494FFDA1F3D15 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::WolfBroUseBullet*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroUseBullet* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroUseBullet*))((::PBYTE)hIl2Cpp + CLASS_3_DD1494FFDA1F3D15__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD1494FFDA1F3D15_ONTASKBEGIN_OFFSET))(this);
	}
};
