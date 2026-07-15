#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SHADERPROPERTYCONFIG_METHOD_2_E7BC312AD1AC9CBB_OFFSET UNITYSDK_OFFSET(0x1BE30D40)
#define RPG_GAMECORE_SHADERPROPERTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE30FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShaderPropertyConfig_TypeDefinitionIndex = 19113;

	class ShaderPropertyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ShaderPropertyKeywordMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* CharacterShaderPropertyKeywordMap; // 0x18
		::Il2CppArray<::System::String*>* SharedKeywordList; // 0x20
		::Il2CppArray<::System::String*>* ShaderLUTNameList; // 0x28
		::Il2CppArray<::System::String*>* CharacterLUTParameterList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHADERPROPERTYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E7BC312AD1AC9CBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShaderPropertyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShaderPropertyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHADERPROPERTYCONFIG_METHOD_2_E7BC312AD1AC9CBB_OFFSET))(a1, a2);
		}
	};
}
