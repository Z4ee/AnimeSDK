#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvSetEnchantFeatureParam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FB65074B209DC6C6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1675DC70)
#define CLASS_3_FB65074B209DC6C6__CTOR_OFFSET UNITYSDK_OFFSET(0x1675DC40)

inline static constexpr unsigned int Class_3_FB65074B209DC6C6_TypeDefinitionIndex = 52769;

class Class_3_FB65074B209DC6C6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvSetEnchantFeatureParam*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetEnchantFeatureParam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetEnchantFeatureParam*))((::PBYTE)hIl2Cpp + CLASS_3_FB65074B209DC6C6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB65074B209DC6C6_ONTASKBEGIN_OFFSET))(this);
	}
};
