#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_460;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AddTimelineEntityEventListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AAFDA3B8D65FDD3C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x195C7F30)
#define CLASS_2_AAFDA3B8D65FDD3C_METHOD_2_6398A8B4AB096BB5_OFFSET UNITYSDK_OFFSET(0x195C81F0)
#define CLASS_2_AAFDA3B8D65FDD3C_METHOD_2_AE77C03C8B6D1BBB_OFFSET UNITYSDK_OFFSET(0x195C8A60)
#define CLASS_2_AAFDA3B8D65FDD3C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x195C7BC0)
#define CLASS_2_AAFDA3B8D65FDD3C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x195C7D60)
#define CLASS_2_AAFDA3B8D65FDD3C_TICK_OFFSET UNITYSDK_OFFSET(0x195C8190)
#define CLASS_2_AAFDA3B8D65FDD3C__CTOR_OFFSET UNITYSDK_OFFSET(0x195C6E70)

inline static constexpr unsigned int Class_2_AAFDA3B8D65FDD3C_TypeDefinitionIndex = 53617;

class Class_2_AAFDA3B8D65FDD3C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* JHDCJDMNKKL; // 0x18
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* BIMKCKAPHPH; // 0x20
	::Class_3_07C3C4D2990C49EE* LBGFLJPJFHH; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
	::Class_3_07C3C4D2990C49EE* HEFACODLOHE; // 0x38
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* CLAFGBALAOO; // 0x40
	::Class_3_07C3C4D2990C49EE* DFDAKLEGFDL; // 0x48
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* JFBNOHHPLAN; // 0x50
	::Class_3_07C3C4D2990C49EE* DNIBLEJCMKJ; // 0x58
	::Class_3_07C3C4D2990C49EE* NCDIMILAFML; // 0x60
	::Class_3_07C3C4D2990C49EE* OIEJOGELMKI; // 0x68
	::Class_3_07C3C4D2990C49EE* BBMDICGNOLP; // 0x70
	::RPG::GameCore::AddTimelineEntityEventListener* OFKGLJOAMLD; // 0x78
	::Class_3_07C3C4D2990C49EE* BDLDADABBHC; // 0x80
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
