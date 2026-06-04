#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ST_BYCOMPAREVARIABLEFLOAT_METHOD_4_9BCC1CA0A340D91E_OFFSET UNITYSDK_OFFSET(0x19C101B0)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLEFLOAT_METHOD_4_9DBA94878DE6128F_OFFSET UNITYSDK_OFFSET(0x19C10400)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLEFLOAT_METHOD_4_BD1992D0F47091B6_OFFSET UNITYSDK_OFFSET(0x19C10480)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLEFLOAT_METHOD_4_BF2D544D8DF8DE2C_OFFSET UNITYSDK_OFFSET(0x19C100E0)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLEFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C10160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByCompareVariableFloat_TypeDefinitionIndex = 18948;

	class ST_ByCompareVariableFloat : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* StateName; // 0x20
		::System::String* VarName; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::System::Single CompareValue; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLEFLOAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BF2D544D8DF8DE2C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByCompareVariableFloat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByCompareVariableFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLEFLOAT_METHOD_4_BF2D544D8DF8DE2C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9BCC1CA0A340D91E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByCompareVariableFloat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByCompareVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLEFLOAT_METHOD_4_9BCC1CA0A340D91E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9DBA94878DE6128F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableFloat*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLEFLOAT_METHOD_4_9DBA94878DE6128F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BD1992D0F47091B6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableFloat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLEFLOAT_METHOD_4_BD1992D0F47091B6_OFFSET))(a1, a2);
		}
	};
}
