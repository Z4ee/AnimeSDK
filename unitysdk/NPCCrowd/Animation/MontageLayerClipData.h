#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define NPCCROWD_ANIMATION_MONTAGELAYERCLIPDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x698300)
#define NPCCROWD_ANIMATION_MONTAGELAYERCLIPDATA___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x698310)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageLayerClipData_TypeDefinitionIndex = 47990;

	struct alignas(4) MontageLayerClipData
	{
		::System::Int32 clipIDLayer0; // 0x10
		::System::Int32 clipIDLayer1; // 0x14
		::System::Int32 clipIDLayer2; // 0x18
		::System::Int32 clipIDLayer3; // 0x1C

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_MONTAGELAYERCLIPDATA_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_MONTAGELAYERCLIPDATA___BASE_EQUALS_OFFSET))(this, P0);
		}
	};
}
