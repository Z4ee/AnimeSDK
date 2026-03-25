#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PARABOLAPROJECTILEDATA_METHOD_3_5462F205E5EBE9E9_OFFSET UNITYSDK_OFFSET(0x17473170)
#define RPG_GAMECORE_PARABOLAPROJECTILEDATA_METHOD_3_A728605FF0D9FC15_OFFSET UNITYSDK_OFFSET(0x174879D0)
#define RPG_GAMECORE_PARABOLAPROJECTILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17473150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParabolaProjectileData_TypeDefinitionIndex = 14361;

	class ParabolaProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::System::Single ParabolaHeightRatio; // 0xA8
		::System::Single ParabolaRoll; // 0xAC
		::System::Boolean ParabolaUseWorldSpaceUp; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARABOLAPROJECTILEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A728605FF0D9FC15(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParabolaProjectileData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParabolaProjectileData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARABOLAPROJECTILEDATA_METHOD_3_A728605FF0D9FC15_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5462F205E5EBE9E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParabolaProjectileData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParabolaProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARABOLAPROJECTILEDATA_METHOD_3_5462F205E5EBE9E9_OFFSET))(a1, a2);
		}
	};
}
