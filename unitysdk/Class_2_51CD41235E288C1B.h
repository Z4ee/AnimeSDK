#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_A48F3719AA1CF200_5;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayPenaconyEndmostShowPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_51CD41235E288C1B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13575C60)
#define CLASS_2_51CD41235E288C1B_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x135757A0)
#define CLASS_2_51CD41235E288C1B_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x13575D50)
#define CLASS_2_51CD41235E288C1B_METHOD_2_FD647A48096EB173_OFFSET UNITYSDK_OFFSET(0x13575A00)
#define CLASS_2_51CD41235E288C1B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13575460)
#define CLASS_2_51CD41235E288C1B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13575CA0)
#define CLASS_2_51CD41235E288C1B_TICK_OFFSET UNITYSDK_OFFSET(0x13575CF0)
#define CLASS_2_51CD41235E288C1B__CTOR_OFFSET UNITYSDK_OFFSET(0x13575450)

inline static constexpr unsigned int Class_2_51CD41235E288C1B_TypeDefinitionIndex = 49607;

class Class_2_51CD41235E288C1B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::GameEntity* Field_2_1; // 0x20
	::RPG::GameCore::PlayPenaconyEndmostShowPage* Field_2_2; // 0x28
	::Class_2_A48F3719AA1CF200_5* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayPenaconyEndmostShowPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayPenaconyEndmostShowPage*))((::PBYTE)hIl2Cpp + CLASS_2_51CD41235E288C1B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51CD41235E288C1B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51CD41235E288C1B_METHOD_2_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_2_FD647A48096EB173()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51CD41235E288C1B_METHOD_2_FD647A48096EB173_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51CD41235E288C1B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51CD41235E288C1B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_51CD41235E288C1B_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_A48F3719AA1CF200_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_5*))((::PBYTE)hIl2Cpp + CLASS_2_51CD41235E288C1B_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}
};
