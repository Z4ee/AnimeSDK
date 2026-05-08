#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_820B58BBFDF43D0F_CLASS_1_E4E9BBD6476577C0__CTOR_OFFSET UNITYSDK_OFFSET(0x11431B40)

inline static constexpr unsigned int Class_1_820B58BBFDF43D0F_Class_1_E4E9BBD6476577C0_TypeDefinitionIndex = 61768;

class Class_1_820B58BBFDF43D0F_Class_1_E4E9BBD6476577C0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* Field_1_0; // 0x10
	::System::Action_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*>* Field_1_3; // 0x18
	::UnityEngine::Transform* Field_1_2; // 0x20
	::System::Boolean Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_820B58BBFDF43D0F_CLASS_1_E4E9BBD6476577C0__CTOR_OFFSET))(this);
	}
};
