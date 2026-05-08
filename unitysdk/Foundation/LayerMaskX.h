#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define FOUNDATION_LAYERMASKX_ADDTOMASK_OFFSET UNITYSDK_OFFSET(0x1BD37770)
#define FOUNDATION_LAYERMASKX_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1BD37410)
#define FOUNDATION_LAYERMASKX_CREATE_OFFSET UNITYSDK_OFFSET(0x1BD37320)
#define FOUNDATION_LAYERMASKX_INVERSE_OFFSET UNITYSDK_OFFSET(0x1BD37730)
#define FOUNDATION_LAYERMASKX_ISINLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1BD37B40)
#define FOUNDATION_LAYERMASKX_LAYERNUMBERSTOMASK_OFFSET UNITYSDK_OFFSET(0x1BD375B0)
#define FOUNDATION_LAYERMASKX_MASKTONAMES_OFFSET UNITYSDK_OFFSET(0x1BD37810)
#define FOUNDATION_LAYERMASKX_MASKTOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1BD37A90)
#define FOUNDATION_LAYERMASKX_MASKTOSTRING_OFFSET UNITYSDK_OFFSET(0x1BD37980)
#define FOUNDATION_LAYERMASKX_NAMESTOMASK_OFFSET UNITYSDK_OFFSET(0x1BD37370)
#define FOUNDATION_LAYERMASKX_REMOVEFROMMASK_OFFSET UNITYSDK_OFFSET(0x1BD377C0)

namespace Foundation
{
	inline static constexpr unsigned int LayerMaskX_TypeDefinitionIndex = 7893;

	class LayerMaskX : public ::System::Object
	{
	public:
		static ::UnityEngine::LayerMask Create(::Il2CppArray<::System::String*>* layerNames)
		{
			return ((::UnityEngine::LayerMask(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + FOUNDATION_LAYERMASKX_CREATE_OFFSET))(layerNames);
		}

		static ::UnityEngine::LayerMask Create_1(::Il2CppArray<::System::Int32>* layerNumbers)
		{
			return ((::UnityEngine::LayerMask(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + FOUNDATION_LAYERMASKX_CREATE_1_OFFSET))(layerNumbers);
		}

		static ::UnityEngine::LayerMask NamesToMask(::Il2CppArray<::System::String*>* layerNames)
		{
			return ((::UnityEngine::LayerMask(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + FOUNDATION_LAYERMASKX_NAMESTOMASK_OFFSET))(layerNames);
		}

		static ::UnityEngine::LayerMask LayerNumbersToMask(::Il2CppArray<::System::Int32>* layerNumbers)
		{
			return ((::UnityEngine::LayerMask(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + FOUNDATION_LAYERMASKX_LAYERNUMBERSTOMASK_OFFSET))(layerNumbers);
		}

		static ::UnityEngine::LayerMask Inverse(::UnityEngine::LayerMask original)
		{
			return ((::UnityEngine::LayerMask(*)(::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + FOUNDATION_LAYERMASKX_INVERSE_OFFSET))(original);
		}

		static ::UnityEngine::LayerMask AddToMask(::UnityEngine::LayerMask original, ::Il2CppArray<::System::String*>* layerNames)
		{
			return ((::UnityEngine::LayerMask(*)(::UnityEngine::LayerMask, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + FOUNDATION_LAYERMASKX_ADDTOMASK_OFFSET))(original, layerNames);
		}

		static ::UnityEngine::LayerMask RemoveFromMask(::UnityEngine::LayerMask original, ::Il2CppArray<::System::String*>* layerNames)
		{
			return ((::UnityEngine::LayerMask(*)(::UnityEngine::LayerMask, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + FOUNDATION_LAYERMASKX_REMOVEFROMMASK_OFFSET))(original, layerNames);
		}

		static ::Il2CppArray<::System::String*>* MaskToNames(::UnityEngine::LayerMask original)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + FOUNDATION_LAYERMASKX_MASKTONAMES_OFFSET))(original);
		}

		static ::System::String* MaskToString(::UnityEngine::LayerMask original)
		{
			return ((::System::String*(*)(::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + FOUNDATION_LAYERMASKX_MASKTOSTRING_OFFSET))(original);
		}

		static ::System::String* MaskToString_1(::UnityEngine::LayerMask original, ::System::String* delimiter)
		{
			return ((::System::String*(*)(::UnityEngine::LayerMask, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_LAYERMASKX_MASKTOSTRING_1_OFFSET))(original, delimiter);
		}

		static ::System::Boolean IsInLayerMask(::UnityEngine::GameObject* obj, ::UnityEngine::LayerMask mask)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + FOUNDATION_LAYERMASKX_ISINLAYERMASK_OFFSET))(obj, mask);
		}
	};
}
