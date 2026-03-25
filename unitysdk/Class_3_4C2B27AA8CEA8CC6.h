#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropSpecialVisionConfig; }
namespace RPG::GameCore { class SetPropSpecialVisionConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4C2B27AA8CEA8CC6_METHOD_3_6448AA1CC0AC9C99_OFFSET UNITYSDK_OFFSET(0xBECB4C0)
#define CLASS_3_4C2B27AA8CEA8CC6_METHOD_3_9573E8794B7BE991_OFFSET UNITYSDK_OFFSET(0xBECB900)
#define CLASS_3_4C2B27AA8CEA8CC6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBECB290)
#define CLASS_3_4C2B27AA8CEA8CC6__CTOR_OFFSET UNITYSDK_OFFSET(0xBECB260)

inline static constexpr unsigned int Class_3_4C2B27AA8CEA8CC6_TypeDefinitionIndex = 47265;

class Class_3_4C2B27AA8CEA8CC6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetPropSpecialVisionConfig*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetPropSpecialVisionConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetPropSpecialVisionConfig*))((::PBYTE)hIl2Cpp + CLASS_3_4C2B27AA8CEA8CC6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4C2B27AA8CEA8CC6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_9573E8794B7BE991(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::PropSpecialVisionConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::PropSpecialVisionConfig*))((::PBYTE)hIl2Cpp + CLASS_3_4C2B27AA8CEA8CC6_METHOD_3_9573E8794B7BE991_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::PropComponent* Method_3_6448AA1CC0AC9C99(::RPG::GameCore::PropSpecialVisionConfig* a1)
	{
		return ((::RPG::GameCore::PropComponent*(*)(::PVOID, ::RPG::GameCore::PropSpecialVisionConfig*))((::PBYTE)hIl2Cpp + CLASS_3_4C2B27AA8CEA8CC6_METHOD_3_6448AA1CC0AC9C99_OFFSET))(this, a1);
	}
};
