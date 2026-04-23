#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class HipplenSetAreaAnchorVisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_158D1E362F60C174_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9827E50)
#define CLASS_3_158D1E362F60C174__CTOR_OFFSET UNITYSDK_OFFSET(0x9827E20)

inline static constexpr unsigned int Class_3_158D1E362F60C174_TypeDefinitionIndex = 48264;

class Class_3_158D1E362F60C174 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HipplenSetAreaAnchorVisible*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HipplenSetAreaAnchorVisible* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HipplenSetAreaAnchorVisible*))((::PBYTE)hIl2Cpp + CLASS_3_158D1E362F60C174__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_158D1E362F60C174_ONTASKBEGIN_OFFSET))(this);
	}
};
