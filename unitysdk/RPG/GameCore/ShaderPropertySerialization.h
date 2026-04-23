#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/Struct_2_331ACDD60B60D2E3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHADERPROPERTYSERIALIZATION_METHOD_2_09CB9B5A106B1D66_OFFSET UNITYSDK_OFFSET(0x18E4F260)
#define RPG_GAMECORE_SHADERPROPERTYSERIALIZATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18E4F510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShaderPropertySerialization_TypeDefinitionIndex = 18233;

	class ShaderPropertySerialization : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ShaderName; // 0x10
		::System::String* PropertyName; // 0x18
		::System::Int32 PropertyType; // 0x20
		::System::Int32 Enabled; // 0x24
		::System::Single FloatValue; // 0x28
		::Struct_2_331ACDD60B60D2E3 ColorValue; // 0x2C
		::Struct_2_331ACDD60B60D2E3 VectorValue; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHADERPROPERTYSERIALIZATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_09CB9B5A106B1D66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShaderPropertySerialization*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShaderPropertySerialization*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHADERPROPERTYSERIALIZATION_METHOD_2_09CB9B5A106B1D66_OFFSET))(a1, a2);
		}
	};
}
