#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoHintArrow_Enum_3_6DC68836871534E5.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class MonoRenderHandler; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MONOHINTARROW_AWAKE_OFFSET UNITYSDK_OFFSET(0x17827170)
#define MOLEMOLE_MONOHINTARROW_GET_MASKED_OFFSET UNITYSDK_OFFSET(0x17827160)
#define MOLEMOLE_MONOHINTARROW_GET_STATE_OFFSET UNITYSDK_OFFSET(0x17826F90)
#define MOLEMOLE_MONOHINTARROW_METHOD_5_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x17827550)
#define MOLEMOLE_MONOHINTARROW_METHOD_5_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0x17827000)
#define MOLEMOLE_MONOHINTARROW_METHOD_5_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x178274B0)
#define MOLEMOLE_MONOHINTARROW_METHOD_5_E374F6C9CEE8E680_OFFSET UNITYSDK_OFFSET(0x17827420)
#define MOLEMOLE_MONOHINTARROW_SET_MASKED_OFFSET UNITYSDK_OFFSET(0x17826FA0)
#define MOLEMOLE_MONOHINTARROW_START_OFFSET UNITYSDK_OFFSET(0x17827340)
#define MOLEMOLE_MONOHINTARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17827390)

namespace MoleMole
{
	inline static constexpr unsigned int MonoHintArrow_TypeDefinitionIndex = 50639;

	class MonoHintArrow : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Renderer*>* Field_5_0; // 0x18
		::UnityEngine::Animation* Field_5_1; // 0x20
		::System::String* fadeInAnimName; // 0x28
		::System::String* fadeOutAnimName; // 0x30
		::UnityEngine::Coroutine* Field_5_4; // 0x38
		::MoleMole::MonoRenderHandler* Field_5_5; // 0x40
		::MoleMole::MonoHintArrow_Enum_3_6DC68836871534E5 Field_5_6; // 0x48
		::System::Boolean Field_5_7; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW__CTOR_OFFSET))(this);
		}

		::MoleMole::MonoHintArrow_Enum_3_6DC68836871534E5 get_state()
		{
			return ((::MoleMole::MonoHintArrow_Enum_3_6DC68836871534E5(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_GET_STATE_OFFSET))(this);
		}

		::System::Void set_masked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_SET_MASKED_OFFSET))(this, a1);
		}

		::System::Boolean get_masked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_GET_MASKED_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_START_OFFSET))(this);
		}

		::System::Void Method_5_1CD1133DC003C11C(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_METHOD_5_1CD1133DC003C11C_OFFSET))(this, a1);
		}

		::System::Void Method_5_9D9CF8F6C2342EE5(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_METHOD_5_9D9CF8F6C2342EE5_OFFSET))(this, a1);
		}

		::System::Void Method_5_19CCC07C980409E4(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_METHOD_5_19CCC07C980409E4_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* Method_5_E374F6C9CEE8E680(::System::Boolean a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_METHOD_5_E374F6C9CEE8E680_OFFSET))(this, a1);
		}
	};
}
