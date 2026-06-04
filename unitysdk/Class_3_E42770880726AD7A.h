#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_9D4DD2F4235F8658;
namespace RPG::GameCore { class ST_Side_AttachAIStatus; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E42770880726AD7A_METHOD_3_24BDA33538434DCF_OFFSET UNITYSDK_OFFSET(0x144AF550)
#define CLASS_3_E42770880726AD7A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x144AF2F0)
#define CLASS_3_E42770880726AD7A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x144AF340)
#define CLASS_3_E42770880726AD7A_TICK_OFFSET UNITYSDK_OFFSET(0x144AF6E0)
#define CLASS_3_E42770880726AD7A__CTOR_OFFSET UNITYSDK_OFFSET(0x144AF290)
#define CLASS_3_E42770880726AD7A___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x144AF8F0)

inline static constexpr unsigned int Class_3_E42770880726AD7A_TypeDefinitionIndex = 48834;

class Class_3_E42770880726AD7A : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_AttachAIStatus*>
{
public:
	::Class_2_9D4DD2F4235F8658* Field_3_0; // 0x28
	::System::Boolean Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_AttachAIStatus* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_AttachAIStatus*))((::PBYTE)hIl2Cpp + CLASS_3_E42770880726AD7A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E42770880726AD7A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E42770880726AD7A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E42770880726AD7A_TICK_OFFSET))(this, a1);
	}

	::System::UInt32 Method_3_24BDA33538434DCF()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E42770880726AD7A_METHOD_3_24BDA33538434DCF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E42770880726AD7A___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
