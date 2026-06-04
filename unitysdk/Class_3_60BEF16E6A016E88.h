#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7134DCF9ECF7587A.h"

namespace RPG::GameCore { class GridFightPrepTutorialOP; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_60BEF16E6A016E88_METHOD_3_2C8484BE9A26CCD5_OFFSET UNITYSDK_OFFSET(0xAEE2C30)
#define CLASS_3_60BEF16E6A016E88_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAEE3100)
#define CLASS_3_60BEF16E6A016E88_METHOD_3_94F7C31F3BFBD430_OFFSET UNITYSDK_OFFSET(0xAEE3040)
#define CLASS_3_60BEF16E6A016E88_METHOD_3_AF929C906141C76C_OFFSET UNITYSDK_OFFSET(0xAEE2BD0)
#define CLASS_3_60BEF16E6A016E88_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAEE2CF0)
#define CLASS_3_60BEF16E6A016E88_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAEE2F90)
#define CLASS_3_60BEF16E6A016E88__CTOR_OFFSET UNITYSDK_OFFSET(0xAEE2BC0)
#define CLASS_3_60BEF16E6A016E88___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAEE3160)

inline static constexpr unsigned int Class_3_60BEF16E6A016E88_TypeDefinitionIndex = 50034;

class Class_3_60BEF16E6A016E88 : public ::Class_2_7134DCF9ECF7587A
{
public:
	::RPG::GameCore::TaskContext* Field_3_0; // 0x28
	::RPG::GameCore::GridFightPrepTutorialOP* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightPrepTutorialOP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightPrepTutorialOP*))((::PBYTE)hIl2Cpp + CLASS_3_60BEF16E6A016E88__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AF929C906141C76C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60BEF16E6A016E88_METHOD_3_AF929C906141C76C_OFFSET))(this);
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

	::System::Void Method_3_2C8484BE9A26CCD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60BEF16E6A016E88_METHOD_3_2C8484BE9A26CCD5_OFFSET))(this);
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
