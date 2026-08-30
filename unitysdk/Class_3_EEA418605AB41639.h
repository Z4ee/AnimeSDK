#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_E7A54F49C408A228;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EEA418605AB41639_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB99D8C0)
#define CLASS_3_EEA418605AB41639_TICK_OFFSET UNITYSDK_OFFSET(0xB99DB50)
#define CLASS_3_EEA418605AB41639__CTOR_OFFSET UNITYSDK_OFFSET(0xB99D890)
#define CLASS_3_EEA418605AB41639__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xB99DBB0)

inline static constexpr unsigned int Class_3_EEA418605AB41639_TypeDefinitionIndex = 55310;

class Class_3_EEA418605AB41639 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_E7A54F49C408A228*>
{
public:
	::System::Boolean DDLPKMOBHAO; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_E7A54F49C408A228* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_E7A54F49C408A228*))((::PBYTE)hIl2Cpp + CLASS_3_EEA418605AB41639__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EEA418605AB41639_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EEA418605AB41639_TICK_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EEA418605AB41639__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}
};
