#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RefreshFormationCenter; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7988674DD3C42F43_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC96FBA0)
#define CLASS_3_7988674DD3C42F43__CTOR_OFFSET UNITYSDK_OFFSET(0xC96FB70)

inline static constexpr unsigned int Class_3_7988674DD3C42F43_TypeDefinitionIndex = 52645;

class Class_3_7988674DD3C42F43 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RefreshFormationCenter*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RefreshFormationCenter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RefreshFormationCenter*))((::PBYTE)hIl2Cpp + CLASS_3_7988674DD3C42F43__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7988674DD3C42F43_ONTASKBEGIN_OFFSET))(this);
	}
};
