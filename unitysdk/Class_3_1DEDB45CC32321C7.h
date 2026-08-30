#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class RoadRashGameModifier_SetAttributeFixPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1DEDB45CC32321C7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x134C3370)
#define CLASS_3_1DEDB45CC32321C7_METHOD_3_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x134C31E0)
#define CLASS_3_1DEDB45CC32321C7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x134C2F60)
#define CLASS_3_1DEDB45CC32321C7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x134C3190)
#define CLASS_3_1DEDB45CC32321C7__CTOR_OFFSET UNITYSDK_OFFSET(0x134C2F30)

inline static constexpr unsigned int Class_3_1DEDB45CC32321C7_TypeDefinitionIndex = 58579;

class Class_3_1DEDB45CC32321C7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::Client::RoadRashGameModifier_SetAttributeFixPoint*>
{
public:
	::System::Boolean AMBLEJEBOIA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_SetAttributeFixPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_SetAttributeFixPoint*))((::PBYTE)hIl2Cpp + CLASS_3_1DEDB45CC32321C7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1DEDB45CC32321C7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1DEDB45CC32321C7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1DEDB45CC32321C7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_1DE6433C25680F9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1DEDB45CC32321C7_METHOD_3_1DE6433C25680F9D_OFFSET))(this);
	}
};
