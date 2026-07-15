#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_4_8E56BCC8BC47354E;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_987A894960D89039_METHOD_3_634412D8B2E4DF6D_OFFSET UNITYSDK_OFFSET(0x186ABE30)
#define CLASS_3_987A894960D89039_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x186ABDC0)
#define CLASS_3_987A894960D89039_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x186AC100)
#define CLASS_3_987A894960D89039__CTOR_OFFSET UNITYSDK_OFFSET(0x186ABCF0)

inline static constexpr unsigned int Class_3_987A894960D89039_TypeDefinitionIndex = 51175;

class Class_3_987A894960D89039 : public ::RPG::GameCore::ST_Task_1<::Class_4_8E56BCC8BC47354E*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_8E56BCC8BC47354E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_8E56BCC8BC47354E*))((::PBYTE)hIl2Cpp + CLASS_3_987A894960D89039__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_987A894960D89039_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_987A894960D89039_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_634412D8B2E4DF6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_987A894960D89039_METHOD_3_634412D8B2E4DF6D_OFFSET))(this);
	}
};
