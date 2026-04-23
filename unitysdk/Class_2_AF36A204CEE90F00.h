#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropCurveMoveArrived; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_AF36A204CEE90F00_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F46F20)
#define CLASS_2_AF36A204CEE90F00_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x8F473D0)
#define CLASS_2_AF36A204CEE90F00_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8F470F0)
#define CLASS_2_AF36A204CEE90F00_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8F47000)
#define CLASS_2_AF36A204CEE90F00_TICK_OFFSET UNITYSDK_OFFSET(0x8F472F0)
#define CLASS_2_AF36A204CEE90F00__CTOR_OFFSET UNITYSDK_OFFSET(0x8F46EA0)

inline static constexpr unsigned int Class_2_AF36A204CEE90F00_TypeDefinitionIndex = 54320;

class Class_2_AF36A204CEE90F00 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x18
	::RPG::GameCore::GameEntity* Field_2_3; // 0x20
	::System::String* Field_2_4; // 0x28
	::System::String* Field_2_7; // 0x30
	::RPG::GameCore::TaskContext* Field_2_0; // 0x38
	::RPG::GameCore::WaitPropCurveMoveArrived* Field_2_1; // 0x40
	::System::UInt32 Field_2_5; // 0x48
	::System::UInt32 Field_2_6; // 0x4C

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

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF36A204CEE90F00_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}
};
