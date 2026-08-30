#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ConvinceSplitLine; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FDBFE81003A60FC9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165CEAD0)
#define CLASS_3_FDBFE81003A60FC9__CTOR_OFFSET UNITYSDK_OFFSET(0x165CEAA0)

inline static constexpr unsigned int Class_3_FDBFE81003A60FC9_TypeDefinitionIndex = 52988;

class Class_3_FDBFE81003A60FC9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ConvinceSplitLine*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceSplitLine* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceSplitLine*))((::PBYTE)hIl2Cpp + CLASS_3_FDBFE81003A60FC9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FDBFE81003A60FC9_ONTASKBEGIN_OFFSET))(this);
	}
};
