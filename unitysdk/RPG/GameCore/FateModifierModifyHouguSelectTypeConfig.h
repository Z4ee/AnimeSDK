#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERMODIFYHOUGUSELECTTYPECONFIG_METHOD_3_441CAACCC248722B_OFFSET UNITYSDK_OFFSET(0x19712840)
#define RPG_GAMECORE_FATEMODIFIERMODIFYHOUGUSELECTTYPECONFIG_METHOD_3_86AC3068BD267F22_OFFSET UNITYSDK_OFFSET(0x19711270)
#define RPG_GAMECORE_FATEMODIFIERMODIFYHOUGUSELECTTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19711220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierModifyHouguSelectTypeConfig_TypeDefinitionIndex = 18278;

	class FateModifierModifyHouguSelectTypeConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYHOUGUSELECTTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_441CAACCC248722B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierModifyHouguSelectTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierModifyHouguSelectTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYHOUGUSELECTTYPECONFIG_METHOD_3_441CAACCC248722B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_86AC3068BD267F22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierModifyHouguSelectTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierModifyHouguSelectTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYHOUGUSELECTTYPECONFIG_METHOD_3_86AC3068BD267F22_OFFSET))(a1, a2);
		}
	};
}
