#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesDirection.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesPosition; }

#define RPG_GAMECORE_CHENLINGFESREGIONCELLCONFIG_METHOD_2_3ADE8769375F93D8_OFFSET UNITYSDK_OFFSET(0x1962C060)
#define RPG_GAMECORE_CHENLINGFESREGIONCELLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1962C260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesRegionCellConfig_TypeDefinitionIndex = 17536;

	class ChenLingFesRegionCellConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::ChenLingFesPosition* Position; // 0x18
		::RPG::GameCore::ChenLingFesDirection NextDirection; // 0x20
		::System::Boolean IfUseRotateAngle; // 0x24
		::System::UInt32 RotateAngle; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESREGIONCELLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3ADE8769375F93D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesRegionCellConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesRegionCellConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESREGIONCELLCONFIG_METHOD_2_3ADE8769375F93D8_OFFSET))(a1, a2);
		}
	};
}
