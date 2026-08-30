#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_1_5C85280C68EBF115__CTOR_OFFSET UNITYSDK_OFFSET(0x15633FE0)

inline static constexpr unsigned int Class_1_5C85280C68EBF115_TypeDefinitionIndex = 60049;

class Class_1_5C85280C68EBF115 : public ::System::Object
{
public:
	::UnityEngine::Transform* KAMHKPALGEG; // 0x10
	::System::String* CNJCEOEHOIP; // 0x18
	::System::String* CONJJBPOJEE; // 0x20
	::UnityEngine::Animation* FOPCFKFAGPM; // 0x28
	::System::Boolean NFNOPGABILG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C85280C68EBF115__CTOR_OFFSET))(this);
	}
};
