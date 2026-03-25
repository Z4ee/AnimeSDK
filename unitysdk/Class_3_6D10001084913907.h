#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvNotifyAiSpecialEvent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6D10001084913907_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8851640)
#define CLASS_3_6D10001084913907__CTOR_OFFSET UNITYSDK_OFFSET(0x8851610)

inline static constexpr unsigned int Class_3_6D10001084913907_TypeDefinitionIndex = 42461;

class Class_3_6D10001084913907 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvNotifyAiSpecialEvent*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNotifyAiSpecialEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNotifyAiSpecialEvent*))((::PBYTE)hIl2Cpp + CLASS_3_6D10001084913907__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D10001084913907_ONTASKBEGIN_OFFSET))(this);
	}
};
