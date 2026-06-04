#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGELIGHTDATA_METHOD_2_577F56EA16B902D4_OFFSET UNITYSDK_OFFSET(0x19CABB30)
#define RPG_GAMECORE_STAGELIGHTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19CABC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageLightData_TypeDefinitionIndex = 18189;

	class StageLightData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int64 LightID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGELIGHTDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_577F56EA16B902D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageLightData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageLightData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGELIGHTDATA_METHOD_2_577F56EA16B902D4_OFFSET))(a1, a2);
		}
	};
}
