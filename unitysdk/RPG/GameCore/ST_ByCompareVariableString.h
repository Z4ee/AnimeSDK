#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_METHOD_4_4451AD2F76E73CD4_OFFSET UNITYSDK_OFFSET(0x1D4BF9D0)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_METHOD_4_8EFF4D2D25B7A2E9_OFFSET UNITYSDK_OFFSET(0x1D4BF990)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_METHOD_4_BC4AAB076CE81499_OFFSET UNITYSDK_OFFSET(0x1D4BFBD0)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_METHOD_4_D7FDE9861AA1FCB6_OFFSET UNITYSDK_OFFSET(0x1D4BFC00)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4BF9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByCompareVariableString_TypeDefinitionIndex = 19840;

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

		static ::System::Void Method_4_8EFF4D2D25B7A2E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByCompareVariableString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByCompareVariableString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_METHOD_4_8EFF4D2D25B7A2E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4451AD2F76E73CD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByCompareVariableString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByCompareVariableString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_METHOD_4_4451AD2F76E73CD4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BC4AAB076CE81499(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableString*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_METHOD_4_BC4AAB076CE81499_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D7FDE9861AA1FCB6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLESTRING_METHOD_4_D7FDE9861AA1FCB6_OFFSET))(a1, a2);
		}
	};
}
