#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateReijuDataItem; }
namespace System { class String; }

#define RPG_CLIENT_FATETRAITSOURCEREIJU_GETDESC_OFFSET UNITYSDK_OFFSET(0xD043AA0)
#define RPG_CLIENT_FATETRAITSOURCEREIJU_GETIMGICON_OFFSET UNITYSDK_OFFSET(0xD043590)
#define RPG_CLIENT_FATETRAITSOURCEREIJU_GETNAME_OFFSET UNITYSDK_OFFSET(0xD043700)
#define RPG_CLIENT_FATETRAITSOURCEREIJU_GETRARITYBG_OFFSET UNITYSDK_OFFSET(0xD043690)
#define RPG_CLIENT_FATETRAITSOURCEREIJU_GET_REIJUDATA_OFFSET UNITYSDK_OFFSET(0xD0437E0)
#define RPG_CLIENT_FATETRAITSOURCEREIJU_GET_REIJUID_OFFSET UNITYSDK_OFFSET(0xD043C00)
#define RPG_CLIENT_FATETRAITSOURCEREIJU_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xD043BB0)
#define RPG_CLIENT_FATETRAITSOURCEREIJU_SET_REIJUID_OFFSET UNITYSDK_OFFSET(0xD043C10)
#define RPG_CLIENT_FATETRAITSOURCEREIJU__CTOR_OFFSET UNITYSDK_OFFSET(0xD041C00)
#define RPG_CLIENT_FATETRAITSOURCEREIJU__GET_REIJUDATA_B__11_0_OFFSET UNITYSDK_OFFSET(0xD043C20)

namespace RPG::Client
{
	inline static constexpr unsigned int FateTraitSourceReiju_TypeDefinitionIndex = 64075;

	class FateTraitSourceReiju : public ::System::Object
	{
	public:
		::RPG::Client::FateReijuDataItem* _ReijuData; // 0x10
		::System::UInt32 _ReijuID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEREIJU__CTOR_OFFSET))(this, a1);
		}

		::System::String* GetImgIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEREIJU_GETIMGICON_OFFSET))(this);
		}

		::System::String* GetRarityBg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEREIJU_GETRARITYBG_OFFSET))(this);
		}

		::RPG::Client::TextID GetName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEREIJU_GETNAME_OFFSET))(this);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEREIJU_GETDESC_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEREIJU_ISACTIVE_OFFSET))(this);
		}

		::System::UInt32 get_ReijuID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEREIJU_GET_REIJUID_OFFSET))(this);
		}

		::System::Void set_ReijuID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEREIJU_SET_REIJUID_OFFSET))(this, a1);
		}

		::RPG::Client::FateReijuDataItem* get_ReijuData()
		{
			return ((::RPG::Client::FateReijuDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEREIJU_GET_REIJUDATA_OFFSET))(this);
		}

		::System::Boolean _get_ReijuData_b__11_0(::RPG::Client::FateReijuDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateReijuDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEREIJU__GET_REIJUDATA_B__11_0_OFFSET))(this, a1);
		}
	};
}
