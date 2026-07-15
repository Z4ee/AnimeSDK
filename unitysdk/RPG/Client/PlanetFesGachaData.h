#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesGachaType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PlanetFesGachaBasicRow; }
namespace System { class String; }

#define RPG_CLIENT_PLANETFESGACHADATA_GET_COSTGEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1A970430)
#define RPG_CLIENT_PLANETFESGACHADATA_GET_COSTITEMID_OFFSET UNITYSDK_OFFSET(0x1A96F910)
#define RPG_CLIENT_PLANETFESGACHADATA_GET_CURRENTGEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1A96FF10)
#define RPG_CLIENT_PLANETFESGACHADATA_GET_GACHAITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1A96F890)
#define RPG_CLIENT_PLANETFESGACHADATA_GET_GACHAITEMICONPATH_OFFSET UNITYSDK_OFFSET(0x1A96FFE0)
#define RPG_CLIENT_PLANETFESGACHADATA_GET_GACHAITEMID_OFFSET UNITYSDK_OFFSET(0x1A96FAD0)
#define RPG_CLIENT_PLANETFESGACHADATA_GET_GACHATYPE_OFFSET UNITYSDK_OFFSET(0x1A9704D0)
#define RPG_CLIENT_PLANETFESGACHADATA_GET_GEMICONPATH_OFFSET UNITYSDK_OFFSET(0x1A9701B0)
#define RPG_CLIENT_PLANETFESGACHADATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A970480)
#define RPG_CLIENT_PLANETFESGACHADATA_GET_ISMULTIGACHAUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A96FBE0)
#define RPG_CLIENT_PLANETFESGACHADATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A96FB20)
#define RPG_CLIENT_PLANETFESGACHADATA_GET_MAXMULTIGACHACOUNT_OFFSET UNITYSDK_OFFSET(0x1A9703E0)
#define RPG_CLIENT_PLANETFESGACHADATA_GET_UNLOCKDESC_OFFSET UNITYSDK_OFFSET(0x1A96FCD0)
#define RPG_CLIENT_PLANETFESGACHADATA__CHECKISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A96FB90)
#define RPG_CLIENT_PLANETFESGACHADATA__CHECKMULTIGACHAUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A96FC30)
#define RPG_CLIENT_PLANETFESGACHADATA__CHECKUNLOCKLIST_OFFSET UNITYSDK_OFFSET(0x1A970520)
#define RPG_CLIENT_PLANETFESGACHADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A96F840)
#define RPG_CLIENT_PLANETFESGACHADATA__GETGEMICONPATH_OFFSET UNITYSDK_OFFSET(0x1A970200)
#define RPG_CLIENT_PLANETFESGACHADATA__GETICONPATH_OFFSET UNITYSDK_OFFSET(0x1A970030)
#define RPG_CLIENT_PLANETFESGACHADATA__GETUNLOCKDESC_OFFSET UNITYSDK_OFFSET(0x1A96FD40)
#define RPG_CLIENT_PLANETFESGACHADATA__SAFEGETITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1A96F960)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesGachaData_TypeDefinitionIndex = 63643;

	class PlanetFesGachaData : public ::System::Object
	{
	public:
		::RPG::GameCore::PlanetFesGachaBasicRow* _Row; // 0x10
		::Il2CppArray<::System::UInt32>* _MultiGachaUnlockIDList; // 0x18
		::Il2CppArray<::System::UInt32>* _UnlockIDList; // 0x20

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHADATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_GachaItemCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHADATA_GET_GACHAITEMCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_GachaItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHADATA_GET_GACHAITEMID_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHADATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsMultiGachaUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHADATA_GET_ISMULTIGACHAUNLOCK_OFFSET))(this);
		}

		::RPG::Client::TextID get_UnlockDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHADATA_GET_UNLOCKDESC_OFFSET))(this);
		}

		::System::UInt32 get_CurrentGemCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHADATA_GET_CURRENTGEMCOUNT_OFFSET))(this);
		}

		::System::String* get_GachaItemIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHADATA_GET_GACHAITEMICONPATH_OFFSET))(this);
		}

		::System::String* get_GemIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHADATA_GET_GEMICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_MaxMultiGachaCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHADATA_GET_MAXMULTIGACHACOUNT_OFFSET))(this);
		}

		::System::UInt32 get_CostItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHADATA_GET_COSTITEMID_OFFSET))(this);
		}

		::System::UInt32 get_CostGemCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHADATA_GET_COSTGEMCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHADATA_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::PlanetFesGachaType get_GachaType()
		{
			return ((::RPG::GameCore::PlanetFesGachaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHADATA_GET_GACHATYPE_OFFSET))(this);
		}

		::System::UInt32 _SafeGetItemCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHADATA__SAFEGETITEMCOUNT_OFFSET))(this, a1);
		}

		::System::String* _GetIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHADATA__GETICONPATH_OFFSET))(this);
		}

		::System::String* _GetGemIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHADATA__GETGEMICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID _GetUnlockDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHADATA__GETUNLOCKDESC_OFFSET))(this);
		}

		::System::Boolean _CheckIsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHADATA__CHECKISUNLOCK_OFFSET))(this);
		}

		::System::Boolean _CheckMultiGachaUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHADATA__CHECKMULTIGACHAUNLOCK_OFFSET))(this);
		}

		::System::Boolean _CheckUnlockList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHADATA__CHECKUNLOCKLIST_OFFSET))(this, a1);
		}
	};
}
