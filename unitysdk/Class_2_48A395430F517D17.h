#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7A3194024C7D2DEC.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_48A395430F517D17_METHOD_2_82E992240300FB30_1_OFFSET UNITYSDK_OFFSET(0xA685800)
#define CLASS_2_48A395430F517D17_METHOD_2_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0xA6855F0)
#define CLASS_2_48A395430F517D17_METHOD_2_867F85CA133E06EB_OFFSET UNITYSDK_OFFSET(0xA6857A0)
#define CLASS_2_48A395430F517D17__CTOR_OFFSET UNITYSDK_OFFSET(0xA6855D0)

inline static constexpr unsigned int Class_2_48A395430F517D17_TypeDefinitionIndex = 56172;

class Class_2_48A395430F517D17 : public ::Class_1_7A3194024C7D2DEC
{
public:
	::System::Single Field_2_0; // 0x30
	::System::Single Field_2_1; // 0x34

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
