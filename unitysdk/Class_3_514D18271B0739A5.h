#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StartTarotBookTalk; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_514D18271B0739A5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x114EF6E0)
#define CLASS_3_514D18271B0739A5__CTOR_OFFSET UNITYSDK_OFFSET(0x114EF6B0)

inline static constexpr unsigned int Class_3_514D18271B0739A5_TypeDefinitionIndex = 47411;

class Class_3_514D18271B0739A5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StartTarotBookTalk*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartTarotBookTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartTarotBookTalk*))((::PBYTE)hIl2Cpp + CLASS_3_514D18271B0739A5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_514D18271B0739A5_ONTASKBEGIN_OFFSET))(this);
	}
};
