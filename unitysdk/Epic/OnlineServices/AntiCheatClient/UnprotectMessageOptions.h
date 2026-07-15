#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNPROTECTMESSAGEOPTIONS_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1C20BDA0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNPROTECTMESSAGEOPTIONS_GET_OUTBUFFERSIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1C20BDC0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNPROTECTMESSAGEOPTIONS_SET_DATA_OFFSET UNITYSDK_OFFSET(0x1C20BDB0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNPROTECTMESSAGEOPTIONS_SET_OUTBUFFERSIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1C20BDD0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNPROTECTMESSAGEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C20BDE0)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int UnprotectMessageOptions_TypeDefinitionIndex = 44217;

	class UnprotectMessageOptions : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* _Data_k__BackingField; // 0x10
		::System::UInt32 _OutBufferSizeBytes_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNPROTECTMESSAGEOPTIONS__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Data()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNPROTECTMESSAGEOPTIONS_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNPROTECTMESSAGEOPTIONS_SET_DATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_OutBufferSizeBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNPROTECTMESSAGEOPTIONS_GET_OUTBUFFERSIZEBYTES_OFFSET))(this);
		}

		::System::Void set_OutBufferSizeBytes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNPROTECTMESSAGEOPTIONS_SET_OUTBUFFERSIZEBYTES_OFFSET))(this, a1);
		}
	};
}
