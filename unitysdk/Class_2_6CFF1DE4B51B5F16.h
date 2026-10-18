#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_547;
class Class_2_F67FF7EB526BF85C;
namespace RPG::GameCore { class AdvNpcGuardAlertDeviceActive; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6CFF1DE4B51B5F16_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1FEA60)
#define CLASS_2_6CFF1DE4B51B5F16_METHOD_2_3CAD92CFB876DBF6_1_OFFSET UNITYSDK_OFFSET(0xB1FEC60)
#define CLASS_2_6CFF1DE4B51B5F16_METHOD_2_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0xB1FF680)
#define CLASS_2_6CFF1DE4B51B5F16_METHOD_2_51CFFE2AF748ECD7_1_OFFSET UNITYSDK_OFFSET(0xB1FF4F0)
#define CLASS_2_6CFF1DE4B51B5F16_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xB1FF990)
#define CLASS_2_6CFF1DE4B51B5F16_METHOD_2_AD890FF2759AE6DF_OFFSET UNITYSDK_OFFSET(0xB1FF1E0)
#define CLASS_2_6CFF1DE4B51B5F16_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1FF3E0)
#define CLASS_2_6CFF1DE4B51B5F16_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB1FF780)
#define CLASS_2_6CFF1DE4B51B5F16_TICK_OFFSET UNITYSDK_OFFSET(0xB1FED60)
#define CLASS_2_6CFF1DE4B51B5F16__CTOR_OFFSET UNITYSDK_OFFSET(0xB1FE7D0)

inline static constexpr unsigned int Class_2_6CFF1DE4B51B5F16_TypeDefinitionIndex = 52449;

class Class_2_6CFF1DE4B51B5F16 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::Class_1_5F51D4049EA87B7B* IKPCDHOGLHG; // 0x20
	::Class_1_5F51D4049EA87B7B* DDMNDKKKHJN; // 0x28
	::Class_1_5F51D4049EA87B7B* BGNOANEKMII; // 0x30
	::Class_2_F67FF7EB526BF85C* IIPADCNLMCJ; // 0x38
	::RPG::GameCore::AdvNpcGuardAlertDeviceActive* IGHAHBNLIJA; // 0x40
	::RPG::GameCore::NPCComponent* KDJMBIPEAFM; // 0x48
	::System::UInt32 PEEFHNHDBMF; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcGuardAlertDeviceActive* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcGuardAlertDeviceActive*))((::PBYTE)hIl2Cpp + CLASS_2_6CFF1DE4B51B5F16__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CFF1DE4B51B5F16_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6CFF1DE4B51B5F16_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD890FF2759AE6DF(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_6CFF1DE4B51B5F16_METHOD_2_AD890FF2759AE6DF_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CFF1DE4B51B5F16_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CFF1DE4B51B5F16_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CFF1DE4B51B5F16_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CFF1DE4B51B5F16_METHOD_2_51CFFE2AF748ECD7_1_OFFSET))(this);
	}

	::System::Void Method_2_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CFF1DE4B51B5F16_METHOD_2_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_2_3CAD92CFB876DBF6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CFF1DE4B51B5F16_METHOD_2_3CAD92CFB876DBF6_1_OFFSET))(this);
	}
};
