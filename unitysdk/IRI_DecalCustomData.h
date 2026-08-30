#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI_DecalCustomData_InstanceData.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define IRI_DECALCUSTOMDATA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18E6C300)
#define IRI_DECALCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18E6C340)

inline static constexpr unsigned int IRI_DecalCustomData_TypeDefinitionIndex = 47630;

class IRI_DecalCustomData : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::String* AFELNFDOOIB; // 0x0
	::IRI_DecalCustomData_InstanceData CustomData; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DECALCUSTOMDATA__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DECALCUSTOMDATA_ONENABLE_OFFSET))(this);
	}
};
