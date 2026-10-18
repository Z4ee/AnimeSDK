#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2D5FDF08D5D53B49;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_2D5FDF08D5D53B49___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBC87200)
#define CLASS_1_2D5FDF08D5D53B49___C__DISPLAYCLASS5_0__SWITCHAREA_B__0_OFFSET UNITYSDK_OFFSET(0xBC880C0)

inline static constexpr unsigned int Class_1_2D5FDF08D5D53B49___c__DisplayClass5_0_TypeDefinitionIndex = 75470;

class Class_1_2D5FDF08D5D53B49___c__DisplayClass5_0 : public ::System::Object
{
public:
	::System::Action* onFinish; // 0x10
	::System::String* areaPath; // 0x18
	::Class_1_2D5FDF08D5D53B49* __4__this; // 0x20
	::UnityEngine::Vector3 position; // 0x28
	::UnityEngine::Quaternion rotation; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D5FDF08D5D53B49___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void _SwitchArea_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D5FDF08D5D53B49___C__DISPLAYCLASS5_0__SWITCHAREA_B__0_OFFSET))(this);
	}
};
