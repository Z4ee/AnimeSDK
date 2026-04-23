#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_0066AF6A31824F6F_Class_1_E8200A7BE3BDDA63;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropCurveSetStartPoint; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_0066AF6A31824F6F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7C39B0)
#define CLASS_2_0066AF6A31824F6F_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xA7C4320)
#define CLASS_2_0066AF6A31824F6F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA7C3B80)
#define CLASS_2_0066AF6A31824F6F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA7C3AD0)
#define CLASS_2_0066AF6A31824F6F_TICK_OFFSET UNITYSDK_OFFSET(0xA7C42C0)
#define CLASS_2_0066AF6A31824F6F__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C39A0)

inline static constexpr unsigned int Class_2_0066AF6A31824F6F_TypeDefinitionIndex = 53786;

class Class_2_0066AF6A31824F6F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PropCurveSetStartPoint* Field_2_1; // 0x18
	::RPG::GameCore::GameEntity* Field_2_2; // 0x20
	::System::String* Field_2_3; // 0x28
	::Class_2_0066AF6A31824F6F_Class_1_E8200A7BE3BDDA63* Field_2_4; // 0x30
	::RPG::GameCore::TaskContext* Field_2_0; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropCurveSetStartPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropCurveSetStartPoint*))((::PBYTE)hIl2Cpp + CLASS_2_0066AF6A31824F6F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0066AF6A31824F6F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0066AF6A31824F6F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0066AF6A31824F6F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0066AF6A31824F6F_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0066AF6A31824F6F_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
