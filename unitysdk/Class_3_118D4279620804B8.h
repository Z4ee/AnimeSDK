#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvPlayerCancelRide; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_118D4279620804B8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10623990)
#define CLASS_3_118D4279620804B8__CTOR_OFFSET UNITYSDK_OFFSET(0x10623960)

inline static constexpr unsigned int Class_3_118D4279620804B8_TypeDefinitionIndex = 42479;

class Class_3_118D4279620804B8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvPlayerCancelRide*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPlayerCancelRide* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPlayerCancelRide*))((::PBYTE)hIl2Cpp + CLASS_3_118D4279620804B8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_118D4279620804B8_ONTASKBEGIN_OFFSET))(this);
	}
};
