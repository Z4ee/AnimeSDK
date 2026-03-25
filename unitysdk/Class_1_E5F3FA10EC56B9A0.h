#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PropComponent; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_E5F3FA10EC56B9A0__CTOR_OFFSET UNITYSDK_OFFSET(0x8973870)

inline static constexpr unsigned int Class_1_E5F3FA10EC56B9A0_TypeDefinitionIndex = 46222;

class Class_1_E5F3FA10EC56B9A0 : public ::System::Object
{
public:
	::RPG::GameCore::PropComponent* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::PropComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_1_E5F3FA10EC56B9A0__CTOR_OFFSET))(this, a1);
	}
};
