#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IronTombNormalModeThresholdConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_C9D22B8BA5AA3474_METHOD_1_071B10FB60A932E7_OFFSET UNITYSDK_OFFSET(0xDE32680)
#define CLASS_1_C9D22B8BA5AA3474_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0xDE32890)
#define CLASS_1_C9D22B8BA5AA3474__CTOR_OFFSET UNITYSDK_OFFSET(0xDE32880)

inline static constexpr unsigned int Class_1_C9D22B8BA5AA3474_TypeDefinitionIndex = 51858;

class Class_1_C9D22B8BA5AA3474 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D22B8BA5AA3474__CTOR_OFFSET))(this);
	}

	static ::Class_1_C9D22B8BA5AA3474* Method_1_071B10FB60A932E7(::RPG::GameCore::IronTombNormalModeThresholdConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::Class_1_C9D22B8BA5AA3474*(*)(::RPG::GameCore::IronTombNormalModeThresholdConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_C9D22B8BA5AA3474_METHOD_1_071B10FB60A932E7_OFFSET))(a1, a2);
	}

	static ::Class_1_C9D22B8BA5AA3474* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_C9D22B8BA5AA3474*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9D22B8BA5AA3474_METHOD_1_C4BFBB1BE6C0430A_OFFSET))();
	}
};
