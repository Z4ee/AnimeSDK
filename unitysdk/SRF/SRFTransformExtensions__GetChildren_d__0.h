#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Transform; }

#define SRF_SRFTRANSFORMEXTENSIONS__GETCHILDREN_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EC3DBE0)
#define SRF_SRFTRANSFORMEXTENSIONS__GETCHILDREN_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_TRANSFORM__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EC3DCD0)
#define SRF_SRFTRANSFORMEXTENSIONS__GETCHILDREN_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_TRANSFORM__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EC3DC60)
#define SRF_SRFTRANSFORMEXTENSIONS__GETCHILDREN_D__0_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EC3DD50)
#define SRF_SRFTRANSFORMEXTENSIONS__GETCHILDREN_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EC3DCC0)
#define SRF_SRFTRANSFORMEXTENSIONS__GETCHILDREN_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EC3DC70)
#define SRF_SRFTRANSFORMEXTENSIONS__GETCHILDREN_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC3DBD0)
#define SRF_SRFTRANSFORMEXTENSIONS__GETCHILDREN_D__0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC3D450)

namespace SRF
{
	inline static constexpr unsigned int SRFTransformExtensions__GetChildren_d__0_TypeDefinitionIndex = 34704;

	class SRFTransformExtensions__GetChildren_d__0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* t; // 0x10
		::UnityEngine::Transform* __3__t; // 0x18
		::UnityEngine::Transform* __2__current; // 0x20
		::System::Int32 __l__initialThreadId; // 0x28
		::System::Int32 __1__state; // 0x2C
		::System::Int32 _i_5__2; // 0x30

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRF_SRFTRANSFORMEXTENSIONS__GETCHILDREN_D__0__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SRFTRANSFORMEXTENSIONS__GETCHILDREN_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SRFTRANSFORMEXTENSIONS__GETCHILDREN_D__0_MOVENEXT_OFFSET))(this);
		}

		::UnityEngine::Transform* System_Collections_Generic_IEnumerator_UnityEngine_Transform__get_Current()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SRFTRANSFORMEXTENSIONS__GETCHILDREN_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_TRANSFORM__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SRFTRANSFORMEXTENSIONS__GETCHILDREN_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SRFTRANSFORMEXTENSIONS__GETCHILDREN_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>* System_Collections_Generic_IEnumerable_UnityEngine_Transform__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SRFTRANSFORMEXTENSIONS__GETCHILDREN_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_TRANSFORM__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SRFTRANSFORMEXTENSIONS__GETCHILDREN_D__0_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
