#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesPosition; }

#define RPG_GAMECORE_CHENLINGFESREGIONITEMCONFIG_METHOD_2_010010416D285032_OFFSET UNITYSDK_OFFSET(0x1962C590)
#define RPG_GAMECORE_CHENLINGFESREGIONITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1962C6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesRegionItemConfig_TypeDefinitionIndex = 17537;

	class ChenLingFesRegionItemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::ChenLingFesPosition* Position; // 0x18
		::System::UInt32 RotateAngle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESREGIONITEMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_010010416D285032(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesRegionItemConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesRegionItemConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESREGIONITEMCONFIG_METHOD_2_010010416D285032_OFFSET))(a1, a2);
		}
	};
}
