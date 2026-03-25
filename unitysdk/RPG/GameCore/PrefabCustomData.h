#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PREFABCUSTOMDATA_METHOD_2_779A929D7759169F_OFFSET UNITYSDK_OFFSET(0x17510DF0)
#define RPG_GAMECORE_PREFABCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17510F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PrefabCustomData_TypeDefinitionIndex = 17504;

	class PrefabCustomData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 EnableDataType; // 0x10
		::System::Single TerrainRatePerObj; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREFABCUSTOMDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_779A929D7759169F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PrefabCustomData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PrefabCustomData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREFABCUSTOMDATA_METHOD_2_779A929D7759169F_OFFSET))(a1, a2);
		}
	};
}
