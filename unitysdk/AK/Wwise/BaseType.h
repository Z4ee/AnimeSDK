#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/WwiseObjectType.h"

class WwiseObjectReference;
namespace System { class String; }

#define AK_WWISE_BASETYPE_GET_ID_1_OFFSET UNITYSDK_OFFSET(0x1EEA65F0)
#define AK_WWISE_BASETYPE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1EEA6100)
#define AK_WWISE_BASETYPE_GET_INVALIDID_OFFSET UNITYSDK_OFFSET(0x1EEA6200)
#define AK_WWISE_BASETYPE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1EEA50E0)
#define AK_WWISE_BASETYPE_GET_VALUEGUID_OFFSET UNITYSDK_OFFSET(0x1EEA6600)
#define AK_WWISE_BASETYPE_ISVALID_OFFSET UNITYSDK_OFFSET(0x1EEA5050)
#define AK_WWISE_BASETYPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EEA6410)
#define AK_WWISE_BASETYPE_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1EEA6210)
#define AK_WWISE_BASETYPE_VERIFY_OFFSET UNITYSDK_OFFSET(0x1EEA6400)
#define AK_WWISE_BASETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEA4E40)

namespace AK::Wwise
{
	inline static constexpr unsigned int BaseType_TypeDefinitionIndex = 43787;

	class BaseType : public ::System::Object
	{
	public:
		::System::Int32 idInternal; // 0x10
		::Il2CppArray<::System::Byte>* valueGuidInternal; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASETYPE__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASETYPE_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_Id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASETYPE_GET_ID_OFFSET))(this);
		}

		static ::System::UInt32 get_InvalidId()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + AK_WWISE_BASETYPE_GET_INVALIDID_OFFSET))();
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASETYPE_ISVALID_OFFSET))(this);
		}

		::System::Boolean Validate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASETYPE_VALIDATE_OFFSET))(this);
		}

		::System::Void Verify(::AKRESULT a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKRESULT))((::PBYTE)hIl2Cpp + AK_WWISE_BASETYPE_VERIFY_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASETYPE_TOSTRING_OFFSET))(this);
		}

		::System::Int32 get_ID_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASETYPE_GET_ID_1_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_valueGuid()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASETYPE_GET_VALUEGUID_OFFSET))(this);
		}
	};
}
