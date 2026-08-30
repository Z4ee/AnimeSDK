#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_A3109D56EC4F7A5C_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C4FD390)
#define CLASS_1_A3109D56EC4F7A5C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4FD3E0)

inline static constexpr unsigned int Class_1_A3109D56EC4F7A5C_TypeDefinitionIndex = 40506;

class Class_1_A3109D56EC4F7A5C : public ::System::Object
{
public:
	::UnityEngine::Transform* HFLDHJHJNCF; // 0x10
	::System::String* FLCPMEIBBKI; // 0x18
	::System::Int32 KLICCNFOKEO; // 0x20
	::System::Single KIPAGNCANAJ; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3109D56EC4F7A5C__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3109D56EC4F7A5C_CLEAR_OFFSET))(this);
	}
};
