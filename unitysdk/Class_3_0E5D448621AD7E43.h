#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TalkFigure; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0E5D448621AD7E43_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162F6D00)
#define CLASS_3_0E5D448621AD7E43__CTOR_OFFSET UNITYSDK_OFFSET(0x162F6CD0)

inline static constexpr unsigned int Class_3_0E5D448621AD7E43_TypeDefinitionIndex = 50902;

class Class_3_0E5D448621AD7E43 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TalkFigure*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TalkFigure* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TalkFigure*))((::PBYTE)hIl2Cpp + CLASS_3_0E5D448621AD7E43__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0E5D448621AD7E43_ONTASKBEGIN_OFFSET))(this);
	}
};
