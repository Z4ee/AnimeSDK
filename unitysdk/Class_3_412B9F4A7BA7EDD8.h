#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DefineDynamicString; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_412B9F4A7BA7EDD8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA1DC520)
#define CLASS_3_412B9F4A7BA7EDD8__CTOR_OFFSET UNITYSDK_OFFSET(0xA1DC4F0)

inline static constexpr unsigned int Class_3_412B9F4A7BA7EDD8_TypeDefinitionIndex = 44028;

class Class_3_412B9F4A7BA7EDD8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DefineDynamicString*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DefineDynamicString* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DefineDynamicString*))((::PBYTE)hIl2Cpp + CLASS_3_412B9F4A7BA7EDD8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_412B9F4A7BA7EDD8_ONTASKBEGIN_OFFSET))(this);
	}
};
