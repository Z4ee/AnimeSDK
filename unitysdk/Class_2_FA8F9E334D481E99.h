#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::GameCore { class PropStateChangeListenerConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_FA8F9E334D481E99_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA7D590)
#define CLASS_2_FA8F9E334D481E99_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xAA7D2B0)
#define CLASS_2_FA8F9E334D481E99_METHOD_2_D009A011D7E59617_OFFSET UNITYSDK_OFFSET(0xAA7D390)
#define CLASS_2_FA8F9E334D481E99_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAA7CCA0)
#define CLASS_2_FA8F9E334D481E99_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAA7D260)
#define CLASS_2_FA8F9E334D481E99_TICK_OFFSET UNITYSDK_OFFSET(0xAA7D600)
#define CLASS_2_FA8F9E334D481E99__CTOR_OFFSET UNITYSDK_OFFSET(0xAA7CC80)

inline static constexpr unsigned int Class_2_FA8F9E334D481E99_TypeDefinitionIndex = 54553;

class Class_2_FA8F9E334D481E99 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* Field_2_0; // 0x18
	::RPG::GameCore::PropStateChangeListenerConfig* Field_2_1; // 0x20
	::System::String* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x38
	::System::UInt32 Field_2_5; // 0x3C
	::System::UInt32 Field_2_6; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropStateChangeListenerConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropStateChangeListenerConfig*))((::PBYTE)hIl2Cpp + CLASS_2_FA8F9E334D481E99__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA8F9E334D481E99_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA8F9E334D481E99_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_D009A011D7E59617(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_FA8F9E334D481E99_METHOD_2_D009A011D7E59617_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA8F9E334D481E99_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FA8F9E334D481E99_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA8F9E334D481E99_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}
};
