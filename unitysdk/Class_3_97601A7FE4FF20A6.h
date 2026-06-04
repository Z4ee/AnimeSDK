#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class MoveUINodeToMask; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_97601A7FE4FF20A6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13867410)
#define CLASS_3_97601A7FE4FF20A6__CTOR_OFFSET UNITYSDK_OFFSET(0x138673E0)

inline static constexpr unsigned int Class_3_97601A7FE4FF20A6_TypeDefinitionIndex = 54427;

class Class_3_97601A7FE4FF20A6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::MoveUINodeToMask*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MoveUINodeToMask* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MoveUINodeToMask*))((::PBYTE)hIl2Cpp + CLASS_3_97601A7FE4FF20A6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97601A7FE4FF20A6_ONTASKBEGIN_OFFSET))(this);
	}
};
