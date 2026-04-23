#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_E7A54F49C408A228;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EEA418605AB41639_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12ACEDC0)
#define CLASS_3_EEA418605AB41639_TICK_OFFSET UNITYSDK_OFFSET(0x12ACF040)
#define CLASS_3_EEA418605AB41639__CTOR_OFFSET UNITYSDK_OFFSET(0x12ACED90)
#define CLASS_3_EEA418605AB41639__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x12ACF0A0)
#define CLASS_3_EEA418605AB41639___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x12ACF0B0)

inline static constexpr unsigned int Class_3_EEA418605AB41639_TypeDefinitionIndex = 50801;

class Class_3_EEA418605AB41639 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_E7A54F49C408A228*>
{
public:
	::System::Boolean Field_3_0; // 0x28

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

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EEA418605AB41639___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
