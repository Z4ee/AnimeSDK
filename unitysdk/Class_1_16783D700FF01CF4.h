#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FiveDimNavTransitType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelNavNodeConditionInfos; }

#define CLASS_1_16783D700FF01CF4__CTOR_OFFSET UNITYSDK_OFFSET(0x163C67E0)

inline static constexpr unsigned int Class_1_16783D700FF01CF4_TypeDefinitionIndex = 64282;

class Class_1_16783D700FF01CF4 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfos*>* ENFHFDNJAGC; // 0x10
	::System::UInt32 GFBJJBJEBOG; // 0x18
	::System::UInt32 ACIIMADPMPL; // 0x1C
	::System::UInt32 DHOGDNEMDKN; // 0x20
	::System::Boolean HDFCLOAGEHB; // 0x24
	::System::UInt32 CFAINNFGCMB; // 0x28
	::System::UInt32 NCBBOGCEBAP; // 0x2C
	::RPG::Client::FiveDimNavTransitType KILKHAIIEPF; // 0x30
	::System::UInt32 FKEMNAJNCJH; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16783D700FF01CF4__CTOR_OFFSET))(this);
	}
};
