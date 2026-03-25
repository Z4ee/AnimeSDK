#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetAutoBlinkMaskRenderer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BA6FBFDF238A138D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10AD54A0)
#define CLASS_3_BA6FBFDF238A138D__CTOR_OFFSET UNITYSDK_OFFSET(0x10AD5470)

inline static constexpr unsigned int Class_3_BA6FBFDF238A138D_TypeDefinitionIndex = 44796;

class Class_3_BA6FBFDF238A138D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetAutoBlinkMaskRenderer*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAutoBlinkMaskRenderer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAutoBlinkMaskRenderer*))((::PBYTE)hIl2Cpp + CLASS_3_BA6FBFDF238A138D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA6FBFDF238A138D_ONTASKBEGIN_OFFSET))(this);
	}
};
