#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UIPAGETURNBEHAVIOR_CLASS_1_349DF49D99B4DC35_METHOD_1_017E8EBB8EE05A46_OFFSET UNITYSDK_OFFSET(0xA71B460)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_CLASS_1_349DF49D99B4DC35_METHOD_1_B8746CF4034D9E80_OFFSET UNITYSDK_OFFSET(0xA71B340)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_CLASS_1_349DF49D99B4DC35_METHOD_1_E607519FCB80C849_OFFSET UNITYSDK_OFFSET(0xA71B200)

namespace RPG::Client
{
	inline static constexpr unsigned int UIPageTurnBehavior_Class_1_349DF49D99B4DC35_TypeDefinitionIndex = 58199;

	class UIPageTurnBehavior_Class_1_349DF49D99B4DC35 : public ::System::Object
	{
	public:
		static ::System::Void Method_1_B8746CF4034D9E80(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_CLASS_1_349DF49D99B4DC35_METHOD_1_B8746CF4034D9E80_OFFSET))(a1);
		}

		static ::System::Void Method_1_E607519FCB80C849(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_CLASS_1_349DF49D99B4DC35_METHOD_1_E607519FCB80C849_OFFSET))(a1);
		}

		static ::System::Void Method_1_017E8EBB8EE05A46(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_CLASS_1_349DF49D99B4DC35_METHOD_1_017E8EBB8EE05A46_OFFSET))(a1, a2);
		}
	};
}
