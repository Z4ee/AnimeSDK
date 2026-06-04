#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RemoveWalkingEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CF5C308DFB082F30_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA7EFC80)
#define CLASS_3_CF5C308DFB082F30__CTOR_OFFSET UNITYSDK_OFFSET(0xA7EFC50)

inline static constexpr unsigned int Class_3_CF5C308DFB082F30_TypeDefinitionIndex = 52646;

class Class_3_CF5C308DFB082F30 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RemoveWalkingEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveWalkingEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveWalkingEffect*))((::PBYTE)hIl2Cpp + CLASS_3_CF5C308DFB082F30__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CF5C308DFB082F30_ONTASKBEGIN_OFFSET))(this);
	}
};
