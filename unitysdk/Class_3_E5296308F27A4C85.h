#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ChimePuzzleDimAllBoard; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E5296308F27A4C85_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18547780)
#define CLASS_3_E5296308F27A4C85__CTOR_OFFSET UNITYSDK_OFFSET(0x18547750)

inline static constexpr unsigned int Class_3_E5296308F27A4C85_TypeDefinitionIndex = 58170;

class Class_3_E5296308F27A4C85 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChimePuzzleDimAllBoard*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChimePuzzleDimAllBoard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChimePuzzleDimAllBoard*))((::PBYTE)hIl2Cpp + CLASS_3_E5296308F27A4C85__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5296308F27A4C85_ONTASKBEGIN_OFFSET))(this);
	}
};
