#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_A3109D56EC4F7A5C_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA714E0)
#define CLASS_1_A3109D56EC4F7A5C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA71530)

inline static constexpr unsigned int Class_1_A3109D56EC4F7A5C_TypeDefinitionIndex = 42108;

class Class_1_A3109D56EC4F7A5C : public ::System::Object
{
public:
	::UnityEngine::Transform* HFLDHJHJNCF; // 0x10
	::System::String* FLCPMEIBBKI; // 0x18
	::System::Single KIPAGNCANAJ; // 0x20
	::System::Int32 KLICCNFOKEO; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3109D56EC4F7A5C__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3109D56EC4F7A5C_CLEAR_OFFSET))(this);
	}
};
