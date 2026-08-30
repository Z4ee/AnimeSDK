#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraNoiseChange; }

#define CLASS_2_B64C7F7E9BBDDA18_DISPOSE_OFFSET UNITYSDK_OFFSET(0x190F7DE0)
#define CLASS_2_B64C7F7E9BBDDA18_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x190F7E20)
#define CLASS_2_B64C7F7E9BBDDA18_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x190F8100)
#define CLASS_2_B64C7F7E9BBDDA18_TICK_OFFSET UNITYSDK_OFFSET(0x190F8150)
#define CLASS_2_B64C7F7E9BBDDA18__CTOR_OFFSET UNITYSDK_OFFSET(0x190F7DD0)

inline static constexpr unsigned int Class_2_B64C7F7E9BBDDA18_TypeDefinitionIndex = 55987;

class Class_2_B64C7F7E9BBDDA18 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::VCameraNoiseChange* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::VCameraNoiseChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::VCameraNoiseChange*))((::PBYTE)hIl2Cpp + CLASS_2_B64C7F7E9BBDDA18__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B64C7F7E9BBDDA18_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B64C7F7E9BBDDA18_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B64C7F7E9BBDDA18_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B64C7F7E9BBDDA18_TICK_OFFSET))(this, a1);
	}
};
