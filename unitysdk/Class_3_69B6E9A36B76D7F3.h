#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetCameraXAxisByPlayerTargetAxis; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_69B6E9A36B76D7F3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14407670)
#define CLASS_3_69B6E9A36B76D7F3__CTOR_OFFSET UNITYSDK_OFFSET(0x14407640)

inline static constexpr unsigned int Class_3_69B6E9A36B76D7F3_TypeDefinitionIndex = 54682;

class Class_3_69B6E9A36B76D7F3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetCameraXAxisByPlayerTargetAxis*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCameraXAxisByPlayerTargetAxis* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCameraXAxisByPlayerTargetAxis*))((::PBYTE)hIl2Cpp + CLASS_3_69B6E9A36B76D7F3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69B6E9A36B76D7F3_ONTASKBEGIN_OFFSET))(this);
	}
};
