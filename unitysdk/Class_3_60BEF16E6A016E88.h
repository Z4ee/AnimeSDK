#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BB5C2228DBF7AE1F.h"

namespace RPG::GameCore { class GridFightPrepTutorialOP; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_60BEF16E6A016E88_METHOD_3_94F7C31F3BFBD430_OFFSET UNITYSDK_OFFSET(0x163D8EF0)
#define CLASS_3_60BEF16E6A016E88_METHOD_3_AC96313FF120BAE7_OFFSET UNITYSDK_OFFSET(0x163D8AE0)
#define CLASS_3_60BEF16E6A016E88_METHOD_3_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0x163D8B40)
#define CLASS_3_60BEF16E6A016E88_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163D8C00)
#define CLASS_3_60BEF16E6A016E88_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x163D8E40)
#define CLASS_3_60BEF16E6A016E88__CTOR_OFFSET UNITYSDK_OFFSET(0x163D8AD0)

inline static constexpr unsigned int Class_3_60BEF16E6A016E88_TypeDefinitionIndex = 53800;

class Class_3_60BEF16E6A016E88 : public ::Class_2_BB5C2228DBF7AE1F
{
public:
	::RPG::GameCore::GridFightPrepTutorialOP* IGHAHBNLIJA; // 0x28
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightPrepTutorialOP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightPrepTutorialOP*))((::PBYTE)hIl2Cpp + CLASS_3_60BEF16E6A016E88__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AC96313FF120BAE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60BEF16E6A016E88_METHOD_3_AC96313FF120BAE7_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60BEF16E6A016E88_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60BEF16E6A016E88_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_94F7C31F3BFBD430(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_60BEF16E6A016E88_METHOD_3_94F7C31F3BFBD430_OFFSET))(this, a1);
	}

	::System::Void Method_3_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60BEF16E6A016E88_METHOD_3_F944CC0CE8B3E57A_OFFSET))(this);
	}
};
