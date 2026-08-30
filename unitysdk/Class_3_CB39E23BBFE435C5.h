#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ConstructBodyPart; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CB39E23BBFE435C5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E1C520)
#define CLASS_3_CB39E23BBFE435C5__CTOR_OFFSET UNITYSDK_OFFSET(0x15E1C4F0)

inline static constexpr unsigned int Class_3_CB39E23BBFE435C5_TypeDefinitionIndex = 55182;

class Class_3_CB39E23BBFE435C5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ConstructBodyPart*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConstructBodyPart* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConstructBodyPart*))((::PBYTE)hIl2Cpp + CLASS_3_CB39E23BBFE435C5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB39E23BBFE435C5_ONTASKBEGIN_OFFSET))(this);
	}
};
