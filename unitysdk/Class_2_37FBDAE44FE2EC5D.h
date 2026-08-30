#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlayTarotBookTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_37FBDAE44FE2EC5D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1639F540)
#define CLASS_2_37FBDAE44FE2EC5D_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x1639F600)
#define CLASS_2_37FBDAE44FE2EC5D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1639F390)
#define CLASS_2_37FBDAE44FE2EC5D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1639F490)
#define CLASS_2_37FBDAE44FE2EC5D_TICK_OFFSET UNITYSDK_OFFSET(0x1639F4E0)
#define CLASS_2_37FBDAE44FE2EC5D__CTOR_OFFSET UNITYSDK_OFFSET(0x1639F380)

inline static constexpr unsigned int Class_2_37FBDAE44FE2EC5D_TypeDefinitionIndex = 58436;

class Class_2_37FBDAE44FE2EC5D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PlayTarotBookTalk* OFKGLJOAMLD; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayTarotBookTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayTarotBookTalk*))((::PBYTE)hIl2Cpp + CLASS_2_37FBDAE44FE2EC5D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37FBDAE44FE2EC5D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37FBDAE44FE2EC5D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_37FBDAE44FE2EC5D_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37FBDAE44FE2EC5D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_37FBDAE44FE2EC5D_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}
};
