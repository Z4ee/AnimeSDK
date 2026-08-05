#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat; }
namespace System { class String; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYFLOAT_GETAVERAGECALCULATOR_OFFSET UNITYSDK_OFFSET(0x1F543E90)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYFLOAT_GETDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1F543EA0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYFLOAT_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1F543E10)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYFLOAT_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1F543E20)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F543E30)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat_TypeDefinitionIndex = 94643;

	class MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat : public ::System::Object
	{
	public:
		::System::String* _PropertyName_k__BackingField; // 0x10
		::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat* _averageCalc; // 0x18
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
