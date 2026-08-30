#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_64F446B04AA329E4;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_64F446B04AA329E4___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBDB9BD0)
#define CLASS_1_64F446B04AA329E4___C__DISPLAYCLASS5_0__SWITCHAREA_B__0_OFFSET UNITYSDK_OFFSET(0xBDBAA90)

inline static constexpr unsigned int Class_1_64F446B04AA329E4___c__DisplayClass5_0_TypeDefinitionIndex = 75171;

class Class_1_64F446B04AA329E4___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_1_64F446B04AA329E4* __4__this; // 0x10
	::System::String* areaPath; // 0x18
	::System::Action* onFinish; // 0x20
	::UnityEngine::Vector3 position; // 0x28
	::UnityEngine::Quaternion rotation; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void _SwitchArea_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4___C__DISPLAYCLASS5_0__SWITCHAREA_B__0_OFFSET))(this);
	}
};
