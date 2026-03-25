#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueMiracleDisplayRow; }
namespace RPG::GameCore { class RogueMiracleEffectRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET_DESCPARAMLIST_OFFSET UNITYSDK_OFFSET(0xA33A7A0)
#define RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET_MIRACLEBGDESC_OFFSET UNITYSDK_OFFSET(0xA33A440)
#define RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET_MIRACLEDESC_OFFSET UNITYSDK_OFFSET(0xA33A670)
#define RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET_MIRACLEFIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0xA33A5C0)
#define RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET_MIRACLEICONPATH_OFFSET UNITYSDK_OFFSET(0xA33A510)
#define RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET_MIRACLENAME_OFFSET UNITYSDK_OFFSET(0xA33A310)
#define RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET__MIRACLEDISPLAYROW_OFFSET UNITYSDK_OFFSET(0xA33A3E0)
#define RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET__MIRACLEEFFECTROW_OFFSET UNITYSDK_OFFSET(0xA33A740)
#define RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA33A300)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleLegacyDisplayRowAdaptor_TypeDefinitionIndex = 54801;

	class RogueMiracleLegacyDisplayRowAdaptor : public ::System::Object
	{
	public:
		::System::UInt32 _MiracleEffectDisplayID; // 0x10
		::System::UInt32 _MiracleDisplayID; // 0x14

		::System::Void _ctor(::System::UInt32 miracleDisplayID, ::System::UInt32 miracleEffectDisplayID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR__CTOR_OFFSET))(this, miracleDisplayID, miracleEffectDisplayID);
		}

		::RPG::Client::TextID get_MiracleName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET_MIRACLENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_MiracleBGDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET_MIRACLEBGDESC_OFFSET))(this);
		}

		::System::String* get_MiracleIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET_MIRACLEICONPATH_OFFSET))(this);
		}

		::System::String* get_MiracleFigureIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET_MIRACLEFIGUREICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_MiracleDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET_MIRACLEDESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_DescParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET_DESCPARAMLIST_OFFSET))(this);
		}

		::RPG::GameCore::RogueMiracleDisplayRow* get__MiracleDisplayRow()
		{
			return ((::RPG::GameCore::RogueMiracleDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET__MIRACLEDISPLAYROW_OFFSET))(this);
		}

		::RPG::GameCore::RogueMiracleEffectRow* get__MiracleEffectRow()
		{
			return ((::RPG::GameCore::RogueMiracleEffectRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLELEGACYDISPLAYROWADAPTOR_GET__MIRACLEEFFECTROW_OFFSET))(this);
		}
	};
}
