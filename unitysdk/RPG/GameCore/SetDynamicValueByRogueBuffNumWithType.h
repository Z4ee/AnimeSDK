#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHTYPE_METHOD_3_2681482AA1B8502D_OFFSET UNITYSDK_OFFSET(0x19C434F0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHTYPE_METHOD_3_EAFB27D3E1F497A2_OFFSET UNITYSDK_OFFSET(0x19C43480)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C434C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueBuffNumWithType_TypeDefinitionIndex = 20556;

	class SetDynamicValueByRogueBuffNumWithType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EAFB27D3E1F497A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffNumWithType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueBuffNumWithType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHTYPE_METHOD_3_EAFB27D3E1F497A2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2681482AA1B8502D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffNumWithType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueBuffNumWithType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHTYPE_METHOD_3_2681482AA1B8502D_OFFSET))(a1, a2);
		}
	};
}
