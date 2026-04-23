#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define SRF_SRFTRANSFORMEXTENSIONS_CREATECHILD_OFFSET UNITYSDK_OFFSET(0x19EA5D20)
#define SRF_SRFTRANSFORMEXTENSIONS_DESTROYCHILDREN_OFFSET UNITYSDK_OFFSET(0x19EA6000)
#define SRF_SRFTRANSFORMEXTENSIONS_GETCHILDREN_OFFSET UNITYSDK_OFFSET(0x19EA5C20)
#define SRF_SRFTRANSFORMEXTENSIONS_MATCH_OFFSET UNITYSDK_OFFSET(0x19EA5F50)
#define SRF_SRFTRANSFORMEXTENSIONS_RESETLOCAL_OFFSET UNITYSDK_OFFSET(0x19EA5CA0)
#define SRF_SRFTRANSFORMEXTENSIONS_SETLOCALS_OFFSET UNITYSDK_OFFSET(0x19EA5E60)
#define SRF_SRFTRANSFORMEXTENSIONS_SETPARENTMAINTAINLOCALS_OFFSET UNITYSDK_OFFSET(0x19EA5E40)

namespace SRF
{
	inline static constexpr unsigned int SRFTransformExtensions_TypeDefinitionIndex = 33283;

	class SRFTransformExtensions : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>* GetChildren(::UnityEngine::Transform* t)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SRF_SRFTRANSFORMEXTENSIONS_GETCHILDREN_OFFSET))(t);
		}

		static ::System::Void ResetLocal(::UnityEngine::Transform* t)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SRF_SRFTRANSFORMEXTENSIONS_RESETLOCAL_OFFSET))(t);
		}

		static ::UnityEngine::GameObject* CreateChild(::UnityEngine::Transform* t, ::System::String* name)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + SRF_SRFTRANSFORMEXTENSIONS_CREATECHILD_OFFSET))(t, name);
		}

		static ::System::Void SetParentMaintainLocals(::UnityEngine::Transform* t, ::UnityEngine::Transform* parent)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SRF_SRFTRANSFORMEXTENSIONS_SETPARENTMAINTAINLOCALS_OFFSET))(t, parent);
		}

		static ::System::Void SetLocals(::UnityEngine::Transform* t, ::UnityEngine::Transform* from)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SRF_SRFTRANSFORMEXTENSIONS_SETLOCALS_OFFSET))(t, from);
		}

		static ::System::Void Match(::UnityEngine::Transform* t, ::UnityEngine::Transform* from)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SRF_SRFTRANSFORMEXTENSIONS_MATCH_OFFSET))(t, from);
		}

		static ::System::Void DestroyChildren(::UnityEngine::Transform* t)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SRF_SRFTRANSFORMEXTENSIONS_DESTROYCHILDREN_OFFSET))(t);
		}
	};
}
