#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_186;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_905BC762C16B45FD_CLASS_1_9927D381C10D59F2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7D9350)

inline static constexpr unsigned int Class_1_905BC762C16B45FD_Class_1_9927D381C10D59F2_TypeDefinitionIndex = 57105;

class Class_1_905BC762C16B45FD_Class_1_9927D381C10D59F2 : public ::System::Object
{
public:
	::UnityEngine::RectTransform* Field_1_2; // 0x10
	::Class_0_16E4307DCC419505_186* Field_1_1; // 0x18
	::System::Action_1<::UnityEngine::Vector2>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905BC762C16B45FD_CLASS_1_9927D381C10D59F2__CTOR_OFFSET))(this);
	}
};
