#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_STRUCT_2_E499DDD21BF551C3_2_COMPARE_OFFSET UNITYSDK_OFFSET(0x6F5EB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_STRUCT_2_E499DDD21BF551C3_2_GET_MAXPITCH_OFFSET UNITYSDK_OFFSET(0x640190)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_STRUCT_2_E499DDD21BF551C3_2_GET_MINPITCH_OFFSET UNITYSDK_OFFSET(0x640180)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_STRUCT_2_E499DDD21BF551C3_2__CTOR_OFFSET UNITYSDK_OFFSET(0x6400F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LastPhaseFallbackInLevelSettlement_Struct_2_E499DDD21BF551C3_2_TypeDefinitionIndex = 82993;

	struct alignas(4) LastPhaseFallbackInLevelSettlement_Struct_2_E499DDD21BF551C3_2
	{
		::UnityEngine::Quaternion Field_2_0; // 0x10

		::System::Void _ctor(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_STRUCT_2_E499DDD21BF551C3_2__CTOR_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::Quaternion Compare(::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion> a1, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion> a2)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion>, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_STRUCT_2_E499DDD21BF551C3_2_COMPARE_OFFSET))(this, a1, a2);
		}
		*/

		::System::Double get_MinPitch()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_STRUCT_2_E499DDD21BF551C3_2_GET_MINPITCH_OFFSET))(this);
		}

		::System::Double get_MaxPitch()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_STRUCT_2_E499DDD21BF551C3_2_GET_MAXPITCH_OFFSET))(this);
		}
	};
}
