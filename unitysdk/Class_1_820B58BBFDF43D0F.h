#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_820B58BBFDF43D0F_METHOD_1_12A6D28FAB0DCA58_OFFSET UNITYSDK_OFFSET(0x11491B50)
#define CLASS_1_820B58BBFDF43D0F_METHOD_1_67725833AE25EE83_OFFSET UNITYSDK_OFFSET(0x11490BB0)
#define CLASS_1_820B58BBFDF43D0F_METHOD_1_EFB3DABE07CF8B92_OFFSET UNITYSDK_OFFSET(0x11490F00)

inline static constexpr unsigned int Class_1_820B58BBFDF43D0F_TypeDefinitionIndex = 61765;

class Class_1_820B58BBFDF43D0F : public ::System::Object
{
public:
	static ::System::Void Method_1_67725833AE25EE83(::UnityEngine::GameObject* a1, ::System::Collections::Generic::List_1<::Foundation::AssetPath>* a2, ::System::Action_1<::System::Collections::Generic::List_1<::Foundation::AssetPath>*>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*, ::System::Action_1<::System::Collections::Generic::List_1<::Foundation::AssetPath>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_820B58BBFDF43D0F_METHOD_1_67725833AE25EE83_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_EFB3DABE07CF8B92(::System::Collections::Generic::List_1<::Foundation::AssetPath>* a1, ::UnityEngine::Transform* a2, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*>* a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Foundation::AssetPath>*, ::UnityEngine::Transform*, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_820B58BBFDF43D0F_METHOD_1_EFB3DABE07CF8B92_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_12A6D28FAB0DCA58(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_820B58BBFDF43D0F_METHOD_1_12A6D28FAB0DCA58_OFFSET))(a1, a2);
	}
};
