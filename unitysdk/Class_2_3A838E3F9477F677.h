#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_3A838E3F9477F677_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B85980)
#define CLASS_2_3A838E3F9477F677_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x18B85A80)
#define CLASS_2_3A838E3F9477F677_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18B85530)
#define CLASS_2_3A838E3F9477F677_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18B858E0)
#define CLASS_2_3A838E3F9477F677_TICK_OFFSET UNITYSDK_OFFSET(0x18B85A20)
#define CLASS_2_3A838E3F9477F677__CTOR_OFFSET UNITYSDK_OFFSET(0x18B85520)

inline static constexpr unsigned int Class_2_3A838E3F9477F677_TypeDefinitionIndex = 58479;

class Class_2_3A838E3F9477F677 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::PropInitPuzzle* IGHAHBNLIJA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropInitPuzzle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + CLASS_2_3A838E3F9477F677__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A838E3F9477F677_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A838E3F9477F677_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A838E3F9477F677_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3A838E3F9477F677_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3A838E3F9477F677_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}
};
