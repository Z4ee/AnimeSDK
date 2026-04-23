#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7134DCF9ECF7587A.h"

namespace RPG::GameCore { class GridFightPrepTutorialOP; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_60BEF16E6A016E88_METHOD_3_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0x123C0CE0)
#define CLASS_3_60BEF16E6A016E88_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x123C1170)
#define CLASS_3_60BEF16E6A016E88_METHOD_3_94F7C31F3BFBD430_OFFSET UNITYSDK_OFFSET(0x123C10B0)
#define CLASS_3_60BEF16E6A016E88_METHOD_3_B6A647C739789631_OFFSET UNITYSDK_OFFSET(0x123C0C80)
#define CLASS_3_60BEF16E6A016E88_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x123C0D70)
#define CLASS_3_60BEF16E6A016E88_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x123C1000)
#define CLASS_3_60BEF16E6A016E88__CTOR_OFFSET UNITYSDK_OFFSET(0x123C0C70)
#define CLASS_3_60BEF16E6A016E88___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x123C11D0)

inline static constexpr unsigned int Class_3_60BEF16E6A016E88_TypeDefinitionIndex = 49367;

class Class_3_60BEF16E6A016E88 : public ::Class_2_7134DCF9ECF7587A
{
public:
	::RPG::GameCore::GridFightPrepTutorialOP* Field_3_1; // 0x28
	::RPG::GameCore::TaskContext* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightPrepTutorialOP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightPrepTutorialOP*))((::PBYTE)hIl2Cpp + CLASS_3_60BEF16E6A016E88__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B6A647C739789631()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60BEF16E6A016E88_METHOD_3_B6A647C739789631_OFFSET))(this);
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

	::System::Void Method_3_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60BEF16E6A016E88_METHOD_3_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60BEF16E6A016E88_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60BEF16E6A016E88___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};
