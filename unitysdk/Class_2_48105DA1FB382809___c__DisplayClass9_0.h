#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_48105DA1FB382809;
class Class_2_6D25D6E36F5AF8D2;
namespace UnityEngine { class GameObject; }

#define CLASS_2_48105DA1FB382809___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF88300)
#define CLASS_2_48105DA1FB382809___C__DISPLAYCLASS9_0__LOADASSETASYNC_B__0_OFFSET UNITYSDK_OFFSET(0xBF88BD0)

inline static constexpr unsigned int Class_2_48105DA1FB382809___c__DisplayClass9_0_TypeDefinitionIndex = 76551;

class Class_2_48105DA1FB382809___c__DisplayClass9_0 : public ::System::Object
{
public:
	::Class_2_6D25D6E36F5AF8D2* entity; // 0x10
	::Class_2_48105DA1FB382809* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48105DA1FB382809___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Void _LoadAssetAsync_b__0(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_48105DA1FB382809___C__DISPLAYCLASS9_0__LOADASSETASYNC_B__0_OFFSET))(this, a1);
	}
};
