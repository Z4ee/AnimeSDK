#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowRogueTalkBg; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E1403AC6C08F2DDA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFA88890)
#define CLASS_3_E1403AC6C08F2DDA__CTOR_OFFSET UNITYSDK_OFFSET(0xFA88860)

inline static constexpr unsigned int Class_3_E1403AC6C08F2DDA_TypeDefinitionIndex = 58836;

class Class_3_E1403AC6C08F2DDA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowRogueTalkBg*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowRogueTalkBg* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowRogueTalkBg*))((::PBYTE)hIl2Cpp + CLASS_3_E1403AC6C08F2DDA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E1403AC6C08F2DDA_ONTASKBEGIN_OFFSET))(this);
	}
};
