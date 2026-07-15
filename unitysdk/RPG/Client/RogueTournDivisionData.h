#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueTournDivisionEffectRow; }
namespace RPG::GameCore { class RogueTournDivisionRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x19C21170)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19C21650)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_DIVISIONHINTDESC_OFFSET UNITYSDK_OFFSET(0x19C21890)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x19C21690)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_DIVISIONPROGRESS_OFFSET UNITYSDK_OFFSET(0x19C216B0)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_EFFECTDESCPARAMARRAY_OFFSET UNITYSDK_OFFSET(0x19C21C90)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_EFFECTDESCTEXT_OFFSET UNITYSDK_OFFSET(0x19C21BD0)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_EFFECTDESC_OFFSET UNITYSDK_OFFSET(0x19C20B70)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_EFFECTROW_OFFSET UNITYSDK_OFFSET(0x19C21B60)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x19C21950)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_ICONPREFABPATH_OFFSET UNITYSDK_OFFSET(0x19C21A00)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19C217D0)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x19C21760)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x19C21AB0)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA_SET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x19C216A0)
#define RPG_CLIENT_ROGUETOURNDIVISIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19C21640)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournDivisionData_TypeDefinitionIndex = 64597;

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

		static ::RPG::Client::RogueTournDivisionData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournDivisionData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDATA_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 get_DivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDATA_GET_DIVISIONLEVEL_OFFSET))(this);
		}

		::System::Void set_DivisionLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDATA_SET_DIVISIONLEVEL_OFFSET))(this, a1);
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
