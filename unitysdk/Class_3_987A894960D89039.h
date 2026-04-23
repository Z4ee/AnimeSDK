#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_4_9444E6BEB01CEA6F;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_987A894960D89039_METHOD_3_617412338D2072E4_OFFSET UNITYSDK_OFFSET(0x127CD580)
#define CLASS_3_987A894960D89039_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x127CD510)
#define CLASS_3_987A894960D89039_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x127CD7E0)
#define CLASS_3_987A894960D89039__CTOR_OFFSET UNITYSDK_OFFSET(0x127CD440)

inline static constexpr unsigned int Class_3_987A894960D89039_TypeDefinitionIndex = 49426;

class Class_3_987A894960D89039 : public ::RPG::GameCore::ST_Task_1<::Class_4_9444E6BEB01CEA6F*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_9444E6BEB01CEA6F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_9444E6BEB01CEA6F*))((::PBYTE)hIl2Cpp + CLASS_3_987A894960D89039__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_987A894960D89039_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_987A894960D89039_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_617412338D2072E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_987A894960D89039_METHOD_3_617412338D2072E4_OFFSET))(this);
	}
};
