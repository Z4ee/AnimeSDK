#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_5.h"
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

#define CLASS_3_770849FEFA406E57_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143CDF30)
#define CLASS_3_770849FEFA406E57_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x143CF0C0)
#define CLASS_3_770849FEFA406E57_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x143CEB90)
#define CLASS_3_770849FEFA406E57_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x143CE0C0)
#define CLASS_3_770849FEFA406E57_METHOD_3_6490EF4800D64F98_OFFSET UNITYSDK_OFFSET(0x143CFD00)
#define CLASS_3_770849FEFA406E57_METHOD_3_82B2F7CF908F696B_OFFSET UNITYSDK_OFFSET(0x143CF810)
#define CLASS_3_770849FEFA406E57_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x143CF990)
#define CLASS_3_770849FEFA406E57_METHOD_3_97D83E4CB3B11935_1_OFFSET UNITYSDK_OFFSET(0x143CE150)
#define CLASS_3_770849FEFA406E57_METHOD_3_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x143CF690)
#define CLASS_3_770849FEFA406E57_METHOD_3_9AC54F44E969EA47_OFFSET UNITYSDK_OFFSET(0x143CFB90)
#define CLASS_3_770849FEFA406E57_METHOD_3_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x143CFA60)
#define CLASS_3_770849FEFA406E57_METHOD_3_A88B36294D55B85C_OFFSET UNITYSDK_OFFSET(0x143CE7A0)
#define CLASS_3_770849FEFA406E57_METHOD_3_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x143CDBE0)
#define CLASS_3_770849FEFA406E57_METHOD_3_DE069143E3F554D6_OFFSET UNITYSDK_OFFSET(0x143CF2A0)
#define CLASS_3_770849FEFA406E57_METHOD_3_F15EECE317327525_OFFSET UNITYSDK_OFFSET(0x143CDB90)
#define CLASS_3_770849FEFA406E57_METHOD_3_F2ACC5B1FFC4D55A_OFFSET UNITYSDK_OFFSET(0x143CF080)
#define CLASS_3_770849FEFA406E57_METHOD_3_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x143CFAC0)
#define CLASS_3_770849FEFA406E57_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x143CF430)
#define CLASS_3_770849FEFA406E57_ONSKIP_OFFSET UNITYSDK_OFFSET(0x143CF0D0)
#define CLASS_3_770849FEFA406E57_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x143CE500)
#define CLASS_3_770849FEFA406E57_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x143CEE50)
#define CLASS_3_770849FEFA406E57_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x143CEFB0)
#define CLASS_3_770849FEFA406E57_TICK_OFFSET UNITYSDK_OFFSET(0x143CE2D0)
#define CLASS_3_770849FEFA406E57__CTOR_OFFSET UNITYSDK_OFFSET(0x143CCE70)

inline static constexpr unsigned int Class_3_770849FEFA406E57_TypeDefinitionIndex = 49613;

class Class_3_770849FEFA406E57 : public ::Class_2_A48F3719AA1CF200_5
{
public:
	::Class_1_5F51D4049EA87B7B* Field_3_0; // 0x18
	::RPG::GameCore::PerformanceTransition* Field_3_1; // 0x20
	::RPG::Client::Promises::Promise* Field_3_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_3_3; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_3_4; // 0x38
	::RPG::GameCore::TaskContext* Field_3_5; // 0x40
	::System::Boolean Field_3_6; // 0x48
	::System::Boolean Field_3_7; // 0x49
	::System::Boolean Field_3_8; // 0x4A
	::System::UInt32 Field_3_9; // 0x4C
	::RPG::GameCore::ScreenTransferReason Field_3_10; // 0x50
	::System::Int32 Field_3_11; // 0x54

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

	::System::Void Method_3_9AC54F44E969EA47(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_METHOD_3_9AC54F44E969EA47_OFFSET))(this, a1);
	}

	::System::Void Method_3_DE069143E3F554D6(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_METHOD_3_DE069143E3F554D6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_82B2F7CF908F696B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_METHOD_3_82B2F7CF908F696B_OFFSET))(this, a1);
	}

	::RPG::GameCore::ScreenTransferReason Method_3_F15EECE317327525(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::ScreenTransferReason(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_METHOD_3_F15EECE317327525_OFFSET))(this, a1);
	}

	::System::Void Method_3_6490EF4800D64F98(::RPG::Client::Map* a1, ::RPG::GameCore::DynamicFloat* a2, ::RPG::GameCore::DynamicFloat* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Map*, ::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_METHOD_3_6490EF4800D64F98_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_97D83E4CB3B11935_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_METHOD_3_97D83E4CB3B11935_1_OFFSET))(this);
	}

	::System::Void Method_3_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_METHOD_3_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::System::Void Method_3_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_770849FEFA406E57_METHOD_3_30D1209326FA87FC_OFFSET))(this);
	}
};
