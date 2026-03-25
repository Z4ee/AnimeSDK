#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CorrectionPlayerTeleportPos; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3F2D6E5339B0B947_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10B33100)
#define CLASS_3_3F2D6E5339B0B947__CTOR_OFFSET UNITYSDK_OFFSET(0x10B330D0)

inline static constexpr unsigned int Class_3_3F2D6E5339B0B947_TypeDefinitionIndex = 46812;

class Class_3_3F2D6E5339B0B947 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CorrectionPlayerTeleportPos*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CorrectionPlayerTeleportPos* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CorrectionPlayerTeleportPos*))((::PBYTE)hIl2Cpp + CLASS_3_3F2D6E5339B0B947__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F2D6E5339B0B947_ONTASKBEGIN_OFFSET))(this);
	}
};
