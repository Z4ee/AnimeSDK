#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_33414E91216E4EB5.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_48A395430F517D17_METHOD_2_82E992240300FB30_1_OFFSET UNITYSDK_OFFSET(0x17A8FBB0)
#define CLASS_2_48A395430F517D17_METHOD_2_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x17A8F9A0)
#define CLASS_2_48A395430F517D17_METHOD_2_867F85CA133E06EB_OFFSET UNITYSDK_OFFSET(0x17A8FB50)
#define CLASS_2_48A395430F517D17__CTOR_OFFSET UNITYSDK_OFFSET(0x17A8F980)

inline static constexpr unsigned int Class_2_48A395430F517D17_TypeDefinitionIndex = 60214;

class Class_2_48A395430F517D17 : public ::Class_1_33414E91216E4EB5
{
public:
	::System::Single AEMPGLFOLMC; // 0x30
	::System::Single KKJNEDNFEKI; // 0x34

	::System::Void _ctor(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_48A395430F517D17__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48A395430F517D17_METHOD_2_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_2_82E992240300FB30_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48A395430F517D17_METHOD_2_82E992240300FB30_1_OFFSET))(this);
	}

	static ::System::Boolean Method_2_867F85CA133E06EB(::System::Single a1)
	{
		return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_48A395430F517D17_METHOD_2_867F85CA133E06EB_OFFSET))(a1);
	}
};
