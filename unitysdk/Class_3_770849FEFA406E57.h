#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_4.h"
#include "unitysdk/RPG/GameCore/ScreenTransferReason.h"

class Class_1_5F51D4049EA87B7B;
class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class Map; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PerformanceTransition; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }
namespace System { class Object; }

#define CLASS_3_770849FEFA406E57_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1587D8A0)
#define CLASS_3_770849FEFA406E57_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x1587ED00)
#define CLASS_3_770849FEFA406E57_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x1587E7D0)
#define CLASS_3_770849FEFA406E57_METHOD_3_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x1587DC10)
#define CLASS_3_770849FEFA406E57_METHOD_3_2ABD7721AC148AA7_OFFSET UNITYSDK_OFFSET(0x1587F770)
#define CLASS_3_770849FEFA406E57_METHOD_3_627594C270CB38B4_OFFSET UNITYSDK_OFFSET(0x1587F430)
#define CLASS_3_770849FEFA406E57_METHOD_3_6490EF4800D64F98_OFFSET UNITYSDK_OFFSET(0x1587F9C0)
#define CLASS_3_770849FEFA406E57_METHOD_3_8AC9809172ED3DBF_OFFSET UNITYSDK_OFFSET(0x1587EEE0)
#define CLASS_3_770849FEFA406E57_METHOD_3_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x1587D5A0)
#define CLASS_3_770849FEFA406E57_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1587F570)
#define CLASS_3_770849FEFA406E57_METHOD_3_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1587F2B0)
#define CLASS_3_770849FEFA406E57_METHOD_3_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x1587F640)
#define CLASS_3_770849FEFA406E57_METHOD_3_A88B36294D55B85C_OFFSET UNITYSDK_OFFSET(0x1587E3E0)
#define CLASS_3_770849FEFA406E57_METHOD_3_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x1587DB10)
#define CLASS_3_770849FEFA406E57_METHOD_3_F15EECE317327525_OFFSET UNITYSDK_OFFSET(0x1587D550)
#define CLASS_3_770849FEFA406E57_METHOD_3_F2ACC5B1FFC4D55A_OFFSET UNITYSDK_OFFSET(0x1587ECC0)
#define CLASS_3_770849FEFA406E57_METHOD_3_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1587F6A0)
#define CLASS_3_770849FEFA406E57_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1587F050)
#define CLASS_3_770849FEFA406E57_ONSKIP_OFFSET UNITYSDK_OFFSET(0x1587ED10)
#define CLASS_3_770849FEFA406E57_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1587E030)
#define CLASS_3_770849FEFA406E57_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1587EA90)
#define CLASS_3_770849FEFA406E57_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x1587EBF0)
#define CLASS_3_770849FEFA406E57_TICK_OFFSET UNITYSDK_OFFSET(0x1587DE00)
#define CLASS_3_770849FEFA406E57__CTOR_OFFSET UNITYSDK_OFFSET(0x1587C870)

inline static constexpr unsigned int Class_3_770849FEFA406E57_TypeDefinitionIndex = 50667;

class Class_3_770849FEFA406E57 : public ::Class_2_A48F3719AA1CF200_4
{
public:
	::RPG::GameCore::TaskContext* Field_3_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_3_1; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_3_2; // 0x28
	::RPG::GameCore::PerformanceTransition* Field_3_3; // 0x30
	::RPG::Client::Promises::Promise* Field_3_4; // 0x38
	::Class_3_07C3C4D2990C49EE* Field_3_5; // 0x40
	::System::Boolean Field_3_6; // 0x48
	::System::Boolean Field_3_7; // 0x49
	::System::Boolean Field_3_8; // 0x4A
	::RPG::GameCore::ScreenTransferReason Field_3_9; // 0x4C
	::System::Int32 Field_3_10; // 0x50
	::System::UInt32 Field_3_11; // 0x54

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PerformanceTransition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PerformanceTransition*))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_ONTASKRESET_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_SETNEXTTASK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskContext* Method_3_F2ACC5B1FFC4D55A()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_METHOD_3_F2ACC5B1FFC4D55A_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_ONSKIP_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_A88B36294D55B85C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_METHOD_3_A88B36294D55B85C_OFFSET))(this);
	}

	::System::Void Method_3_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_METHOD_3_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_METHOD_3_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_3_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_METHOD_3_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_3_2ABD7721AC148AA7(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_METHOD_3_2ABD7721AC148AA7_OFFSET))(this, a1);
	}

	::System::Void Method_3_8AC9809172ED3DBF(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_METHOD_3_8AC9809172ED3DBF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_627594C270CB38B4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_METHOD_3_627594C270CB38B4_OFFSET))(this, a1);
	}

	::RPG::GameCore::ScreenTransferReason Method_3_F15EECE317327525(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::ScreenTransferReason(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_METHOD_3_F15EECE317327525_OFFSET))(this, a1);
	}

	::System::Void Method_3_6490EF4800D64F98(::RPG::Client::Map* a1, ::RPG::GameCore::DynamicFloat* a2, ::RPG::GameCore::DynamicFloat* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Map*, ::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_METHOD_3_6490EF4800D64F98_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_METHOD_3_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_3_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_METHOD_3_907E24F785836BA0_OFFSET))(this);
	}

	::System::Void Method_3_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_METHOD_3_E3DE31A03057E055_OFFSET))(this);
	}
};
