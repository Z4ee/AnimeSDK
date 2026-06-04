#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_METHOD_4_4451AD2F76E73CD4_OFFSET UNITYSDK_OFFSET(0x19C10940)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_METHOD_4_4FA1BA116FF21770_OFFSET UNITYSDK_OFFSET(0x19C10B40)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_METHOD_4_B65510496ECC4C40_OFFSET UNITYSDK_OFFSET(0x19C10870)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_METHOD_4_E45EA8242CFD4BA1_OFFSET UNITYSDK_OFFSET(0x19C10BC0)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x19C108F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByCompareVariableString_TypeDefinitionIndex = 18949;

	class ST_ByCompareVariableString : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* StateName; // 0x20
		::System::String* VarName; // 0x28
		::System::String* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B65510496ECC4C40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByCompareVariableString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByCompareVariableString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_METHOD_4_B65510496ECC4C40_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4451AD2F76E73CD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByCompareVariableString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByCompareVariableString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_METHOD_4_4451AD2F76E73CD4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4FA1BA116FF21770(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableString*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_METHOD_4_4FA1BA116FF21770_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E45EA8242CFD4BA1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_METHOD_4_E45EA8242CFD4BA1_OFFSET))(a1, a2);
		}
	};
}
