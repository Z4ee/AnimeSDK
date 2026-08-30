#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_460;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AddTimelineEntityEventListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AAFDA3B8D65FDD3C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB93FF70)
#define CLASS_2_AAFDA3B8D65FDD3C_METHOD_2_6398A8B4AB096BB5_OFFSET UNITYSDK_OFFSET(0xB940230)
#define CLASS_2_AAFDA3B8D65FDD3C_METHOD_2_AE77C03C8B6D1BBB_OFFSET UNITYSDK_OFFSET(0xB940AA0)
#define CLASS_2_AAFDA3B8D65FDD3C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB93FC00)
#define CLASS_2_AAFDA3B8D65FDD3C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB93FDA0)
#define CLASS_2_AAFDA3B8D65FDD3C_TICK_OFFSET UNITYSDK_OFFSET(0xB9401D0)
#define CLASS_2_AAFDA3B8D65FDD3C__CTOR_OFFSET UNITYSDK_OFFSET(0xB93EEB0)

inline static constexpr unsigned int Class_2_AAFDA3B8D65FDD3C_TypeDefinitionIndex = 53617;

class Class_2_AAFDA3B8D65FDD3C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* BBMDICGNOLP; // 0x18
	::Class_3_07C3C4D2990C49EE* BDLDADABBHC; // 0x20
	::Class_3_07C3C4D2990C49EE* DFDAKLEGFDL; // 0x28
	::Class_3_07C3C4D2990C49EE* HEFACODLOHE; // 0x30
	::Class_3_07C3C4D2990C49EE* DNIBLEJCMKJ; // 0x38
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* CLAFGBALAOO; // 0x40
	::Class_3_07C3C4D2990C49EE* OIEJOGELMKI; // 0x48
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x50
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* JFBNOHHPLAN; // 0x58
	::Class_3_07C3C4D2990C49EE* LBGFLJPJFHH; // 0x60
	::RPG::GameCore::AddTimelineEntityEventListener* OFKGLJOAMLD; // 0x68
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* BIMKCKAPHPH; // 0x70
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* JHDCJDMNKKL; // 0x78
	::Class_3_07C3C4D2990C49EE* NCDIMILAFML; // 0x80
	::System::UInt32 PIBNIOEBKJI; // 0x88

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

	::System::Void Method_2_6398A8B4AB096BB5(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_AAFDA3B8D65FDD3C_METHOD_2_6398A8B4AB096BB5_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE77C03C8B6D1BBB(::Class_3_07C3C4D2990C49EE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_2_AAFDA3B8D65FDD3C_METHOD_2_AE77C03C8B6D1BBB_OFFSET))(this, a1);
	}
};
