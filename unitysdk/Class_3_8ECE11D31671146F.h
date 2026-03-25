#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_0_16E4307DCC419505_400;
namespace RPG::GameCore { class SetDawnsEyeWeatherUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8ECE11D31671146F_METHOD_3_3A13219C9A054D60_OFFSET UNITYSDK_OFFSET(0x89B64C0)
#define CLASS_3_8ECE11D31671146F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x89B6460)
#define CLASS_3_8ECE11D31671146F__CTOR_OFFSET UNITYSDK_OFFSET(0x89B6430)

inline static constexpr unsigned int Class_3_8ECE11D31671146F_TypeDefinitionIndex = 44353;

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

	::Class_0_16E4307DCC419505_400* Method_3_3A13219C9A054D60()
	{
		return ((::Class_0_16E4307DCC419505_400*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8ECE11D31671146F_METHOD_3_3A13219C9A054D60_OFFSET))(this);
	}
};
