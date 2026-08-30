#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_RA_BYCOMPAREVARIABLEBOOL_METHOD_4_B370DA1DB4D71999_OFFSET UNITYSDK_OFFSET(0x1D190B40)
#define RPG_GAMECORE_RA_BYCOMPAREVARIABLEBOOL_METHOD_4_B4A3EDD418568100_OFFSET UNITYSDK_OFFSET(0x1D190930)
#define RPG_GAMECORE_RA_BYCOMPAREVARIABLEBOOL_METHOD_4_EEB0120F93665326_OFFSET UNITYSDK_OFFSET(0x1D190B10)
#define RPG_GAMECORE_RA_BYCOMPAREVARIABLEBOOL_METHOD_4_EFCEAABF502854AD_OFFSET UNITYSDK_OFFSET(0x1D1908F0)
#define RPG_GAMECORE_RA_BYCOMPAREVARIABLEBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D190920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_ByCompareVariableBool_TypeDefinitionIndex = 19818;

	class RA_ByCompareVariableBool : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* VarName; // 0x20
		::System::Boolean CompareValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCOMPAREVARIABLEBOOL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EFCEAABF502854AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByCompareVariableBool*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByCompareVariableBool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCOMPAREVARIABLEBOOL_METHOD_4_EFCEAABF502854AD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B4A3EDD418568100(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByCompareVariableBool* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByCompareVariableBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCOMPAREVARIABLEBOOL_METHOD_4_B4A3EDD418568100_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EEB0120F93665326(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByCompareVariableBool*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByCompareVariableBool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCOMPAREVARIABLEBOOL_METHOD_4_EEB0120F93665326_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B370DA1DB4D71999(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByCompareVariableBool* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByCompareVariableBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCOMPAREVARIABLEBOOL_METHOD_4_B370DA1DB4D71999_OFFSET))(a1, a2);
		}
	};
}
