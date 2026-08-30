#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleExtraPropertyAdditionPair; }

#define RPG_GAMECORE_ADDBATTLEEXTRAPROPERTYADDITION_METHOD_3_3C69A1D1D13B43DF_OFFSET UNITYSDK_OFFSET(0x1D69E7D0)
#define RPG_GAMECORE_ADDBATTLEEXTRAPROPERTYADDITION_METHOD_3_71C60CA31E31452C_OFFSET UNITYSDK_OFFSET(0x1D69E790)
#define RPG_GAMECORE_ADDBATTLEEXTRAPROPERTYADDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69E7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddBattleExtraPropertyAddition_TypeDefinitionIndex = 23375;

	class AddBattleExtraPropertyAddition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BattleExtraPropertyAdditionPair*>* PropertyAdditionList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDBATTLEEXTRAPROPERTYADDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_71C60CA31E31452C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddBattleExtraPropertyAddition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddBattleExtraPropertyAddition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDBATTLEEXTRAPROPERTYADDITION_METHOD_3_71C60CA31E31452C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3C69A1D1D13B43DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddBattleExtraPropertyAddition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddBattleExtraPropertyAddition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDBATTLEEXTRAPROPERTYADDITION_METHOD_3_3C69A1D1D13B43DF_OFFSET))(a1, a2);
		}
	};
}
