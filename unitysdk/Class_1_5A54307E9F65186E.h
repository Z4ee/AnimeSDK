#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define CLASS_1_5A54307E9F65186E_METHOD_1_75128EB2502FF804_OFFSET UNITYSDK_OFFSET(0x15220650)
#define CLASS_1_5A54307E9F65186E__CTOR_OFFSET UNITYSDK_OFFSET(0x15220710)

inline static constexpr unsigned int Class_1_5A54307E9F65186E_TypeDefinitionIndex = 72426;

class Class_1_5A54307E9F65186E : public ::System::Object
{
public:
	::System::String* ECJAFCIFGNJ; // 0x10
	::System::String* CNBLKCIPEMA; // 0x18
	::System::String* JEPECKPOBNI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A54307E9F65186E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_75128EB2502FF804(::UnityEngine::Animator* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5A54307E9F65186E_METHOD_1_75128EB2502FF804_OFFSET))(this, a1, a2);
	}
};
