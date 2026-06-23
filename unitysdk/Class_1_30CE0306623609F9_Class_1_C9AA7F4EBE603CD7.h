#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_937E293343525B21.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_A191518F735366A8;
namespace UnityEngine { class RenderTexture; }

#define CLASS_1_30CE0306623609F9_CLASS_1_C9AA7F4EBE603CD7_METHOD_1_C8110F9A5AB27813_1_OFFSET UNITYSDK_OFFSET(0x130D1810)
#define CLASS_1_30CE0306623609F9_CLASS_1_C9AA7F4EBE603CD7_METHOD_1_C8110F9A5AB27813_2_OFFSET UNITYSDK_OFFSET(0x130D1870)
#define CLASS_1_30CE0306623609F9_CLASS_1_C9AA7F4EBE603CD7_METHOD_1_C8110F9A5AB27813_OFFSET UNITYSDK_OFFSET(0x130D17B0)
#define CLASS_1_30CE0306623609F9_CLASS_1_C9AA7F4EBE603CD7_METHOD_1_D8299432719B3C68_OFFSET UNITYSDK_OFFSET(0x130D1750)
#define CLASS_1_30CE0306623609F9_CLASS_1_C9AA7F4EBE603CD7__CTOR_OFFSET UNITYSDK_OFFSET(0x130D1740)

inline static constexpr unsigned int Class_1_30CE0306623609F9_Class_1_C9AA7F4EBE603CD7_TypeDefinitionIndex = 77854;

class Class_1_30CE0306623609F9_Class_1_C9AA7F4EBE603CD7 : public ::System::Object
{
public:
	::Class_1_A191518F735366A8* Field_1_2; // 0x10
	::UnityEngine::RenderTexture* Field_1_0; // 0x18
	::Enum_3_937E293343525B21 Field_1_1; // 0x20
	::System::Boolean Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_CLASS_1_C9AA7F4EBE603CD7__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_CLASS_1_C9AA7F4EBE603CD7_METHOD_1_D8299432719B3C68_OFFSET))(this, a1);
	}

	::System::Void Method_1_C8110F9A5AB27813()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_CLASS_1_C9AA7F4EBE603CD7_METHOD_1_C8110F9A5AB27813_OFFSET))(this);
	}

	::System::Void Method_1_C8110F9A5AB27813_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_CLASS_1_C9AA7F4EBE603CD7_METHOD_1_C8110F9A5AB27813_1_OFFSET))(this);
	}

	::System::Void Method_1_C8110F9A5AB27813_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_CLASS_1_C9AA7F4EBE603CD7_METHOD_1_C8110F9A5AB27813_2_OFFSET))(this);
	}
};
