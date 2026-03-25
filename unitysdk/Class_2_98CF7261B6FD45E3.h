#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class ConsumeMissionItemPerformance; }
namespace RPG::GameCore { class SubMissionRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_98CF7261B6FD45E3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8736F30)
#define CLASS_2_98CF7261B6FD45E3_METHOD_2_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x8737110)
#define CLASS_2_98CF7261B6FD45E3_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x8737950)
#define CLASS_2_98CF7261B6FD45E3_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x87377D0)
#define CLASS_2_98CF7261B6FD45E3_METHOD_2_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x8737430)
#define CLASS_2_98CF7261B6FD45E3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8737030)
#define CLASS_2_98CF7261B6FD45E3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x87375B0)
#define CLASS_2_98CF7261B6FD45E3_TICK_OFFSET UNITYSDK_OFFSET(0x8737690)
#define CLASS_2_98CF7261B6FD45E3__CTOR_OFFSET UNITYSDK_OFFSET(0x8736E40)

inline static constexpr unsigned int Class_2_98CF7261B6FD45E3_TypeDefinitionIndex = 42652;

class Class_2_98CF7261B6FD45E3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	// static const ::System::String* Field_2_8; // 0x0
	::RPG::GameCore::ConsumeMissionItemPerformance* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x28
	::RPG::GameCore::SubMissionRow* Field_2_5; // 0x30
	::Class_3_5775A4FEC79026BC* Field_2_4; // 0x38
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConsumeMissionItemPerformance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConsumeMissionItemPerformance*))((::PBYTE)hIl2Cpp + CLASS_2_98CF7261B6FD45E3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CF7261B6FD45E3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CF7261B6FD45E3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CF7261B6FD45E3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_98CF7261B6FD45E3_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CF7261B6FD45E3_METHOD_2_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_98CF7261B6FD45E3_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CF7261B6FD45E3_METHOD_2_E52129E82CD2D7F8_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CF7261B6FD45E3_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}
};
