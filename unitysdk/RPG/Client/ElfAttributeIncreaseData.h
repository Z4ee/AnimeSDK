#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_GET_NEWVALUE_OFFSET UNITYSDK_OFFSET(0xCE34760)
#define RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_GET_OLDVALUE_OFFSET UNITYSDK_OFFSET(0xCE34740)
#define RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0xCE34720)
#define RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_SET_NEWVALUE_OFFSET UNITYSDK_OFFSET(0xCE34770)
#define RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_SET_OLDVALUE_OFFSET UNITYSDK_OFFSET(0xCE34750)
#define RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_SET_TEXTID_OFFSET UNITYSDK_OFFSET(0xCE34730)
#define RPG_CLIENT_ELFATTRIBUTEINCREASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCE34710)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfAttributeIncreaseData_TypeDefinitionIndex = 63782;

	class ElfAttributeIncreaseData : public ::System::Object
	{
	public:
		::RPG::Client::TextID _TextID_k__BackingField; // 0x10
		::System::UInt32 _NewValue_k__BackingField; // 0x20
		::System::UInt32 _OldValue_k__BackingField; // 0x24

		::System::Void _ctor(::RPG::Client::TextID a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFATTRIBUTEINCREASEDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::TextID get_TextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_GET_TEXTID_OFFSET))(this);
		}

		::System::Void set_TextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_SET_TEXTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_OldValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_GET_OLDVALUE_OFFSET))(this);
		}

		::System::Void set_OldValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_SET_OLDVALUE_OFFSET))(this, a1);
		}

		::System::UInt32 get_NewValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_GET_NEWVALUE_OFFSET))(this);
		}

		::System::Void set_NewValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFATTRIBUTEINCREASEDATA_SET_NEWVALUE_OFFSET))(this, a1);
		}
	};
}
