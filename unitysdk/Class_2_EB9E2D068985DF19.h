#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_375;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRewindLoopControlStateChangeListener; }
namespace System { class Object; }

#define CLASS_2_EB9E2D068985DF19_DISPOSE_OFFSET UNITYSDK_OFFSET(0x890E470)
#define CLASS_2_EB9E2D068985DF19_METHOD_2_33C64EF100D014E2_OFFSET UNITYSDK_OFFSET(0x890E770)
#define CLASS_2_EB9E2D068985DF19_METHOD_2_EF7FF4D68C8A0DF5_OFFSET UNITYSDK_OFFSET(0x890E5C0)
#define CLASS_2_EB9E2D068985DF19_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x890E110)
#define CLASS_2_EB9E2D068985DF19_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x890E2F0)
#define CLASS_2_EB9E2D068985DF19_TICK_OFFSET UNITYSDK_OFFSET(0x890E410)
#define CLASS_2_EB9E2D068985DF19__CTOR_OFFSET UNITYSDK_OFFSET(0x890E080)

inline static constexpr unsigned int Class_2_EB9E2D068985DF19_TypeDefinitionIndex = 43235;

class Class_2_EB9E2D068985DF19 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* Field_2_3; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_3_5775A4FEC79026BC* Field_2_4; // 0x28
	::RPG::GameCore::EntityTimeRewindComponent* Field_2_2; // 0x30
	::RPG::GameCore::TimeRewindLoopControlStateChangeListener* Field_2_0; // 0x38
	::System::UInt32 Field_2_6; // 0x40
	::System::Int32 Field_2_5; // 0x44

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TimeRewindLoopControlStateChangeListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TimeRewindLoopControlStateChangeListener*))((::PBYTE)hIl2Cpp + CLASS_2_EB9E2D068985DF19__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB9E2D068985DF19_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB9E2D068985DF19_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EB9E2D068985DF19_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB9E2D068985DF19_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_EF7FF4D68C8A0DF5(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_EB9E2D068985DF19_METHOD_2_EF7FF4D68C8A0DF5_OFFSET))(this, a1);
	}

	::System::Void Method_2_33C64EF100D014E2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EB9E2D068985DF19_METHOD_2_33C64EF100D014E2_OFFSET))(this, a1);
	}
};
