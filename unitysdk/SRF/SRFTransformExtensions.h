#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define SRF_SRFTRANSFORMEXTENSIONS_CREATECHILD_OFFSET UNITYSDK_OFFSET(0x1E6ADB50)
#define SRF_SRFTRANSFORMEXTENSIONS_DESTROYCHILDREN_OFFSET UNITYSDK_OFFSET(0x1E6ADE30)
#define SRF_SRFTRANSFORMEXTENSIONS_GETCHILDREN_OFFSET UNITYSDK_OFFSET(0x1E6ADA50)
#define SRF_SRFTRANSFORMEXTENSIONS_MATCH_OFFSET UNITYSDK_OFFSET(0x1E6ADD80)
#define SRF_SRFTRANSFORMEXTENSIONS_RESETLOCAL_OFFSET UNITYSDK_OFFSET(0x1E6ADAD0)
#define SRF_SRFTRANSFORMEXTENSIONS_SETLOCALS_OFFSET UNITYSDK_OFFSET(0x1E6ADC90)
#define SRF_SRFTRANSFORMEXTENSIONS_SETPARENTMAINTAINLOCALS_OFFSET UNITYSDK_OFFSET(0x1E6ADC70)

namespace SRF
{
	inline static constexpr unsigned int SRFTransformExtensions_TypeDefinitionIndex = 34703;

	class SRFTransformExtensions : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>* GetChildren(::UnityEngine::Transform* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SRF_SRFTRANSFORMEXTENSIONS_GETCHILDREN_OFFSET))(a1);
		}

		static ::System::Void ResetLocal(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SRF_SRFTRANSFORMEXTENSIONS_RESETLOCAL_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* CreateChild(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + SRF_SRFTRANSFORMEXTENSIONS_CREATECHILD_OFFSET))(a1, a2);
		}

		static ::System::Void SetParentMaintainLocals(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SRF_SRFTRANSFORMEXTENSIONS_SETPARENTMAINTAINLOCALS_OFFSET))(a1, a2);
		}

		static ::System::Void SetLocals(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SRF_SRFTRANSFORMEXTENSIONS_SETLOCALS_OFFSET))(a1, a2);
		}

		static ::System::Void Match(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SRF_SRFTRANSFORMEXTENSIONS_MATCH_OFFSET))(a1, a2);
		}

		static ::System::Void DestroyChildren(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SRF_SRFTRANSFORMEXTENSIONS_DESTROYCHILDREN_OFFSET))(a1);
		}
	};
}
