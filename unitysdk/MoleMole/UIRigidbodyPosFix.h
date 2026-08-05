#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Rigidbody2D; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIRIGIDBODYPOSFIX_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x15184C00)
#define MOLEMOLE_UIRIGIDBODYPOSFIX_METHOD_5_6DD25DF274ED24AE_OFFSET UNITYSDK_OFFSET(0x15184DE0)
#define MOLEMOLE_UIRIGIDBODYPOSFIX__CTOR_OFFSET UNITYSDK_OFFSET(0x15184FA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRigidbodyPosFix_TypeDefinitionIndex = 89894;

	class UIRigidbodyPosFix : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* Center; // 0x18
		::System::Single MaxRadius; // 0x20
		::UnityEngine::Rigidbody2D* Field_5_0; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYPOSFIX__CTOR_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYPOSFIX_FIXEDUPDATE_OFFSET))(this);
		}

		::UnityEngine::Rigidbody2D* Method_5_6DD25DF274ED24AE()
		{
			return ((::UnityEngine::Rigidbody2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYPOSFIX_METHOD_5_6DD25DF274ED24AE_OFFSET))(this);
		}
	};
}
