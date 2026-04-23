#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_382;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class PropPuzzleEventListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9CC50C43B28D17EA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA52F1B0)
#define CLASS_2_9CC50C43B28D17EA_METHOD_2_6A9FC03815CA1EC0_1_OFFSET UNITYSDK_OFFSET(0xA52F7F0)
#define CLASS_2_9CC50C43B28D17EA_METHOD_2_6A9FC03815CA1EC0_2_OFFSET UNITYSDK_OFFSET(0xA52FC60)
#define CLASS_2_9CC50C43B28D17EA_METHOD_2_6A9FC03815CA1EC0_OFFSET UNITYSDK_OFFSET(0xA52F5A0)
#define CLASS_2_9CC50C43B28D17EA_METHOD_2_7D602A72F2676500_OFFSET UNITYSDK_OFFSET(0xA52F2B0)
#define CLASS_2_9CC50C43B28D17EA_METHOD_2_945F238D47794E60_OFFSET UNITYSDK_OFFSET(0xA52FA40)
#define CLASS_2_9CC50C43B28D17EA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA52EBB0)
#define CLASS_2_9CC50C43B28D17EA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA52EEE0)
#define CLASS_2_9CC50C43B28D17EA_TICK_OFFSET UNITYSDK_OFFSET(0xA52FEB0)
#define CLASS_2_9CC50C43B28D17EA__CTOR_OFFSET UNITYSDK_OFFSET(0xA52E970)

inline static constexpr unsigned int Class_2_9CC50C43B28D17EA_TypeDefinitionIndex = 53807;

class Class_2_9CC50C43B28D17EA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::PropPuzzleEventListener* Field_2_1; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x30
	::Class_3_E21F6DE9B7FA4D05* Field_2_6; // 0x38
	::Class_3_E21F6DE9B7FA4D05* Field_2_10; // 0x40
	::Class_3_E21F6DE9B7FA4D05* Field_2_8; // 0x48
	::System::Boolean Field_2_11; // 0x50
	::System::Boolean Field_2_9; // 0x51
	::System::Boolean Field_2_7; // 0x52
	::System::Boolean Field_2_3; // 0x53
	::System::Boolean Field_2_5; // 0x54

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropPuzzleEventListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropPuzzleEventListener*))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7D602A72F2676500(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA_METHOD_2_7D602A72F2676500_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A9FC03815CA1EC0(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA_METHOD_2_6A9FC03815CA1EC0_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A9FC03815CA1EC0_1(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA_METHOD_2_6A9FC03815CA1EC0_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_945F238D47794E60(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA_METHOD_2_945F238D47794E60_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A9FC03815CA1EC0_2(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA_METHOD_2_6A9FC03815CA1EC0_2_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA_TICK_OFFSET))(this, a1);
	}
};
