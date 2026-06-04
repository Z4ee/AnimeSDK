#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropCurveMoveArrived; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_AF36A204CEE90F00_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1385CA70)
#define CLASS_2_AF36A204CEE90F00_METHOD_2_7B12090AF6D76E60_OFFSET UNITYSDK_OFFSET(0x1385CF80)
#define CLASS_2_AF36A204CEE90F00_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1385CC80)
#define CLASS_2_AF36A204CEE90F00_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1385CB80)
#define CLASS_2_AF36A204CEE90F00_TICK_OFFSET UNITYSDK_OFFSET(0x1385CEA0)
#define CLASS_2_AF36A204CEE90F00__CTOR_OFFSET UNITYSDK_OFFSET(0x1385C9F0)

inline static constexpr unsigned int Class_2_AF36A204CEE90F00_TypeDefinitionIndex = 55047;

class Class_2_AF36A204CEE90F00 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitPropCurveMoveArrived* Field_2_0; // 0x18
	::RPG::GameCore::GameEntity* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::System::String* Field_2_3; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x38
	::System::String* Field_2_5; // 0x40
	::System::UInt32 Field_2_6; // 0x48
	::System::UInt32 Field_2_7; // 0x4C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropCurveMoveArrived* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropCurveMoveArrived*))((::PBYTE)hIl2Cpp + CLASS_2_AF36A204CEE90F00__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF36A204CEE90F00_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF36A204CEE90F00_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF36A204CEE90F00_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AF36A204CEE90F00_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B12090AF6D76E60(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF36A204CEE90F00_METHOD_2_7B12090AF6D76E60_OFFSET))(this, a1);
	}
};
