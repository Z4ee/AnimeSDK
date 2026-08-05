#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_6E06DF87808F0190;
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_6E06DF87808F0190_CLASS_1_5D21038ED94AE7C0_METHOD_1_936F898356E9E3B0_OFFSET UNITYSDK_OFFSET(0x17A7B4F0)
#define CLASS_1_6E06DF87808F0190_CLASS_1_5D21038ED94AE7C0__CTOR_OFFSET UNITYSDK_OFFSET(0x17A7B4E0)

inline static constexpr unsigned int Class_1_6E06DF87808F0190_Class_1_5D21038ED94AE7C0_TypeDefinitionIndex = 64907;

class Class_1_6E06DF87808F0190_Class_1_5D21038ED94AE7C0 : public ::System::Object
{
public:
	::Class_1_6E06DF87808F0190* Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E06DF87808F0190_CLASS_1_5D21038ED94AE7C0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_936F898356E9E3B0(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_6E06DF87808F0190_CLASS_1_5D21038ED94AE7C0_METHOD_1_936F898356E9E3B0_OFFSET))(this, a1, a2);
	}
};
