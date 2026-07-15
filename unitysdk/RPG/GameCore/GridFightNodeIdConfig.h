#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTNODEIDCONFIG_METHOD_2_5706BE90DA924E09_OFFSET UNITYSDK_OFFSET(0x1D06C2C0)
#define RPG_GAMECORE_GRIDFIGHTNODEIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06C3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightNodeIdConfig_TypeDefinitionIndex = 10199;

	class GridFightNodeIdConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ChapterId; // 0x10
		::System::UInt32 SectionId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTNODEIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5706BE90DA924E09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightNodeIdConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightNodeIdConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTNODEIDCONFIG_METHOD_2_5706BE90DA924E09_OFFSET))(a1, a2);
		}
	};
}
