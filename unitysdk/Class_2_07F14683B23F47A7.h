#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4BA5BF6D6AE6A5EC.h"

namespace RPGTools { class MonoTimelineEffect; }
namespace System { class String; }
namespace UnityEngine { class MeshRenderer; }

#define CLASS_2_07F14683B23F47A7_METHOD_2_4717B9701102D47E_OFFSET UNITYSDK_OFFSET(0xB609E00)
#define CLASS_2_07F14683B23F47A7_METHOD_2_B9B6206ACDEE66E1_OFFSET UNITYSDK_OFFSET(0xB609DF0)
#define CLASS_2_07F14683B23F47A7_METHOD_2_E11AC65AA0DC2249_1_OFFSET UNITYSDK_OFFSET(0xB60A040)
#define CLASS_2_07F14683B23F47A7_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xB609EC0)
#define CLASS_2_07F14683B23F47A7_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xB609F10)
#define CLASS_2_07F14683B23F47A7__CTOR_OFFSET UNITYSDK_OFFSET(0xB60A090)

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

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07F14683B23F47A7_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_E11AC65AA0DC2249_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07F14683B23F47A7_METHOD_2_E11AC65AA0DC2249_1_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07F14683B23F47A7_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}
};
