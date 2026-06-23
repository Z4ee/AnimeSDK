#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_3773F938AA2C6232;
class Class_1_EC682544DE1271C8;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_51B971E69E38047E_CLASS_1_02E714B9AB85CD36_METHOD_1_64D4CCF2D012C503_OFFSET UNITYSDK_OFFSET(0x160096B0)
#define CLASS_2_51B971E69E38047E_CLASS_1_02E714B9AB85CD36_METHOD_1_A59F33F8CA7F3A80_OFFSET UNITYSDK_OFFSET(0x16009300)
#define CLASS_2_51B971E69E38047E_CLASS_1_02E714B9AB85CD36_METHOD_1_CE1E91DD093C1865_OFFSET UNITYSDK_OFFSET(0x16009290)
#define CLASS_2_51B971E69E38047E_CLASS_1_02E714B9AB85CD36__CTOR_OFFSET UNITYSDK_OFFSET(0x16009280)

inline static constexpr unsigned int Class_2_51B971E69E38047E_Class_1_02E714B9AB85CD36_TypeDefinitionIndex = 84883;

class Class_2_51B971E69E38047E_Class_1_02E714B9AB85CD36 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_EC682544DE1271C8*>* Field_1_3; // 0x10
	::Class_1_3773F938AA2C6232* Field_1_0; // 0x18
	::System::Action* Field_1_1; // 0x20
	::System::Int32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51B971E69E38047E_CLASS_1_02E714B9AB85CD36__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CE1E91DD093C1865(::Class_1_EC682544DE1271C8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EC682544DE1271C8*))((::PBYTE)hIl2Cpp + CLASS_2_51B971E69E38047E_CLASS_1_02E714B9AB85CD36_METHOD_1_CE1E91DD093C1865_OFFSET))(this, a1);
	}

	::System::Void Method_1_64D4CCF2D012C503(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_51B971E69E38047E_CLASS_1_02E714B9AB85CD36_METHOD_1_64D4CCF2D012C503_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A59F33F8CA7F3A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51B971E69E38047E_CLASS_1_02E714B9AB85CD36_METHOD_1_A59F33F8CA7F3A80_OFFSET))(this);
	}
};
