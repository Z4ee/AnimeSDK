#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFMChannelReceiverSignalChange; }

#define CLASS_2_BE75BC27DA25D848_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118401C0)
#define CLASS_2_BE75BC27DA25D848_METHOD_2_5AFFCF6F18A4FE2B_OFFSET UNITYSDK_OFFSET(0x118403E0)
#define CLASS_2_BE75BC27DA25D848_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1183FEA0)
#define CLASS_2_BE75BC27DA25D848_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11840030)
#define CLASS_2_BE75BC27DA25D848_TICK_OFFSET UNITYSDK_OFFSET(0x11840380)
#define CLASS_2_BE75BC27DA25D848__CTOR_OFFSET UNITYSDK_OFFSET(0x1183FE20)

inline static constexpr unsigned int Class_2_BE75BC27DA25D848_TypeDefinitionIndex = 49295;

class Class_2_BE75BC27DA25D848 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_0; // 0x20
	::RPG::GameCore::WaitFMChannelReceiverSignalChange* Field_2_2; // 0x28

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

	::System::Void Method_2_5AFFCF6F18A4FE2B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BE75BC27DA25D848_METHOD_2_5AFFCF6F18A4FE2B_OFFSET))(this, a1);
	}
};
