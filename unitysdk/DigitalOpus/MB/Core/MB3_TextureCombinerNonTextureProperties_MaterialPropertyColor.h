#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace DigitalOpus::MB::Core { class MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor; }
namespace System { class String; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYCOLOR_GETAVERAGECALCULATOR_OFFSET UNITYSDK_OFFSET(0x1BFA5150)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYCOLOR_GETDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1BFA5160)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYCOLOR_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1BFA50E0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYCOLOR_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1BFA50F0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFA5100)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor_TypeDefinitionIndex = 85137;

	class MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor* _averageCalc; // 0x10
		::System::String* _PropertyName_k__BackingField; // 0x18
		::UnityEngine::Color _defaultValue; // 0x20

		::System::Void _ctor(::System::String* name, ::UnityEngine::Color defaultVal)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYCOLOR__CTOR_OFFSET))(this, name, defaultVal);
		}

		::System::String* get_PropertyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYCOLOR_GET_PROPERTYNAME_OFFSET))(this);
		}

		::System::Void set_PropertyName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYCOLOR_SET_PROPERTYNAME_OFFSET))(this, value);
		}

		::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged* GetAverageCalculator()
		{
			return ((::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYCOLOR_GETAVERAGECALCULATOR_OFFSET))(this);
		}

		::System::Object* GetDefaultValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERNONTEXTUREPROPERTIES_MATERIALPROPERTYCOLOR_GETDEFAULTVALUE_OFFSET))(this);
		}
	};
}
