#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define CRIWARE_CRIMONOBEHAVIOUR_GET_GUID_OFFSET UNITYSDK_OFFSET(0x12C21160)
#define CRIWARE_CRIMONOBEHAVIOUR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12C1E4B0)
#define CRIWARE_CRIMONOBEHAVIOUR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12C1BA40)
#define CRIWARE_CRIMONOBEHAVIOUR_SET_GUID_OFFSET UNITYSDK_OFFSET(0x12C21170)
#define CRIWARE_CRIMONOBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x12C1C190)

namespace CriWare
{
	inline static constexpr unsigned int CriMonoBehaviour_TypeDefinitionIndex = 36937;

	class CriMonoBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Guid _guid_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Guid get_guid()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOUR_GET_GUID_OFFSET))(this);
		}

		::System::Void set_guid(::System::Guid value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOUR_SET_GUID_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOUR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOUR_ONDISABLE_OFFSET))(this);
		}
	};
}
