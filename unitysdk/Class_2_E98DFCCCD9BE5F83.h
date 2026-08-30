#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CaptureLocalPlayer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E98DFCCCD9BE5F83_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156AA000)
#define CLASS_2_E98DFCCCD9BE5F83_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156AA040)
#define CLASS_2_E98DFCCCD9BE5F83_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x156AA1A0)
#define CLASS_2_E98DFCCCD9BE5F83_TICK_OFFSET UNITYSDK_OFFSET(0x156AA1F0)
#define CLASS_2_E98DFCCCD9BE5F83__CTOR_OFFSET UNITYSDK_OFFSET(0x156A9FF0)

inline static constexpr unsigned int Class_2_E98DFCCCD9BE5F83_TypeDefinitionIndex = 52909;

class Class_2_E98DFCCCD9BE5F83 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CaptureLocalPlayer* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

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
