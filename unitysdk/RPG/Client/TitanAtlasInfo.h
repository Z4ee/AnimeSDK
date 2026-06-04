#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TitanAtlasVoiceInfo; }
namespace RPG::Client { class TitanAtlasVoicePool; }
namespace RPG::GameCore { class TitanAtlasRow; }

#define RPG_CLIENT_TITANATLASINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xCA77080)
#define RPG_CLIENT_TITANATLASINFO_GETRANDOMVOICE_OFFSET UNITYSDK_OFFSET(0xCA77190)
#define RPG_CLIENT_TITANATLASINFO_GET_BASEID_OFFSET UNITYSDK_OFFSET(0xCA779F0)
#define RPG_CLIENT_TITANATLASINFO_GET_DESC_OFFSET UNITYSDK_OFFSET(0xCA77900)
#define RPG_CLIENT_TITANATLASINFO_GET_HASSEEN_OFFSET UNITYSDK_OFFSET(0xCA776E0)
#define RPG_CLIENT_TITANATLASINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0xCA77800)
#define RPG_CLIENT_TITANATLASINFO_GET_ISBASETITAN_OFFSET UNITYSDK_OFFSET(0xCA766D0)
#define RPG_CLIENT_TITANATLASINFO_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xCA76970)
#define RPG_CLIENT_TITANATLASINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCA77880)
#define RPG_CLIENT_TITANATLASINFO_GET_ROW_OFFSET UNITYSDK_OFFSET(0xCA77820)
#define RPG_CLIENT_TITANATLASINFO_GET_SHOWNREDDOT_OFFSET UNITYSDK_OFFSET(0xCA77430)
#define RPG_CLIENT_TITANATLASINFO_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0xCA77980)
#define RPG_CLIENT_TITANATLASINFO_NEEDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0xCA77550)
#define RPG_CLIENT_TITANATLASINFO_NEEDSHOWREDDOT_OFFSET UNITYSDK_OFFSET(0xCA76C40)
#define RPG_CLIENT_TITANATLASINFO_SETBASEID_OFFSET UNITYSDK_OFFSET(0xCA77140)
#define RPG_CLIENT_TITANATLASINFO_SETPOOL_OFFSET UNITYSDK_OFFSET(0xCA770F0)
#define RPG_CLIENT_TITANATLASINFO_SET_BASEID_OFFSET UNITYSDK_OFFSET(0xCA77A00)
#define RPG_CLIENT_TITANATLASINFO_SET_HASSEEN_OFFSET UNITYSDK_OFFSET(0xCA77A10)
#define RPG_CLIENT_TITANATLASINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0xCA77810)
#define RPG_CLIENT_TITANATLASINFO_SET_SHOWNREDDOT_OFFSET UNITYSDK_OFFSET(0xCA77B40)
#define RPG_CLIENT_TITANATLASINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCA770E0)

namespace RPG::Client
{
	inline static constexpr unsigned int TitanAtlasInfo_TypeDefinitionIndex = 63759;

	class TitanAtlasInfo : public ::System::Object
	{
	public:
		::RPG::Client::TitanAtlasVoicePool* _Pool; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18
		::System::UInt32 _BaseID_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TitanAtlasInfo* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::TitanAtlasInfo*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_CREATE_OFFSET))(a1);
		}

		::System::Void SetPool(::RPG::Client::TitanAtlasVoicePool* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TitanAtlasVoicePool*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_SETPOOL_OFFSET))(this, a1);
		}

		::System::Void SetBaseID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_SETBASEID_OFFSET))(this, a1);
		}

		::RPG::Client::TitanAtlasVoiceInfo* GetRandomVoice()
		{
			return ((::RPG::Client::TitanAtlasVoiceInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_GETRANDOMVOICE_OFFSET))(this);
		}

		::System::Boolean NeedShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_NEEDSHOWREDDOT_OFFSET))(this);
		}

		::System::Boolean NeedPlayUnlockAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_NEEDPLAYUNLOCKANIM_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::TitanAtlasRow* get_Row()
		{
			return ((::RPG::GameCore::TitanAtlasRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_GET_DESC_OFFSET))(this);
		}

		::System::UInt32 get_UnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_GET_UNLOCKID_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::UInt32 get_BaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_GET_BASEID_OFFSET))(this);
		}

		::System::Void set_BaseID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_SET_BASEID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBaseTitan()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_GET_ISBASETITAN_OFFSET))(this);
		}

		::System::Boolean get_HasSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_GET_HASSEEN_OFFSET))(this);
		}

		::System::Void set_HasSeen(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_SET_HASSEEN_OFFSET))(this, a1);
		}

		::System::Boolean get_ShownRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_GET_SHOWNREDDOT_OFFSET))(this);
		}

		::System::Void set_ShownRedDot(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASINFO_SET_SHOWNREDDOT_OFFSET))(this, a1);
		}
	};
}
