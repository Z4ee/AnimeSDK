#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimFluteMatchCalculator_FluteSimpleData.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEMATCHCALCULATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x99FDDC0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEMATCHCALCULATOR_GETMATCHCODE_OFFSET UNITYSDK_OFFSET(0x99FF5E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEMATCHCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x99FF3B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEMATCHCALCULATOR__INIT_OFFSET UNITYSDK_OFFSET(0x99FF450)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFluteMatchCalculator_TypeDefinitionIndex = 62880;

	class FiveDimFluteMatchCalculator : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FiveDim::FiveDimFluteMatchCalculator_FluteSimpleData>* _FluteSimpleDataList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEMATCHCALCULATOR__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LittleGame::FiveDim::FiveDimFluteMatchCalculator* Create()
		{
			return ((::RPG::Client::LittleGame::FiveDim::FiveDimFluteMatchCalculator*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEMATCHCALCULATOR_CREATE_OFFSET))();
		}

		::System::UInt32 GetMatchCode(::System::String* inputCode)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEMATCHCALCULATOR_GETMATCHCODE_OFFSET))(this, inputCode);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEMATCHCALCULATOR__INIT_OFFSET))(this);
		}
	};
}
