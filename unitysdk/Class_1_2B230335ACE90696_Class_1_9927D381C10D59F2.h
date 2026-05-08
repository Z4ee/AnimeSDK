#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_392;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_2B230335ACE90696_CLASS_1_9927D381C10D59F2__CTOR_OFFSET UNITYSDK_OFFSET(0x10938D20)

inline static constexpr unsigned int Class_1_2B230335ACE90696_Class_1_9927D381C10D59F2_TypeDefinitionIndex = 78087;

class Class_1_2B230335ACE90696_Class_1_9927D381C10D59F2 : public ::System::Object
{
public:
	::UnityEngine::RectTransform* Field_1_0; // 0x10
	::System::Action_1<::UnityEngine::Vector2>* Field_1_2; // 0x18
	::Class_0_16E4307DCC419505_392* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B230335ACE90696_CLASS_1_9927D381C10D59F2__CTOR_OFFSET))(this);
	}
};
