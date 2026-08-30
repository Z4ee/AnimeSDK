#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFMChannelReceiverSignalChange; }

#define CLASS_2_BE75BC27DA25D848_DISPOSE_OFFSET UNITYSDK_OFFSET(0x179B0F90)
#define CLASS_2_BE75BC27DA25D848_METHOD_2_9133398E73B9D974_OFFSET UNITYSDK_OFFSET(0x179B1260)
#define CLASS_2_BE75BC27DA25D848_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x179B0BD0)
#define CLASS_2_BE75BC27DA25D848_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x179B0DB0)
#define CLASS_2_BE75BC27DA25D848_TICK_OFFSET UNITYSDK_OFFSET(0x179B1200)
#define CLASS_2_BE75BC27DA25D848__CTOR_OFFSET UNITYSDK_OFFSET(0x179B0B50)

inline static constexpr unsigned int Class_2_BE75BC27DA25D848_TypeDefinitionIndex = 53723;

class Class_2_BE75BC27DA25D848 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::WaitFMChannelReceiverSignalChange* OFKGLJOAMLD; // 0x20
	::Class_3_07C3C4D2990C49EE* ECMFFNPIHGD; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFMChannelReceiverSignalChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFMChannelReceiverSignalChange*))((::PBYTE)hIl2Cpp + CLASS_2_BE75BC27DA25D848__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE75BC27DA25D848_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE75BC27DA25D848_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE75BC27DA25D848_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BE75BC27DA25D848_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_9133398E73B9D974(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BE75BC27DA25D848_METHOD_2_9133398E73B9D974_OFFSET))(this, a1);
	}
};
