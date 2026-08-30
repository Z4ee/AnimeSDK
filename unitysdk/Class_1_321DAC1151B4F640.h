#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_1_321DAC1151B4F640__CTOR_OFFSET UNITYSDK_OFFSET(0x160EAFE0)

inline static constexpr unsigned int Class_1_321DAC1151B4F640_TypeDefinitionIndex = 73097;

class Class_1_321DAC1151B4F640 : public ::System::Object
{
public:
	::UnityEngine::GameObject* CBPPPOEMCLF; // 0x10
	::System::String* HMDFOHBBIOH; // 0x18
	::UnityEngine::Object* CNADDNANHBL; // 0x20
	::System::Boolean LJLAPMEGMEA; // 0x28
	::System::Boolean JLPDFMCJAIG; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_321DAC1151B4F640__CTOR_OFFSET))(this);
	}
};
