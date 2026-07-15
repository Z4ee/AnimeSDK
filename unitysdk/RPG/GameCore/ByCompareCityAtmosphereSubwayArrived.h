#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_METHOD_4_0E321D20FD65F6D8_OFFSET UNITYSDK_OFFSET(0x19CD79A0)
#define RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_METHOD_4_7F042E972ED4BD13_OFFSET UNITYSDK_OFFSET(0x19CD7800)
#define RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_METHOD_4_980E74F0A82F1FDF_OFFSET UNITYSDK_OFFSET(0x19CD7970)
#define RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_METHOD_4_C757341C92F20AFE_OFFSET UNITYSDK_OFFSET(0x19CD77C0)
#define RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED__CTOR_OFFSET UNITYSDK_OFFSET(0x19CD77F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCityAtmosphereSubwayArrived_TypeDefinitionIndex = 20248;

	class ByCompareCityAtmosphereSubwayArrived : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 GroupID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C757341C92F20AFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_METHOD_4_C757341C92F20AFE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7F042E972ED4BD13(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_METHOD_4_7F042E972ED4BD13_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_980E74F0A82F1FDF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_METHOD_4_980E74F0A82F1FDF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0E321D20FD65F6D8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECITYATMOSPHERESUBWAYARRIVED_METHOD_4_0E321D20FD65F6D8_OFFSET))(a1, a2);
		}
	};
}
