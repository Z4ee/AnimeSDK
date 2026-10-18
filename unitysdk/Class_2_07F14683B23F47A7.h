#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4BA5BF6D6AE6A5EC.h"

namespace RPGTools { class MonoTimelineEffect; }
namespace System { class String; }
namespace UnityEngine { class MeshRenderer; }

#define CLASS_2_07F14683B23F47A7_METHOD_2_4717B9701102D47E_OFFSET UNITYSDK_OFFSET(0xB610090)
#define CLASS_2_07F14683B23F47A7_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xB6101A0)
#define CLASS_2_07F14683B23F47A7_METHOD_2_B387E1AED8A8F880_1_OFFSET UNITYSDK_OFFSET(0xB610310)
#define CLASS_2_07F14683B23F47A7_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0xB610150)
#define CLASS_2_07F14683B23F47A7_METHOD_2_B9B6206ACDEE66E1_OFFSET UNITYSDK_OFFSET(0xB610080)
#define CLASS_2_07F14683B23F47A7__CTOR_OFFSET UNITYSDK_OFFSET(0xB610360)

inline static constexpr unsigned int Class_2_07F14683B23F47A7_TypeDefinitionIndex = 48689;

class Class_2_07F14683B23F47A7 : public ::Class_1_4BA5BF6D6AE6A5EC
{
public:
	::UnityEngine::MeshRenderer* AEEANFPMKGM; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07F14683B23F47A7__CTOR_OFFSET))(this);
	}

	::RPGTools::MonoTimelineEffect* Method_2_B9B6206ACDEE66E1()
	{
		return ((::RPGTools::MonoTimelineEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07F14683B23F47A7_METHOD_2_B9B6206ACDEE66E1_OFFSET))(this);
	}

	::System::Void Method_2_4717B9701102D47E(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_07F14683B23F47A7_METHOD_2_4717B9701102D47E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07F14683B23F47A7_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_B387E1AED8A8F880_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07F14683B23F47A7_METHOD_2_B387E1AED8A8F880_1_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07F14683B23F47A7_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}
};
