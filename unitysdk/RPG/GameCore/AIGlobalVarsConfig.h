#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_1C30CE192ABE4C54;
class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AIVariable; }
namespace System { class String; }

#define RPG_GAMECORE_AIGLOBALVARSCONFIG_METHOD_2_4E559344A7A4E7EC_OFFSET UNITYSDK_OFFSET(0x1CD66630)
#define RPG_GAMECORE_AIGLOBALVARSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD667A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIGlobalVarsConfig_TypeDefinitionIndex = 15307;

	class AIGlobalVarsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AIVariable*>* GlobalVars; // 0x10
		::Class_1_1C30CE192ABE4C54* BasicAITagList; // 0x18
		::System::String* DefaultComplexAI; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIGLOBALVARSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4E559344A7A4E7EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIGlobalVarsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIGlobalVarsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIGLOBALVARSCONFIG_METHOD_2_4E559344A7A4E7EC_OFFSET))(a1, a2);
		}
	};
}
