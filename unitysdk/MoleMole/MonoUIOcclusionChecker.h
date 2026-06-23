#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOUIOCCLUSIONCHECKER_METHOD_5_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x18CF04F0)
#define MOLEMOLE_MONOUIOCCLUSIONCHECKER_METHOD_5_15F779D4C75F340E_OFFSET UNITYSDK_OFFSET(0x18CEFBB0)
#define MOLEMOLE_MONOUIOCCLUSIONCHECKER_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x18CEF630)
#define MOLEMOLE_MONOUIOCCLUSIONCHECKER_METHOD_5_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x18CF0330)
#define MOLEMOLE_MONOUIOCCLUSIONCHECKER_METHOD_5_5D52379F6FF16D24_OFFSET UNITYSDK_OFFSET(0x18CEFB60)
#define MOLEMOLE_MONOUIOCCLUSIONCHECKER_METHOD_5_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x18CEF860)
#define MOLEMOLE_MONOUIOCCLUSIONCHECKER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18CEF5E0)
#define MOLEMOLE_MONOUIOCCLUSIONCHECKER_SETENTITY_OFFSET UNITYSDK_OFFSET(0x18CEF6E0)
#define MOLEMOLE_MONOUIOCCLUSIONCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x18CEFAA0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIOcclusionChecker_TypeDefinitionIndex = 54530;

	class MonoUIOcclusionChecker : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 Field_5_0; // 0x18
		::System::Single Field_5_1; // 0x1C
		::UnityEngine::Transform* Field_5_2; // 0x20
		::Foundation::Coroutine::CoroutineHandle Field_5_3; // 0x28
		::System::Boolean Field_5_4; // 0x2C
		::System::Single Field_5_5; // 0x30
		::Il2CppArray<::UnityEngine::RaycastHit>* Field_5_6; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetEntity(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER_SETENTITY_OFFSET))(this, a1);
		}

		::System::Void Method_5_85377D41FEE05B66()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER_METHOD_5_85377D41FEE05B66_OFFSET))(this);
		}

		::System::Boolean Method_5_15F779D4C75F340E(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER_METHOD_5_15F779D4C75F340E_OFFSET))(this, a1);
		}

		::System::Void Method_5_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER_METHOD_5_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_5_5D52379F6FF16D24()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER_METHOD_5_5D52379F6FF16D24_OFFSET))(this);
		}

		::System::Boolean Method_5_507A5122CD01412B()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER_METHOD_5_507A5122CD01412B_OFFSET))(this);
		}

		::System::Void Method_5_078D85152011B919()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOCCLUSIONCHECKER_METHOD_5_078D85152011B919_OFFSET))(this);
		}
	};
}
