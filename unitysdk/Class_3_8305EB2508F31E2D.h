#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetFloorCustomStringV2; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8305EB2508F31E2D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16411040)
#define CLASS_3_8305EB2508F31E2D__CTOR_OFFSET UNITYSDK_OFFSET(0x16411010)

inline static constexpr unsigned int Class_3_8305EB2508F31E2D_TypeDefinitionIndex = 53492;

class Class_3_8305EB2508F31E2D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetFloorCustomStringV2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFloorCustomStringV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFloorCustomStringV2*))((::PBYTE)hIl2Cpp + CLASS_3_8305EB2508F31E2D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8305EB2508F31E2D_ONTASKBEGIN_OFFSET))(this);
	}
};
