#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ShaderPropertySerialization; }
namespace System { class String; }

#define RPG_GAMECORE_SHADERPROPERTYOVERRIDEMONOSERIALIZATION_METHOD_2_2C7879A5473A3CDC_OFFSET UNITYSDK_OFFSET(0x176EBAE0)
#define RPG_GAMECORE_SHADERPROPERTYOVERRIDEMONOSERIALIZATION__CTOR_OFFSET UNITYSDK_OFFSET(0x176EBC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShaderPropertyOverrideMonoSerialization_TypeDefinitionIndex = 17621;

	class ShaderPropertyOverrideMonoSerialization : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* OwnerId; // 0x10
		::Il2CppArray<::RPG::GameCore::ShaderPropertySerialization*>* ShaderPropertyList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHADERPROPERTYOVERRIDEMONOSERIALIZATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2C7879A5473A3CDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShaderPropertyOverrideMonoSerialization*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShaderPropertyOverrideMonoSerialization*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHADERPROPERTYOVERRIDEMONOSERIALIZATION_METHOD_2_2C7879A5473A3CDC_OFFSET))(a1, a2);
		}
	};
}
