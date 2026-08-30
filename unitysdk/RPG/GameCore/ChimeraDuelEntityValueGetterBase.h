#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELENTITYVALUEGETTERBASE_METHOD_2_96724FB55C83BCA3_OFFSET UNITYSDK_OFFSET(0x1CFC5360)
#define RPG_GAMECORE_CHIMERADUELENTITYVALUEGETTERBASE_METHOD_2_EA83D007EF3D678A_OFFSET UNITYSDK_OFFSET(0x1CFC5650)
#define RPG_GAMECORE_CHIMERADUELENTITYVALUEGETTERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC4C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntityValueGetterBase_TypeDefinitionIndex = 15748;

	class ChimeraDuelEntityValueGetterBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYVALUEGETTERBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_96724FB55C83BCA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityValueGetterBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityValueGetterBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYVALUEGETTERBASE_METHOD_2_96724FB55C83BCA3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_EA83D007EF3D678A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityValueGetterBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityValueGetterBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYVALUEGETTERBASE_METHOD_2_EA83D007EF3D678A_OFFSET))(a1, a2);
		}
	};
}
