#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_401;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AddTimelineEntityEventListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AAFDA3B8D65FDD3C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA623CF0)
#define CLASS_2_AAFDA3B8D65FDD3C_METHOD_2_6398A8B4AB096BB5_OFFSET UNITYSDK_OFFSET(0xA623F10)
#define CLASS_2_AAFDA3B8D65FDD3C_METHOD_2_AE77C03C8B6D1BBB_OFFSET UNITYSDK_OFFSET(0xA624780)
#define CLASS_2_AAFDA3B8D65FDD3C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA623980)
#define CLASS_2_AAFDA3B8D65FDD3C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA623B20)
#define CLASS_2_AAFDA3B8D65FDD3C_TICK_OFFSET UNITYSDK_OFFSET(0xA623EB0)
#define CLASS_2_AAFDA3B8D65FDD3C__CTOR_OFFSET UNITYSDK_OFFSET(0xA622C30)

inline static constexpr unsigned int Class_2_AAFDA3B8D65FDD3C_TypeDefinitionIndex = 49856;

class Class_2_AAFDA3B8D65FDD3C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30
	::RPG::GameCore::TaskContext* Field_2_4; // 0x38
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* Field_2_5; // 0x40
	::Class_3_07C3C4D2990C49EE* Field_2_6; // 0x48
	::Class_3_07C3C4D2990C49EE* Field_2_7; // 0x50
	::RPG::GameCore::AddTimelineEntityEventListener* Field_2_8; // 0x58
	::Class_3_07C3C4D2990C49EE* Field_2_9; // 0x60
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* Field_2_10; // 0x68
	::Class_3_07C3C4D2990C49EE* Field_2_11; // 0x70
	::Class_3_07C3C4D2990C49EE* Field_2_12; // 0x78
	::Class_3_07C3C4D2990C49EE* Field_2_13; // 0x80
	::System::UInt32 Field_2_14; // 0x88

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddTimelineEntityEventListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddTimelineEntityEventListener*))((::PBYTE)hIl2Cpp + CLASS_2_AAFDA3B8D65FDD3C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAFDA3B8D65FDD3C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAFDA3B8D65FDD3C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAFDA3B8D65FDD3C_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AAFDA3B8D65FDD3C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_6398A8B4AB096BB5(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_AAFDA3B8D65FDD3C_METHOD_2_6398A8B4AB096BB5_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE77C03C8B6D1BBB(::Class_3_07C3C4D2990C49EE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_2_AAFDA3B8D65FDD3C_METHOD_2_AE77C03C8B6D1BBB_OFFSET))(this, a1);
	}
};
