#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FiveDimFluteEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimFluteConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1AC44480)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1AC443F0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_GET_AUTOPLAYCHANGEGPFAILTEXTMAPKEY_OFFSET UNITYSDK_OFFSET(0x1AC44720)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_GET_CODE_OFFSET UNITYSDK_OFFSET(0x1AC444E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x1AC44580)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AC44530)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_GET_TELEAREANAME_OFFSET UNITYSDK_OFFSET(0x1AC446B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1AC44790)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_ISVALIDCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AC44610)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC443E0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFluteData_TypeDefinitionIndex = 76739;

	class FiveDimFluteData : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimFluteConfigRow* _Row; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LittleGame::FiveDim::FiveDimFluteData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::LittleGame::FiveDim::FiveDimFluteData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::LittleGame::FiveDim::FiveDimFluteData* Create_1(::RPG::GameCore::FiveDimFluteConfigRow* a1)
		{
			return ((::RPG::Client::LittleGame::FiveDim::FiveDimFluteData*(*)(::RPG::GameCore::FiveDimFluteConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_CREATE_1_OFFSET))(a1);
		}

		::System::String* get_Code()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_GET_CODE_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_GET_FLOORID_OFFSET))(this);
		}

		::System::Boolean IsValidContentID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_ISVALIDCONTENTID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_TeleAreaName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_GET_TELEAREANAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_AutoPlayChangeGPFailTextmapKey()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_GET_AUTOPLAYCHANGEGPFAILTEXTMAPKEY_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimFluteEffectType get_Type()
		{
			return ((::RPG::GameCore::FiveDimFluteEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_GET_TYPE_OFFSET))(this);
		}
	};
}
