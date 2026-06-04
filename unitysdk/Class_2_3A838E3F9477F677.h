#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_3A838E3F9477F677_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1418A290)
#define CLASS_2_3A838E3F9477F677_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x1418A390)
#define CLASS_2_3A838E3F9477F677_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14189F80)
#define CLASS_2_3A838E3F9477F677_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1418A1F0)
#define CLASS_2_3A838E3F9477F677_TICK_OFFSET UNITYSDK_OFFSET(0x1418A330)
#define CLASS_2_3A838E3F9477F677__CTOR_OFFSET UNITYSDK_OFFSET(0x14189F70)

inline static constexpr unsigned int Class_2_3A838E3F9477F677_TypeDefinitionIndex = 54524;

class Class_2_3A838E3F9477F677 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PropInitPuzzle* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

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
