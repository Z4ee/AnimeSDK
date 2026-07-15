#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetTrackPhotoStandardSpeed; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CF6D86EC789436A5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16BC4510)
#define CLASS_3_CF6D86EC789436A5__CTOR_OFFSET UNITYSDK_OFFSET(0x16BC44E0)

inline static constexpr unsigned int Class_3_CF6D86EC789436A5_TypeDefinitionIndex = 50832;

class Class_3_CF6D86EC789436A5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetTrackPhotoStandardSpeed*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTrackPhotoStandardSpeed* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTrackPhotoStandardSpeed*))((::PBYTE)hIl2Cpp + CLASS_3_CF6D86EC789436A5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CF6D86EC789436A5_ONTASKBEGIN_OFFSET))(this);
	}
};
