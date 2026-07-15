#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvAttachEntityToPropEX; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DE7081741121DDB4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17F02B00)
#define CLASS_3_DE7081741121DDB4__CTOR_OFFSET UNITYSDK_OFFSET(0x17F02AD0)

inline static constexpr unsigned int Class_3_DE7081741121DDB4_TypeDefinitionIndex = 55297;

class Class_3_DE7081741121DDB4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvAttachEntityToPropEX*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvAttachEntityToPropEX* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvAttachEntityToPropEX*))((::PBYTE)hIl2Cpp + CLASS_3_DE7081741121DDB4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE7081741121DDB4_ONTASKBEGIN_OFFSET))(this);
	}
};
