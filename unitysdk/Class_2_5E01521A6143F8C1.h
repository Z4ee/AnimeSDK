#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_382;
class Class_2_C14C025AFA60DCA2;
namespace RPG::GameCore { class AdvNpcGuardAlertDeviceActive; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5E01521A6143F8C1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1250CF90)
#define CLASS_2_5E01521A6143F8C1_METHOD_2_01109DD29CB4D216_OFFSET UNITYSDK_OFFSET(0x1250D6F0)
#define CLASS_2_5E01521A6143F8C1_METHOD_2_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0x1250D050)
#define CLASS_2_5E01521A6143F8C1_METHOD_2_5F3AE37087DCC4E1_OFFSET UNITYSDK_OFFSET(0x1250D3F0)
#define CLASS_2_5E01521A6143F8C1_METHOD_2_D0BD1377F2594D33_1_OFFSET UNITYSDK_OFFSET(0x1250D630)
#define CLASS_2_5E01521A6143F8C1_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1250D8A0)
#define CLASS_2_5E01521A6143F8C1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1250D580)
#define CLASS_2_5E01521A6143F8C1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1250D7D0)
#define CLASS_2_5E01521A6143F8C1_TICK_OFFSET UNITYSDK_OFFSET(0x1250D130)
#define CLASS_2_5E01521A6143F8C1__CTOR_OFFSET UNITYSDK_OFFSET(0x1250CDD0)

inline static constexpr unsigned int Class_2_5E01521A6143F8C1_TypeDefinitionIndex = 48424;

class Class_2_5E01521A6143F8C1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvNpcGuardAlertDeviceActive* Field_2_2; // 0x18
	::Class_2_C14C025AFA60DCA2* Field_2_7; // 0x20
	::RPG::GameCore::NPCComponent* Field_2_6; // 0x28
	::RPG::GameCore::TaskContext* Field_2_1; // 0x30
	::Class_1_5F51D4049EA87B7B* Field_2_5; // 0x38
	::Class_1_5F51D4049EA87B7B* Field_2_4; // 0x40
	::Class_1_5F51D4049EA87B7B* Field_2_3; // 0x48
	::System::UInt32 Field_2_0; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcGuardAlertDeviceActive* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcGuardAlertDeviceActive*))((::PBYTE)hIl2Cpp + CLASS_2_5E01521A6143F8C1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E01521A6143F8C1_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5E01521A6143F8C1_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_5F3AE37087DCC4E1(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_5E01521A6143F8C1_METHOD_2_5F3AE37087DCC4E1_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E01521A6143F8C1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E01521A6143F8C1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E01521A6143F8C1_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E01521A6143F8C1_METHOD_2_D0BD1377F2594D33_1_OFFSET))(this);
	}

	::System::Void Method_2_01109DD29CB4D216()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E01521A6143F8C1_METHOD_2_01109DD29CB4D216_OFFSET))(this);
	}

	::System::Void Method_2_3E522F4B992303E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E01521A6143F8C1_METHOD_2_3E522F4B992303E1_OFFSET))(this);
	}
};
