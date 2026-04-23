#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueTournDivisionEffectRow; }
namespace RPG::GameCore { class RogueTournDivisionRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB0C1890)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0C1D50)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_DIVISIONHINTDESC_OFFSET UNITYSDK_OFFSET(0xB0C1F30)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xB0C1D90)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_DIVISIONPROGRESS_OFFSET UNITYSDK_OFFSET(0xB0C1DB0)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_EFFECTDESCPARAMARRAY_OFFSET UNITYSDK_OFFSET(0xB0C2240)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_EFFECTDESCTEXT_OFFSET UNITYSDK_OFFSET(0xB0C21B0)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_EFFECTDESC_OFFSET UNITYSDK_OFFSET(0xB0C13B0)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_EFFECTROW_OFFSET UNITYSDK_OFFSET(0xB0C2140)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB0C1FC0)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_ICONPREFABPATH_OFFSET UNITYSDK_OFFSET(0xB0C2040)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB0C1EA0)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xB0C1E30)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0xB0C20C0)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_SET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xB0C1DA0)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB0C1D40)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournDivisionData_TypeDefinitionIndex = 62297;

	class RogueTournDivisionData : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournDivisionEffectRow* _EffectRow; // 0x10
		::RPG::GameCore::RogueTournDivisionRow* _Row; // 0x18
		::System::UInt32 _DivisionLevel_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournDivisionData* Create(::System::UInt32 divisionLevel)
		{
			return ((::RPG::Client::RogueTournDivisionData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDATA_CREATE_OFFSET))(divisionLevel);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDATA_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 get_DivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_DIVISIONLEVEL_OFFSET))(this);
		}

		::System::Void set_DivisionLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDATA_SET_DIVISIONLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_DivisionProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_DIVISIONPROGRESS_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournDivisionRow* get_Row()
		{
			return ((::RPG::GameCore::RogueTournDivisionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_DivisionHintDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_DIVISIONHINTDESC_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_IconPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_ICONPREFABPATH_OFFSET))(this);
		}

		::System::String* get_SmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_SMALLICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournDivisionEffectRow* get_EffectRow()
		{
			return ((::RPG::GameCore::RogueTournDivisionEffectRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_EFFECTROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_EffectDescText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_EFFECTDESCTEXT_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_EffectDescParamArray()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_EFFECTDESCPARAMARRAY_OFFSET))(this);
		}

		::System::String* get_EffectDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_EFFECTDESC_OFFSET))(this);
		}
	};
}
