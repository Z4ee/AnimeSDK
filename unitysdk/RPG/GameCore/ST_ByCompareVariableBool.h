#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_BYCOMPAREVARIABLEBOOL_METHOD_4_2BD23335713D87CB_OFFSET UNITYSDK_OFFSET(0x17691780)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLEBOOL_METHOD_4_FED3BD086D35B823_OFFSET UNITYSDK_OFFSET(0x176916B0)
#define RPG_GAMECORE_ST_BYCOMPAREVARIABLEBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x17691730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByCompareVariableBool_TypeDefinitionIndex = 18348;

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

		static ::System::Void Method_4_FED3BD086D35B823(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByCompareVariableBool*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByCompareVariableBool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLEBOOL_METHOD_4_FED3BD086D35B823_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2BD23335713D87CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByCompareVariableBool* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByCompareVariableBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCOMPAREVARIABLEBOOL_METHOD_4_2BD23335713D87CB_OFFSET))(a1, a2);
		}
	};
}
