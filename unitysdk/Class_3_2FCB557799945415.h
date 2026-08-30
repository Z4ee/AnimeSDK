#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CloseTimeRewindPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2FCB557799945415_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x199F36C0)
#define CLASS_3_2FCB557799945415_ONSKIP_OFFSET UNITYSDK_OFFSET(0x199F36D0)
#define CLASS_3_2FCB557799945415_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x199F3630)
#define CLASS_3_2FCB557799945415__CTOR_OFFSET UNITYSDK_OFFSET(0x199F3600)

inline static constexpr unsigned int Class_3_2FCB557799945415_TypeDefinitionIndex = 53627;

class Class_3_2FCB557799945415 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CloseTimeRewindPage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CloseTimeRewindPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CloseTimeRewindPage*))((::PBYTE)hIl2Cpp + CLASS_3_2FCB557799945415__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FCB557799945415_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FCB557799945415_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FCB557799945415_ONSKIP_OFFSET))(this);
	}
};
