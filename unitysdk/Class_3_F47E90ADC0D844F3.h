#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetCharacterShaderSpeedEnable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F47E90ADC0D844F3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1613D120)
#define CLASS_3_F47E90ADC0D844F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1613D0F0)

inline static constexpr unsigned int Class_3_F47E90ADC0D844F3_TypeDefinitionIndex = 53480;

class Class_3_F47E90ADC0D844F3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetCharacterShaderSpeedEnable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterShaderSpeedEnable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterShaderSpeedEnable*))((::PBYTE)hIl2Cpp + CLASS_3_F47E90ADC0D844F3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F47E90ADC0D844F3_ONTASKBEGIN_OFFSET))(this);
	}
};
