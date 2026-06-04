#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::GameCore { class CaptureNPCToCharacter; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B9FAD554C5BF3A94_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143F1320)
#define CLASS_2_B9FAD554C5BF3A94_METHOD_2_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0x143F1CC0)
#define CLASS_2_B9FAD554C5BF3A94_METHOD_2_0D771ED379BBF670_OFFSET UNITYSDK_OFFSET(0x143F15B0)
#define CLASS_2_B9FAD554C5BF3A94_METHOD_2_57D21531A2DC98EE_OFFSET UNITYSDK_OFFSET(0x143F1AE0)
#define CLASS_2_B9FAD554C5BF3A94_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x143F13E0)
#define CLASS_2_B9FAD554C5BF3A94_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x143F19C0)
#define CLASS_2_B9FAD554C5BF3A94_TICK_OFFSET UNITYSDK_OFFSET(0x143F1A80)
#define CLASS_2_B9FAD554C5BF3A94__CTOR_OFFSET UNITYSDK_OFFSET(0x143F1310)

inline static constexpr unsigned int Class_2_B9FAD554C5BF3A94_TypeDefinitionIndex = 49232;

class Class_2_B9FAD554C5BF3A94 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameWorld* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::CaptureNPCToCharacter* Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CaptureNPCToCharacter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CaptureNPCToCharacter*))((::PBYTE)hIl2Cpp + CLASS_2_B9FAD554C5BF3A94__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9FAD554C5BF3A94_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9FAD554C5BF3A94_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9FAD554C5BF3A94_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B9FAD554C5BF3A94_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_57D21531A2DC98EE(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_B9FAD554C5BF3A94_METHOD_2_57D21531A2DC98EE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0D771ED379BBF670()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9FAD554C5BF3A94_METHOD_2_0D771ED379BBF670_OFFSET))(this);
	}

	::System::Void Method_2_07280B24DFAC0CA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9FAD554C5BF3A94_METHOD_2_07280B24DFAC0CA9_OFFSET))(this);
	}
};
