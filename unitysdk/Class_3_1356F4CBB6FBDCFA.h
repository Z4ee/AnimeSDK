#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class BlockCameraDitherUpdate; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1356F4CBB6FBDCFA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xECB00E0)
#define CLASS_3_1356F4CBB6FBDCFA__CTOR_OFFSET UNITYSDK_OFFSET(0xECB00B0)

inline static constexpr unsigned int Class_3_1356F4CBB6FBDCFA_TypeDefinitionIndex = 53445;

class Class_3_1356F4CBB6FBDCFA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::BlockCameraDitherUpdate*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BlockCameraDitherUpdate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BlockCameraDitherUpdate*))((::PBYTE)hIl2Cpp + CLASS_3_1356F4CBB6FBDCFA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1356F4CBB6FBDCFA_ONTASKBEGIN_OFFSET))(this);
	}
};
