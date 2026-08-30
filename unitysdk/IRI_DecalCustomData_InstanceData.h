#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define IRI_DECALCUSTOMDATA_INSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E6C3C0)

inline static constexpr unsigned int IRI_DecalCustomData_InstanceData_TypeDefinitionIndex = 47631;

struct alignas(4) IRI_DecalCustomData_InstanceData
{
	static ::IRI_DecalCustomData_InstanceData* StaticGet_DefaultValue()
	{
		return (::IRI_DecalCustomData_InstanceData*)Il2CppClass::FromTypeDefinitionIndex(IRI_DecalCustomData_InstanceData_TypeDefinitionIndex)->GetStaticField(0x10690);
	}
	::System::Int32 AtlasID; // 0x10
	::System::Single SmoothScale; // 0x14
	::System::Single NormalScale; // 0x18
	::UnityEngine::Vector4 TilingOffset; // 0x1C
	::UnityEngine::Color CustomColor; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IRI_DECALCUSTOMDATA_INSTANCEDATA__CCTOR_OFFSET))();
	}
};
