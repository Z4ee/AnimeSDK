#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DecalPuzzleClear; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EC80A97CFA98847A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE4610C0)
#define CLASS_3_EC80A97CFA98847A__CTOR_OFFSET UNITYSDK_OFFSET(0xE461090)

inline static constexpr unsigned int Class_3_EC80A97CFA98847A_TypeDefinitionIndex = 42680;

class Class_3_EC80A97CFA98847A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DecalPuzzleClear*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DecalPuzzleClear* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DecalPuzzleClear*))((::PBYTE)hIl2Cpp + CLASS_3_EC80A97CFA98847A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC80A97CFA98847A_ONTASKBEGIN_OFFSET))(this);
	}
};
