#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetLocalPlayerDitherAlpha; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2C8EBBC81B96F1F1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1190C370)
#define CLASS_3_2C8EBBC81B96F1F1__CTOR_OFFSET UNITYSDK_OFFSET(0x1190C340)

inline static constexpr unsigned int Class_3_2C8EBBC81B96F1F1_TypeDefinitionIndex = 47246;

class Class_3_2C8EBBC81B96F1F1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetLocalPlayerDitherAlpha*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLocalPlayerDitherAlpha* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLocalPlayerDitherAlpha*))((::PBYTE)hIl2Cpp + CLASS_3_2C8EBBC81B96F1F1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C8EBBC81B96F1F1_ONTASKBEGIN_OFFSET))(this);
	}
};
