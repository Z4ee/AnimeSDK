#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SwitchMascotAddPickupCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_818FEEB8BFC906C6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1050CDB0)
#define CLASS_3_818FEEB8BFC906C6__CTOR_OFFSET UNITYSDK_OFFSET(0x1050CD80)

inline static constexpr unsigned int Class_3_818FEEB8BFC906C6_TypeDefinitionIndex = 47424;

class Class_3_818FEEB8BFC906C6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchMascotAddPickupCount*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchMascotAddPickupCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchMascotAddPickupCount*))((::PBYTE)hIl2Cpp + CLASS_3_818FEEB8BFC906C6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_818FEEB8BFC906C6_ONTASKBEGIN_OFFSET))(this);
	}
};
