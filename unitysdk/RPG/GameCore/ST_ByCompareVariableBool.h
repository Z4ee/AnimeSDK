#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ST_BYCOMPAREVARIABLEBOOL_METHOD_4_1C327DD7AAE1D8B8_OFFSET UNITYSDK_OFFSET(0x1B7777A0)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLEBOOL_METHOD_4_2BD23335713D87CB_OFFSET UNITYSDK_OFFSET(0x1B777580)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLEBOOL_METHOD_4_333E05635F7611DF_OFFSET UNITYSDK_OFFSET(0x1B7777D0)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLEBOOL_METHOD_4_C42E74AABA106CBA_OFFSET UNITYSDK_OFFSET(0x1B777540)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLEBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B777570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByCompareVariableBool_TypeDefinitionIndex = 19297;

	class ST_ByCompareVariableBool : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* StateName; // 0x20
		::System::String* VarName; // 0x28
		::System::Boolean CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLEBOOL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C42E74AABA106CBA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByCompareVariableBool*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByCompareVariableBool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLEBOOL_METHOD_4_C42E74AABA106CBA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2BD23335713D87CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByCompareVariableBool* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByCompareVariableBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLEBOOL_METHOD_4_2BD23335713D87CB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1C327DD7AAE1D8B8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableBool*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableBool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLEBOOL_METHOD_4_1C327DD7AAE1D8B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_333E05635F7611DF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableBool* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLEBOOL_METHOD_4_333E05635F7611DF_OFFSET))(a1, a2);
		}
	};
}
