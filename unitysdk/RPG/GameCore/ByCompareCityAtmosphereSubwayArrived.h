#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_METHOD_4_12B41C668754ACD1_OFFSET UNITYSDK_OFFSET(0x19509910)
#define RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_METHOD_4_2F1A8C4B74FA43AA_OFFSET UNITYSDK_OFFSET(0x19509B50)
#define RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_METHOD_4_7F042E972ED4BD13_OFFSET UNITYSDK_OFFSET(0x195099E0)
#define RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_METHOD_4_840B19781FDBC216_OFFSET UNITYSDK_OFFSET(0x19509BD0)
#define RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED__CTOR_OFFSET UNITYSDK_OFFSET(0x19509990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCityAtmosphereSubwayArrived_TypeDefinitionIndex = 19884;

	class ByCompareCityAtmosphereSubwayArrived : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 GroupID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_12B41C668754ACD1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_METHOD_4_12B41C668754ACD1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7F042E972ED4BD13(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_METHOD_4_7F042E972ED4BD13_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2F1A8C4B74FA43AA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_METHOD_4_2F1A8C4B74FA43AA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_840B19781FDBC216(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_METHOD_4_840B19781FDBC216_OFFSET))(a1, a2);
		}
	};
}
