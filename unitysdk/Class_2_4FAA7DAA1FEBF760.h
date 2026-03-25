#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_7C65529CEEBE6D95;
namespace RPG::GameCore { class AdventureCameraLookAt; }
namespace RPG::GameCore { class AdventureCameraLookAtSimple; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_4FAA7DAA1FEBF760_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8CA6930)
#define CLASS_2_4FAA7DAA1FEBF760_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8CA6A20)
#define CLASS_2_4FAA7DAA1FEBF760_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8CA6F10)
#define CLASS_2_4FAA7DAA1FEBF760_TICK_OFFSET UNITYSDK_OFFSET(0x8CA6980)
#define CLASS_2_4FAA7DAA1FEBF760__CTOR_OFFSET UNITYSDK_OFFSET(0x8CA66B0)

inline static constexpr unsigned int Class_2_4FAA7DAA1FEBF760_TypeDefinitionIndex = 43891;

class Class_2_4FAA7DAA1FEBF760 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::AdventureCameraLookAt* Field_2_2; // 0x20
	::Class_3_7C65529CEEBE6D95* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureCameraLookAtSimple* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureCameraLookAtSimple*))((::PBYTE)hIl2Cpp + CLASS_2_4FAA7DAA1FEBF760__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FAA7DAA1FEBF760_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4FAA7DAA1FEBF760_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FAA7DAA1FEBF760_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FAA7DAA1FEBF760_ONTASKRESET_OFFSET))(this);
	}
};
