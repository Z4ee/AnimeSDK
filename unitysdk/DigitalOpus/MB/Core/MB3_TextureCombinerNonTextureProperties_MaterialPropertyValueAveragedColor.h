#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace DigitalOpus::MB::Core { class MB3_TextureCombinerNonTextureProperties_MaterialProperty; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYVALUEAVERAGEDCOLOR_GETAVERAGE_OFFSET UNITYSDK_OFFSET(0x1E368650)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYVALUEAVERAGEDCOLOR_NUMVALUES_OFFSET UNITYSDK_OFFSET(0x1E3686A0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYVALUEAVERAGEDCOLOR_SETAVERAGEVALUEORDEFAULTONMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E3686B0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYVALUEAVERAGEDCOLOR_TRYGETPROPVALUEFROMMATERIALANDBLENDINTOAVERAGE_OFFSET UNITYSDK_OFFSET(0x1E368480)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYVALUEAVERAGEDCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3689E0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor_TypeDefinitionIndex = 90714;

	class MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor : public ::System::Object
	{
	public:
		::UnityEngine::Color averageVal; // 0x10
		::System::Int32 numValues; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYVALUEAVERAGEDCOLOR__CTOR_OFFSET))(this);
		}

		::System::Void TryGetPropValueFromMaterialAndBlendIntoAverage(::UnityEngine::Material* mat, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty* property)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYVALUEAVERAGEDCOLOR_TRYGETPROPVALUEFROMMATERIALANDBLENDINTOAVERAGE_OFFSET))(this, mat, property);
		}

		::System::Object* GetAverage()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYVALUEAVERAGEDCOLOR_GETAVERAGE_OFFSET))(this);
		}

		::System::Int32 NumValues()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYVALUEAVERAGEDCOLOR_NUMVALUES_OFFSET))(this);
		}

		::System::Void SetAverageValueOrDefaultOnMaterial(::UnityEngine::Material* mat, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty* property)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYVALUEAVERAGEDCOLOR_SETAVERAGEVALUEORDEFAULTONMATERIAL_OFFSET))(this, mat, property);
		}
	};
}
