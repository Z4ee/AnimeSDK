#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropPuzzleViewEventSender; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4C7F38673F333756_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB954BC0)
#define CLASS_3_4C7F38673F333756__CTOR_OFFSET UNITYSDK_OFFSET(0xB954B90)

inline static constexpr unsigned int Class_3_4C7F38673F333756_TypeDefinitionIndex = 58489;

class Class_3_4C7F38673F333756 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropPuzzleViewEventSender*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropPuzzleViewEventSender* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropPuzzleViewEventSender*))((::PBYTE)hIl2Cpp + CLASS_3_4C7F38673F333756__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4C7F38673F333756_ONTASKBEGIN_OFFSET))(this);
	}
};
