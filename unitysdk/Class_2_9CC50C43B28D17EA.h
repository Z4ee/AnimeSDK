#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_401;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class PropPuzzleEventListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9CC50C43B28D17EA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x138F9B40)
#define CLASS_2_9CC50C43B28D17EA_METHOD_2_6A9FC03815CA1EC0_OFFSET UNITYSDK_OFFSET(0x138FA410)
#define CLASS_2_9CC50C43B28D17EA_METHOD_2_7D602A72F2676500_OFFSET UNITYSDK_OFFSET(0x138F9C40)
#define CLASS_2_9CC50C43B28D17EA_METHOD_2_92CA7A6B76919089_1_OFFSET UNITYSDK_OFFSET(0x138FA1B0)
#define CLASS_2_9CC50C43B28D17EA_METHOD_2_92CA7A6B76919089_2_OFFSET UNITYSDK_OFFSET(0x138FA650)
#define CLASS_2_9CC50C43B28D17EA_METHOD_2_92CA7A6B76919089_OFFSET UNITYSDK_OFFSET(0x138F9F50)
#define CLASS_2_9CC50C43B28D17EA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x138F9470)
#define CLASS_2_9CC50C43B28D17EA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x138F9810)
#define CLASS_2_9CC50C43B28D17EA_TICK_OFFSET UNITYSDK_OFFSET(0x138FA8B0)
#define CLASS_2_9CC50C43B28D17EA__CTOR_OFFSET UNITYSDK_OFFSET(0x138F9230)

inline static constexpr unsigned int Class_2_9CC50C43B28D17EA_TypeDefinitionIndex = 54532;

class Class_2_9CC50C43B28D17EA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::RPG::GameCore::PropPuzzleEventListener* Field_2_3; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x38
	::Class_3_07C3C4D2990C49EE* Field_2_5; // 0x40
	::Class_3_07C3C4D2990C49EE* Field_2_6; // 0x48
	::System::Boolean Field_2_7; // 0x50
	::System::Boolean Field_2_8; // 0x51
	::System::Boolean Field_2_9; // 0x52
	::System::Boolean Field_2_10; // 0x53
	::System::Boolean Field_2_11; // 0x54

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

	::System::Void Method_2_7D602A72F2676500(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA_METHOD_2_7D602A72F2676500_OFFSET))(this, a1);
	}

	::System::Void Method_2_92CA7A6B76919089(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA_METHOD_2_92CA7A6B76919089_OFFSET))(this, a1);
	}

	::System::Void Method_2_92CA7A6B76919089_1(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA_METHOD_2_92CA7A6B76919089_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A9FC03815CA1EC0(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA_METHOD_2_6A9FC03815CA1EC0_OFFSET))(this, a1);
	}

	::System::Void Method_2_92CA7A6B76919089_2(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA_METHOD_2_92CA7A6B76919089_2_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA_TICK_OFFSET))(this, a1);
	}
};
