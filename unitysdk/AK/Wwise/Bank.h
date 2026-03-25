#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AK/Wwise/BaseType.h"
#include "unitysdk/WwiseObjectType.h"

class AkCallbackManager_BankCallback;
class WwiseBankReference;
class WwiseObjectReference;

#define AK_WWISE_BANK_GET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x18B86F90)
#define AK_WWISE_BANK_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x18B87010)
#define AK_WWISE_BANK_LOADASYNC_OFFSET UNITYSDK_OFFSET(0x18B87540)
#define AK_WWISE_BANK_LOAD_OFFSET UNITYSDK_OFFSET(0x18B87020)
#define AK_WWISE_BANK_SET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x18B86FA0)
#define AK_WWISE_BANK_UNLOAD_OFFSET UNITYSDK_OFFSET(0x18B87980)
#define AK_WWISE_BANK__CTOR_OFFSET UNITYSDK_OFFSET(0x18B87C40)

namespace AK::Wwise
{
	inline static constexpr unsigned int Bank_TypeDefinitionIndex = 34713;

	class Bank : public ::AK::Wwise::BaseType
	{
	public:
		::WwiseBankReference* WwiseObjectReference; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BANK__CTOR_OFFSET))(this);
		}

		::WwiseObjectReference* get_ObjectReference()
		{
			return ((::WwiseObjectReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BANK_GET_OBJECTREFERENCE_OFFSET))(this);
		}

		::System::Void set_ObjectReference(::WwiseObjectReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::WwiseObjectReference*))((::PBYTE)hIl2Cpp + AK_WWISE_BANK_SET_OBJECTREFERENCE_OFFSET))(this, value);
		}

		::WwiseObjectType get_WwiseObjectType()
		{
			return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BANK_GET_WWISEOBJECTTYPE_OFFSET))(this);
		}

		::System::Void Load(::System::Boolean decodeBank, ::System::Boolean saveDecodedBank)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AK_WWISE_BANK_LOAD_OFFSET))(this, decodeBank, saveDecodedBank);
		}

		::System::Void LoadAsync(::AkCallbackManager_BankCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::AkCallbackManager_BankCallback*))((::PBYTE)hIl2Cpp + AK_WWISE_BANK_LOADASYNC_OFFSET))(this, callback);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BANK_UNLOAD_OFFSET))(this);
		}
	};
}
