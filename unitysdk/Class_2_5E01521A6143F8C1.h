#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_401;
class Class_2_F67FF7EB526BF85C;
namespace RPG::GameCore { class AdvNpcGuardAlertDeviceActive; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5E01521A6143F8C1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143A9B20)
#define CLASS_2_5E01521A6143F8C1_METHOD_2_3C846407474D7238_OFFSET UNITYSDK_OFFSET(0x143A9FA0)
#define CLASS_2_5E01521A6143F8C1_METHOD_2_3CAD92CFB876DBF6_1_OFFSET UNITYSDK_OFFSET(0x143A9BE0)
#define CLASS_2_5E01521A6143F8C1_METHOD_2_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x143AA2B0)
#define CLASS_2_5E01521A6143F8C1_METHOD_2_D0BD1377F2594D33_1_OFFSET UNITYSDK_OFFSET(0x143AA1F0)
#define CLASS_2_5E01521A6143F8C1_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x143AA480)
#define CLASS_2_5E01521A6143F8C1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x143AA140)
#define CLASS_2_5E01521A6143F8C1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x143AA3B0)
#define CLASS_2_5E01521A6143F8C1_TICK_OFFSET UNITYSDK_OFFSET(0x143A9CE0)
#define CLASS_2_5E01521A6143F8C1__CTOR_OFFSET UNITYSDK_OFFSET(0x143A9960)

inline static constexpr unsigned int Class_2_5E01521A6143F8C1_TypeDefinitionIndex = 49050;

class Class_2_5E01521A6143F8C1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::AdvNpcGuardAlertDeviceActive* Field_2_2; // 0x28
	::Class_2_F67FF7EB526BF85C* Field_2_3; // 0x30
	::RPG::GameCore::NPCComponent* Field_2_4; // 0x38
	::Class_1_5F51D4049EA87B7B* Field_2_5; // 0x40
	::Class_1_5F51D4049EA87B7B* Field_2_6; // 0x48
	::System::UInt32 Field_2_7; // 0x50

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

	::System::Void Method_2_3C846407474D7238(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_5E01521A6143F8C1_METHOD_2_3C846407474D7238_OFFSET))(this, a1);
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

	::System::Void Method_2_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E01521A6143F8C1_METHOD_2_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_2_3CAD92CFB876DBF6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E01521A6143F8C1_METHOD_2_3CAD92CFB876DBF6_1_OFFSET))(this);
	}
};
