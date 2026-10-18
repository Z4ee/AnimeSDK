#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4BA5BF6D6AE6A5EC.h"

namespace RPGTools { class MonoTimelineEffect; }
namespace System { class String; }
namespace UnityEngine { class MeshRenderer; }

#define CLASS_2_75F60582405E4330_METHOD_2_0CC4BC19C602BCD0_1_OFFSET UNITYSDK_OFFSET(0x15C17430)
#define CLASS_2_75F60582405E4330_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x15C17250)
#define CLASS_2_75F60582405E4330_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x15C172A0)
#define CLASS_2_75F60582405E4330_METHOD_2_6C154E1584EB3107_OFFSET UNITYSDK_OFFSET(0x15C17160)
#define CLASS_2_75F60582405E4330_METHOD_2_B9B6206ACDEE66E1_OFFSET UNITYSDK_OFFSET(0x15C17150)
#define CLASS_2_75F60582405E4330__CTOR_OFFSET UNITYSDK_OFFSET(0x15C17480)

inline static constexpr unsigned int Class_2_75F60582405E4330_TypeDefinitionIndex = 48675;

class Class_2_75F60582405E4330 : public ::Class_1_4BA5BF6D6AE6A5EC
{
public:
	::UnityEngine::MeshRenderer* AEEANFPMKGM; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F60582405E4330__CTOR_OFFSET))(this);
	}

	::RPGTools::MonoTimelineEffect* Method_2_B9B6206ACDEE66E1()
	{
		return ((::RPGTools::MonoTimelineEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F60582405E4330_METHOD_2_B9B6206ACDEE66E1_OFFSET))(this);
	}

	::System::Void Method_2_6C154E1584EB3107(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_75F60582405E4330_METHOD_2_6C154E1584EB3107_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F60582405E4330_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_2_0CC4BC19C602BCD0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F60582405E4330_METHOD_2_0CC4BC19C602BCD0_1_OFFSET))(this);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F60582405E4330_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}
};
