#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RemoveMazeBuff; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6D2614470ADC7B5C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11B016A0)
#define CLASS_3_6D2614470ADC7B5C__CTOR_OFFSET UNITYSDK_OFFSET(0x11B01670)

inline static constexpr unsigned int Class_3_6D2614470ADC7B5C_TypeDefinitionIndex = 53857;

class Class_3_6D2614470ADC7B5C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RemoveMazeBuff*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveMazeBuff* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveMazeBuff*))((::PBYTE)hIl2Cpp + CLASS_3_6D2614470ADC7B5C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D2614470ADC7B5C_ONTASKBEGIN_OFFSET))(this);
	}
};
