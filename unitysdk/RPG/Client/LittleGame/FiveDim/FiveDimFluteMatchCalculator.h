#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimFluteMatchCalculator_FluteSimpleData.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FiveDim { class FiveDimFluteNewGuideData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEMATCHCALCULATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x1AC44E30)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEMATCHCALCULATOR_GETMATCHCODE_OFFSET UNITYSDK_OFFSET(0x1AC46E70)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEMATCHCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC46B70)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEMATCHCALCULATOR__INIT_OFFSET UNITYSDK_OFFSET(0x1AC46BD0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEMATCHCALCULATOR__ISNEWGUIDEFLUTE_OFFSET UNITYSDK_OFFSET(0x1AC46F80)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFluteMatchCalculator_TypeDefinitionIndex = 76744;

	class FiveDimFluteMatchCalculator : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FiveDim::FiveDimFluteNewGuideData*>* _FluteNewGuideDataList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FiveDim::FiveDimFluteMatchCalculator_FluteSimpleData>* _FluteSimpleDataList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEMATCHCALCULATOR__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LittleGame::FiveDim::FiveDimFluteMatchCalculator* Create()
		{
			return ((::RPG::Client::LittleGame::FiveDim::FiveDimFluteMatchCalculator*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEMATCHCALCULATOR_CREATE_OFFSET))();
		}

		::System::UInt32 GetMatchCode(::System::String* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEMATCHCALCULATOR_GETMATCHCODE_OFFSET))(this, a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEMATCHCALCULATOR__INIT_OFFSET))(this);
		}

		::System::Boolean _IsNewGuideFlute(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEMATCHCALCULATOR__ISNEWGUIDEFLUTE_OFFSET))(this, a1);
		}
	};
}
