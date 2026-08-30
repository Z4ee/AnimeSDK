#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SelectRubikGroup; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E53B22E729E113C3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB50A6D0)
#define CLASS_3_E53B22E729E113C3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB50A710)
#define CLASS_3_E53B22E729E113C3__CTOR_OFFSET UNITYSDK_OFFSET(0xB50A6A0)

inline static constexpr unsigned int Class_3_E53B22E729E113C3_TypeDefinitionIndex = 58655;

class Class_3_E53B22E729E113C3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SelectRubikGroup*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SelectRubikGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SelectRubikGroup*))((::PBYTE)hIl2Cpp + CLASS_3_E53B22E729E113C3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E53B22E729E113C3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E53B22E729E113C3_ONTASKBEGIN_OFFSET))(this);
	}
};
