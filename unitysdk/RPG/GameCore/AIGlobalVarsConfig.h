#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_2CAAA2FDF9170110;
class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AIVariable; }
namespace System { class String; }

#define RPG_GAMECORE_AIGLOBALVARSCONFIG_METHOD_2_C85BB0F813483509_OFFSET UNITYSDK_OFFSET(0x185F12D0)
#define RPG_GAMECORE_AIGLOBALVARSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x185F1440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIGlobalVarsConfig_TypeDefinitionIndex = 14645;

	class AIGlobalVarsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AIVariable*>* GlobalVars; // 0x10
		::Class_1_2CAAA2FDF9170110* BasicAITagList; // 0x18
		::System::String* DefaultComplexAI; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIGLOBALVARSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C85BB0F813483509(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIGlobalVarsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIGlobalVarsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIGLOBALVARSCONFIG_METHOD_2_C85BB0F813483509_OFFSET))(a1, a2);
		}
	};
}
