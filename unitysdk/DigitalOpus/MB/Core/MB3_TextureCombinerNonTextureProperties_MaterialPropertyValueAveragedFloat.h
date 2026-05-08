#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class MB3_TextureCombinerNonTextureProperties_MaterialProperty; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYVALUEAVERAGEDFLOAT_GETAVERAGE_OFFSET UNITYSDK_OFFSET(0x1C4E2BE0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYVALUEAVERAGEDFLOAT_NUMVALUES_OFFSET UNITYSDK_OFFSET(0x1C4E2C30)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYVALUEAVERAGEDFLOAT_SETAVERAGEVALUEORDEFAULTONMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C4E2C40)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYVALUEAVERAGEDFLOAT_TRYGETPROPVALUEFROMMATERIALANDBLENDINTOAVERAGE_OFFSET UNITYSDK_OFFSET(0x1C4E2A20)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYVALUEAVERAGEDFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4E2F60)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat_TypeDefinitionIndex = 85139;

	class MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat : public ::System::Object
	{
	public:
		::System::Single averageVal; // 0x10
		::System::Int32 numValues; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYVALUEAVERAGEDFLOAT__CTOR_OFFSET))(this);
		}

		::System::Void TryGetPropValueFromMaterialAndBlendIntoAverage(::UnityEngine::Material* mat, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty* property)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYVALUEAVERAGEDFLOAT_TRYGETPROPVALUEFROMMATERIALANDBLENDINTOAVERAGE_OFFSET))(this, mat, property);
		}

		::System::Object* GetAverage()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYVALUEAVERAGEDFLOAT_GETAVERAGE_OFFSET))(this);
		}

		::System::Int32 NumValues()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYVALUEAVERAGEDFLOAT_NUMVALUES_OFFSET))(this);
		}

		::System::Void SetAverageValueOrDefaultOnMaterial(::UnityEngine::Material* mat, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty* property)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYVALUEAVERAGEDFLOAT_SETAVERAGEVALUEORDEFAULTONMATERIAL_OFFSET))(this, mat, property);
		}
	};
}
