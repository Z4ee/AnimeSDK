#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_METHOD_4_79AEFD109088615F_OFFSET UNITYSDK_OFFSET(0x19AA6C90)
#define RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_METHOD_4_B0960E81C9BBE571_OFFSET UNITYSDK_OFFSET(0x19AA6F70)
#define RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_METHOD_4_C30BA96C24A5F47F_OFFSET UNITYSDK_OFFSET(0x19AA6D60)
#define RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_METHOD_4_EE88398CCB83380C_OFFSET UNITYSDK_OFFSET(0x19AA6FF0)
#define RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA6D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_ByCompareVariableFloat_TypeDefinitionIndex = 18928;

	class RA_ByCompareVariableFloat : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* VarName; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::System::Single CompareValue; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_79AEFD109088615F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByCompareVariableFloat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByCompareVariableFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_METHOD_4_79AEFD109088615F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C30BA96C24A5F47F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByCompareVariableFloat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByCompareVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_METHOD_4_C30BA96C24A5F47F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B0960E81C9BBE571(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByCompareVariableFloat*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByCompareVariableFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_METHOD_4_B0960E81C9BBE571_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EE88398CCB83380C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByCompareVariableFloat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByCompareVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCOMPAREVARIABLEFLOAT_METHOD_4_EE88398CCB83380C_OFFSET))(a1, a2);
		}
	};
}
