#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RtStackInvisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_AD279B3D3368D4CE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x177E8D40)
#define CLASS_3_AD279B3D3368D4CE__CTOR_OFFSET UNITYSDK_OFFSET(0x177E8D10)

inline static constexpr unsigned int Class_3_AD279B3D3368D4CE_TypeDefinitionIndex = 54121;

class Class_3_AD279B3D3368D4CE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtStackInvisible*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtStackInvisible* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtStackInvisible*))((::PBYTE)hIl2Cpp + CLASS_3_AD279B3D3368D4CE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD279B3D3368D4CE_ONTASKBEGIN_OFFSET))(this);
	}
};
