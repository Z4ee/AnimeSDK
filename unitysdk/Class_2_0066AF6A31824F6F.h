#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_0066AF6A31824F6F_Class_1_E8200A7BE3BDDA63;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropCurveSetStartPoint; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_0066AF6A31824F6F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB842620)
#define CLASS_2_0066AF6A31824F6F_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xB842FD0)
#define CLASS_2_0066AF6A31824F6F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB842800)
#define CLASS_2_0066AF6A31824F6F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB842750)
#define CLASS_2_0066AF6A31824F6F_TICK_OFFSET UNITYSDK_OFFSET(0xB842F70)
#define CLASS_2_0066AF6A31824F6F__CTOR_OFFSET UNITYSDK_OFFSET(0xB842610)

inline static constexpr unsigned int Class_2_0066AF6A31824F6F_TypeDefinitionIndex = 58466;

class Class_2_0066AF6A31824F6F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_2_0066AF6A31824F6F_Class_1_E8200A7BE3BDDA63* MBOEDFCNCJF; // 0x20
	::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x28
	::System::String* IJMGEMMNNPI; // 0x30
	::RPG::GameCore::PropCurveSetStartPoint* OFKGLJOAMLD; // 0x38

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
