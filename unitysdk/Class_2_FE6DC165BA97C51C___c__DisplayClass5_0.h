#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_037EA204E69EBC75;
class Class_2_FE6DC165BA97C51C;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_FE6DC165BA97C51C___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x188CF770)
#define CLASS_2_FE6DC165BA97C51C___C__DISPLAYCLASS5_0__LOADASSETASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x188CF930)

inline static constexpr unsigned int Class_2_FE6DC165BA97C51C___c__DisplayClass5_0_TypeDefinitionIndex = 72706;

class Class_2_FE6DC165BA97C51C___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_2_FE6DC165BA97C51C* __4__this; // 0x10
	::Class_2_037EA204E69EBC75* entity; // 0x18
	::System::Action_1<::Class_2_037EA204E69EBC75*>* callback; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE6DC165BA97C51C___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void _LoadAssetAsync_b__0(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_FE6DC165BA97C51C___C__DISPLAYCLASS5_0__LOADASSETASYNC_B__0_OFFSET))(this, a1);
	}
};
