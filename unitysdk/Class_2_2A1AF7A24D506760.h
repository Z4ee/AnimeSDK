#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TryShowSpaceZooNewCatDialog; }
namespace System { class Object; }

#define CLASS_2_2A1AF7A24D506760_DISPOSE_OFFSET UNITYSDK_OFFSET(0x119172E0)
#define CLASS_2_2A1AF7A24D506760_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x119174E0)
#define CLASS_2_2A1AF7A24D506760_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11917380)
#define CLASS_2_2A1AF7A24D506760_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11917430)
#define CLASS_2_2A1AF7A24D506760_TICK_OFFSET UNITYSDK_OFFSET(0x11917480)
#define CLASS_2_2A1AF7A24D506760__CTOR_OFFSET UNITYSDK_OFFSET(0x119172D0)

inline static constexpr unsigned int Class_2_2A1AF7A24D506760_TypeDefinitionIndex = 54219;

class Class_2_2A1AF7A24D506760 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::TryShowSpaceZooNewCatDialog* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TryShowSpaceZooNewCatDialog* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TryShowSpaceZooNewCatDialog*))((::PBYTE)hIl2Cpp + CLASS_2_2A1AF7A24D506760__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A1AF7A24D506760_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A1AF7A24D506760_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A1AF7A24D506760_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2A1AF7A24D506760_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2A1AF7A24D506760_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}
};
