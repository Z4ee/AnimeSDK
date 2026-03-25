#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CaptureLocalPlayer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E98DFCCCD9BE5F83_DISPOSE_OFFSET UNITYSDK_OFFSET(0x117A3B20)
#define CLASS_2_E98DFCCCD9BE5F83_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x117A3B60)
#define CLASS_2_E98DFCCCD9BE5F83_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x117A3CC0)
#define CLASS_2_E98DFCCCD9BE5F83_TICK_OFFSET UNITYSDK_OFFSET(0x117A3D10)
#define CLASS_2_E98DFCCCD9BE5F83__CTOR_OFFSET UNITYSDK_OFFSET(0x117A3B10)

inline static constexpr unsigned int Class_2_E98DFCCCD9BE5F83_TypeDefinitionIndex = 42625;

class Class_2_E98DFCCCD9BE5F83 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CaptureLocalPlayer* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CaptureLocalPlayer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CaptureLocalPlayer*))((::PBYTE)hIl2Cpp + CLASS_2_E98DFCCCD9BE5F83__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E98DFCCCD9BE5F83_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E98DFCCCD9BE5F83_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E98DFCCCD9BE5F83_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E98DFCCCD9BE5F83_TICK_OFFSET))(this, a1);
	}
};
