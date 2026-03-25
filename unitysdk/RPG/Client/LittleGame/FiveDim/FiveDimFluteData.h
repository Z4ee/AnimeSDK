#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FiveDimFluteEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimFluteConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x99FD6A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x99FD5F0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_GET_AUTOPLAYCHANGEGPFAILTEXTMAPKEY_OFFSET UNITYSDK_OFFSET(0x99FD820)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_GET_CODE_OFFSET UNITYSDK_OFFSET(0x99FD720)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x99FD760)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x99FD740)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_GET_TELEAREANAME_OFFSET UNITYSDK_OFFSET(0x99FD7F0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x99FD850)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x99FD5E0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFluteData_TypeDefinitionIndex = 62875;

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
