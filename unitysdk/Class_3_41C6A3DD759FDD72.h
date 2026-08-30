#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class OpenHipplenMainPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_41C6A3DD759FDD72_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AF2EDA0)
#define CLASS_3_41C6A3DD759FDD72__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF2ED70)

inline static constexpr unsigned int Class_3_41C6A3DD759FDD72_TypeDefinitionIndex = 52565;

class Class_3_41C6A3DD759FDD72 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::OpenHipplenMainPage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenHipplenMainPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenHipplenMainPage*))((::PBYTE)hIl2Cpp + CLASS_3_41C6A3DD759FDD72__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41C6A3DD759FDD72_ONTASKBEGIN_OFFSET))(this);
	}
};
