#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class BattleTutorialDynamicValueParam; }
namespace RPG::GameCore { class DefineTutorialDynamicValue; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_76BBE9D8398DCD16_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC010920)
#define CLASS_3_76BBE9D8398DCD16_METHOD_3_D46492EFE8352528_OFFSET UNITYSDK_OFFSET(0xC010D20)
#define CLASS_3_76BBE9D8398DCD16_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC010960)
#define CLASS_3_76BBE9D8398DCD16_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC0110E0)
#define CLASS_3_76BBE9D8398DCD16__CTOR_OFFSET UNITYSDK_OFFSET(0xC0108F0)

inline static constexpr unsigned int Class_3_76BBE9D8398DCD16_TypeDefinitionIndex = 58217;

class Class_3_76BBE9D8398DCD16 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DefineTutorialDynamicValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DefineTutorialDynamicValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DefineTutorialDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_3_76BBE9D8398DCD16__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76BBE9D8398DCD16_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76BBE9D8398DCD16_ONTASKBEGIN_OFFSET))(this);
	}

	::System::String* Method_3_D46492EFE8352528(::RPG::GameCore::BattleTutorialDynamicValueParam* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::BattleTutorialDynamicValueParam*))((::PBYTE)hIl2Cpp + CLASS_3_76BBE9D8398DCD16_METHOD_3_D46492EFE8352528_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76BBE9D8398DCD16_ONTASKRESET_OFFSET))(this);
	}
};
