#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRFSTAGECONFIG_METHOD_2_DC38EBA036521C1F_OFFSET UNITYSDK_OFFSET(0x177A7000)
#define RPG_GAMECORE_TRFSTAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x177A7140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TRFStageConfig_TypeDefinitionIndex = 17340;

	class TRFStageConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* Entities; // 0x10
		::System::UInt32 AutoSpawnSteps; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFSTAGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DC38EBA036521C1F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TRFStageConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TRFStageConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFSTAGECONFIG_METHOD_2_DC38EBA036521C1F_OFFSET))(a1, a2);
		}
	};
}
