#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FiveDimFluteEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimFluteConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xA6A7AA0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA6A7A10)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_GET_AUTOPLAYCHANGEGPFAILTEXTMAPKEY_OFFSET UNITYSDK_OFFSET(0xA6A7C00)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_GET_CODE_OFFSET UNITYSDK_OFFSET(0xA6A7B00)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xA6A7B40)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA6A7B20)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_GET_TELEAREANAME_OFFSET UNITYSDK_OFFSET(0xA6A7BD0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA6A7C30)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA6A7A00)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFluteData_TypeDefinitionIndex = 70914;

	class FiveDimFluteData : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimFluteConfigRow* _Row; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LittleGame::FiveDim::FiveDimFluteData* Create(::System::UInt32 fluteID)
		{
			return ((::RPG::Client::LittleGame::FiveDim::FiveDimFluteData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_CREATE_OFFSET))(fluteID);
		}

		static ::RPG::Client::LittleGame::FiveDim::FiveDimFluteData* Create_1(::RPG::GameCore::FiveDimFluteConfigRow* row)
		{
			return ((::RPG::Client::LittleGame::FiveDim::FiveDimFluteData*(*)(::RPG::GameCore::FiveDimFluteConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_CREATE_1_OFFSET))(row);
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
