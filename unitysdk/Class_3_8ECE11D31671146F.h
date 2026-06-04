#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_0_16E4307DCC419505_502;
namespace RPG::GameCore { class SetDawnsEyeWeatherUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8ECE11D31671146F_METHOD_3_CC66122D4DD594C4_OFFSET UNITYSDK_OFFSET(0x1460F870)
#define CLASS_3_8ECE11D31671146F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1460F810)
#define CLASS_3_8ECE11D31671146F__CTOR_OFFSET UNITYSDK_OFFSET(0x1460F7E0)

inline static constexpr unsigned int Class_3_8ECE11D31671146F_TypeDefinitionIndex = 51739;

class Class_3_8ECE11D31671146F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDawnsEyeWeatherUI*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDawnsEyeWeatherUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDawnsEyeWeatherUI*))((::PBYTE)hIl2Cpp + CLASS_3_8ECE11D31671146F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8ECE11D31671146F_ONTASKBEGIN_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_502* Method_3_CC66122D4DD594C4()
	{
		return ((::Class_0_16E4307DCC419505_502*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8ECE11D31671146F_METHOD_3_CC66122D4DD594C4_OFFSET))(this);
	}
};
