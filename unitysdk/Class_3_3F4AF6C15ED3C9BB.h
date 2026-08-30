#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvPlayerRide; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3F4AF6C15ED3C9BB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17D2B800)
#define CLASS_3_3F4AF6C15ED3C9BB__CTOR_OFFSET UNITYSDK_OFFSET(0x17D2B7D0)

inline static constexpr unsigned int Class_3_3F4AF6C15ED3C9BB_TypeDefinitionIndex = 52749;

class Class_3_3F4AF6C15ED3C9BB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvPlayerRide*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPlayerRide* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPlayerRide*))((::PBYTE)hIl2Cpp + CLASS_3_3F4AF6C15ED3C9BB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F4AF6C15ED3C9BB_ONTASKBEGIN_OFFSET))(this);
	}
};
