#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat; }
namespace System { class String; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYFLOAT_GETAVERAGECALCULATOR_OFFSET UNITYSDK_OFFSET(0x1E12B1E0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYFLOAT_GETDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1E12B1F0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYFLOAT_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1E12B160)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYFLOAT_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1E12B170)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E12B180)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat_TypeDefinitionIndex = 90710;

	class MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat* _averageCalc; // 0x10
		::System::String* _PropertyName_k__BackingField; // 0x18
		::System::Single _defaultValue; // 0x20

		::System::Void _ctor(::System::String* name, ::System::Single defValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYFLOAT__CTOR_OFFSET))(this, name, defValue);
		}

		::System::String* get_PropertyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYFLOAT_GET_PROPERTYNAME_OFFSET))(this);
		}

		::System::Void set_PropertyName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYFLOAT_SET_PROPERTYNAME_OFFSET))(this, value);
		}

		::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged* GetAverageCalculator()
		{
			return ((::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYFLOAT_GETAVERAGECALCULATOR_OFFSET))(this);
		}

		::System::Object* GetDefaultValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYFLOAT_GETDEFAULTVALUE_OFFSET))(this);
		}
	};
}
