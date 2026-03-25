#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ModifyFateContentParam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_AD6936E76A771400_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1140BBB0)
#define CLASS_3_AD6936E76A771400__CTOR_OFFSET UNITYSDK_OFFSET(0x1140BB80)

inline static constexpr unsigned int Class_3_AD6936E76A771400_TypeDefinitionIndex = 44186;

class Class_3_AD6936E76A771400 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyFateContentParam*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyFateContentParam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyFateContentParam*))((::PBYTE)hIl2Cpp + CLASS_3_AD6936E76A771400__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD6936E76A771400_ONTASKBEGIN_OFFSET))(this);
	}
};
