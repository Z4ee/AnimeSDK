#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESERIESID_METHOD_4_23E4D6026F3795F1_OFFSET UNITYSDK_OFFSET(0x1A8A20E0)
#define RPG_GAMECORE_BYCOMPARESERIESID_METHOD_4_458E4AF41258B428_OFFSET UNITYSDK_OFFSET(0x1A8A2110)
#define RPG_GAMECORE_BYCOMPARESERIESID_METHOD_4_9DA5B2261FE062CB_OFFSET UNITYSDK_OFFSET(0x1A8A1FA0)
#define RPG_GAMECORE_BYCOMPARESERIESID_METHOD_4_F0AAF64821A379B8_OFFSET UNITYSDK_OFFSET(0x1A8A1F60)
#define RPG_GAMECORE_BYCOMPARESERIESID__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8A1F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSeriesID_TypeDefinitionIndex = 20299;

	class ByCompareSeriesID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESERIESID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F0AAF64821A379B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSeriesID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSeriesID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESERIESID_METHOD_4_F0AAF64821A379B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9DA5B2261FE062CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSeriesID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSeriesID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESERIESID_METHOD_4_9DA5B2261FE062CB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_23E4D6026F3795F1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSeriesID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSeriesID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESERIESID_METHOD_4_23E4D6026F3795F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_458E4AF41258B428(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSeriesID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSeriesID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESERIESID_METHOD_4_458E4AF41258B428_OFFSET))(a1, a2);
		}
	};
}
