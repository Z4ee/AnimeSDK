#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_6.h"
#include "unitysdk/RPG/GameCore/ScreenTransferReason.h"

class Class_1_5F51D4049EA87B7B;
class Class_3_5775A4FEC79026BC;
namespace RPG::Client { class Map; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PerformanceTransition; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }
namespace System { class Object; }

#define CLASS_3_635476360DE473B3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10971830)
#define CLASS_3_635476360DE473B3_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x10972090)
#define CLASS_3_635476360DE473B3_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x10973820)
#define CLASS_3_635476360DE473B3_METHOD_3_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x10973590)
#define CLASS_3_635476360DE473B3_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x109728C0)
#define CLASS_3_635476360DE473B3_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10972F20)
#define CLASS_3_635476360DE473B3_METHOD_3_82B2F7CF908F696B_OFFSET UNITYSDK_OFFSET(0x10972DA0)
#define CLASS_3_635476360DE473B3_METHOD_3_9641EAD9333FB8D3_OFFSET UNITYSDK_OFFSET(0x109732C0)
#define CLASS_3_635476360DE473B3_METHOD_3_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x10973420)
#define CLASS_3_635476360DE473B3_METHOD_3_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x10973020)
#define CLASS_3_635476360DE473B3_METHOD_3_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x10972FC0)
#define CLASS_3_635476360DE473B3_METHOD_3_A42EAC97F065C7B5_OFFSET UNITYSDK_OFFSET(0x109730C0)
#define CLASS_3_635476360DE473B3_METHOD_3_D56DAA96379ECAB9_OFFSET UNITYSDK_OFFSET(0x10972A10)
#define CLASS_3_635476360DE473B3_METHOD_3_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x109724B0)
#define CLASS_3_635476360DE473B3_METHOD_3_DE069143E3F554D6_OFFSET UNITYSDK_OFFSET(0x10972730)
#define CLASS_3_635476360DE473B3_METHOD_3_F15EECE317327525_OFFSET UNITYSDK_OFFSET(0x10973270)
#define CLASS_3_635476360DE473B3_METHOD_3_F2ACC5B1FFC4D55A_OFFSET UNITYSDK_OFFSET(0x10972050)
#define CLASS_3_635476360DE473B3_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x10972250)
#define CLASS_3_635476360DE473B3_ONSKIP_OFFSET UNITYSDK_OFFSET(0x109720A0)
#define CLASS_3_635476360DE473B3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10971BC0)
#define CLASS_3_635476360DE473B3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10971E50)
#define CLASS_3_635476360DE473B3_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x10971F90)
#define CLASS_3_635476360DE473B3_TICK_OFFSET UNITYSDK_OFFSET(0x10971990)
#define CLASS_3_635476360DE473B3__CTOR_OFFSET UNITYSDK_OFFSET(0x10970E60)

inline static constexpr unsigned int Class_3_635476360DE473B3_TypeDefinitionIndex = 42961;

class Class_3_635476360DE473B3 : public ::Class_2_A48F3719AA1CF200_6
{
public:
	::Class_3_5775A4FEC79026BC* Field_3_3; // 0x18
	::RPG::Client::Promises::Promise* Field_3_6; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_3_9; // 0x28
	::Class_3_5775A4FEC79026BC* Field_3_4; // 0x30
	::RPG::GameCore::TaskContext* Field_3_1; // 0x38
	::RPG::GameCore::PerformanceTransition* Field_3_2; // 0x40
	::System::UInt32 Field_3_11; // 0x48
	::System::Int32 Field_3_0; // 0x4C
	::RPG::GameCore::ScreenTransferReason Field_3_7; // 0x50
	::System::Boolean Field_3_10; // 0x54
	::System::Boolean Field_3_8; // 0x55
	::System::Boolean Field_3_5; // 0x56

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PerformanceTransition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PerformanceTransition*))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3_ONTASKRESET_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3_SETNEXTTASK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskContext* Method_3_F2ACC5B1FFC4D55A()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3_METHOD_3_F2ACC5B1FFC4D55A_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3_ONSKIP_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Method_3_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3_METHOD_3_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void Method_3_D56DAA96379ECAB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3_METHOD_3_D56DAA96379ECAB9_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3_METHOD_3_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_3_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3_METHOD_3_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_A42EAC97F065C7B5(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3_METHOD_3_A42EAC97F065C7B5_OFFSET))(this, a1);
	}

	::System::Void Method_3_DE069143E3F554D6(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3_METHOD_3_DE069143E3F554D6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_82B2F7CF908F696B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3_METHOD_3_82B2F7CF908F696B_OFFSET))(this, a1);
	}

	::RPG::GameCore::ScreenTransferReason Method_3_F15EECE317327525(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::ScreenTransferReason(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3_METHOD_3_F15EECE317327525_OFFSET))(this, a1);
	}

	::System::Void Method_3_9641EAD9333FB8D3(::RPG::Client::Map* a1, ::RPG::GameCore::DynamicFloat* a2, ::RPG::GameCore::DynamicFloat* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Map*, ::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3_METHOD_3_9641EAD9333FB8D3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3_METHOD_3_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_3_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3_METHOD_3_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_3_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_635476360DE473B3_METHOD_3_30D1209326FA87FC_OFFSET))(this);
	}
};
