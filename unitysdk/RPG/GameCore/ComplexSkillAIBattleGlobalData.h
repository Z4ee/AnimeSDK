#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleGlobalDataType.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAIBATTLEGLOBALDATA_METHOD_3_24568FFAE06AC09A_OFFSET UNITYSDK_OFFSET(0x1D9A7D00)
#define RPG_GAMECORE_COMPLEXSKILLAIBATTLEGLOBALDATA_METHOD_3_3D54F65345E34E01_OFFSET UNITYSDK_OFFSET(0x1D9A7D40)
#define RPG_GAMECORE_COMPLEXSKILLAIBATTLEGLOBALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A7D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIBattleGlobalData_TypeDefinitionIndex = 15360;

	class ComplexSkillAIBattleGlobalData : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::BattleGlobalDataType DataType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIBATTLEGLOBALDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_24568FFAE06AC09A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIBattleGlobalData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIBattleGlobalData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIBATTLEGLOBALDATA_METHOD_3_24568FFAE06AC09A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3D54F65345E34E01(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIBattleGlobalData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIBattleGlobalData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIBATTLEGLOBALDATA_METHOD_3_3D54F65345E34E01_OFFSET))(a1, a2);
		}
	};
}
