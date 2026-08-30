#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropCurveMoveArrived; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_AF36A204CEE90F00_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15643CC0)
#define CLASS_2_AF36A204CEE90F00_METHOD_2_7B12090AF6D76E60_OFFSET UNITYSDK_OFFSET(0x156441A0)
#define CLASS_2_AF36A204CEE90F00_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15643EE0)
#define CLASS_2_AF36A204CEE90F00_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15643E10)
#define CLASS_2_AF36A204CEE90F00_TICK_OFFSET UNITYSDK_OFFSET(0x156440C0)
#define CLASS_2_AF36A204CEE90F00__CTOR_OFFSET UNITYSDK_OFFSET(0x15643C40)

inline static constexpr unsigned int Class_2_AF36A204CEE90F00_TypeDefinitionIndex = 59062;

class Class_2_AF36A204CEE90F00 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x18
	::Class_3_07C3C4D2990C49EE* HFOFIODMFGB; // 0x20
	::System::String* PEEEONAMDHN; // 0x28
	::RPG::GameCore::WaitPropCurveMoveArrived* OFKGLJOAMLD; // 0x30
	::System::String* IJMGEMMNNPI; // 0x38
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x40
	::System::UInt32 MDFOOOPHGKC; // 0x48
	::System::UInt32 NNGMJFCCMAI; // 0x4C

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
