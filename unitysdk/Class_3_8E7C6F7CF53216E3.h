#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfWaiterSleep; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_8E7C6F7CF53216E3_METHOD_3_1DFB9896143A3689_OFFSET UNITYSDK_OFFSET(0xA9E5830)
#define CLASS_3_8E7C6F7CF53216E3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA9E5570)
#define CLASS_3_8E7C6F7CF53216E3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA9E56D0)
#define CLASS_3_8E7C6F7CF53216E3_TICK_OFFSET UNITYSDK_OFFSET(0xA9E5720)
#define CLASS_3_8E7C6F7CF53216E3__CTOR_OFFSET UNITYSDK_OFFSET(0xA9E5540)
#define CLASS_3_8E7C6F7CF53216E3___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA9E59D0)

inline static constexpr unsigned int Class_3_8E7C6F7CF53216E3_TypeDefinitionIndex = 48787;

class Class_3_8E7C6F7CF53216E3 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfWaiterSleep*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_0; // 0x28
	::System::Single Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfWaiterSleep* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfWaiterSleep*))((::PBYTE)hIl2Cpp + CLASS_3_8E7C6F7CF53216E3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E7C6F7CF53216E3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E7C6F7CF53216E3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8E7C6F7CF53216E3_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_1DFB9896143A3689(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_8E7C6F7CF53216E3_METHOD_3_1DFB9896143A3689_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8E7C6F7CF53216E3___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
