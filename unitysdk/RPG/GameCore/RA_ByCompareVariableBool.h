#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RA_BYCOMPAREVARIABLEBOOL_METHOD_4_1F68FDEF17ADF4E8_OFFSET UNITYSDK_OFFSET(0x18C82E20)
#define RPG_GAMECORE_RA_BYCOMPAREVARIABLEBOOL_METHOD_4_B4A3EDD418568100_OFFSET UNITYSDK_OFFSET(0x18C5C360)
#define RPG_GAMECORE_RA_BYCOMPAREVARIABLEBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x18C5C310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_ByCompareVariableBool_TypeDefinitionIndex = 18973;

	class RA_ByCompareVariableBool : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* VarName; // 0x20
		::System::Boolean CompareValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCOMPAREVARIABLEBOOL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1F68FDEF17ADF4E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByCompareVariableBool*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByCompareVariableBool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCOMPAREVARIABLEBOOL_METHOD_4_1F68FDEF17ADF4E8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B4A3EDD418568100(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByCompareVariableBool* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByCompareVariableBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCOMPAREVARIABLEBOOL_METHOD_4_B4A3EDD418568100_OFFSET))(a1, a2);
		}
	};
}
