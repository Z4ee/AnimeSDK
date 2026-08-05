#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_HOYOCHANNELHELPER_EXTRACTREQUESTID_OFFSET UNITYSDK_OFFSET(0x1C9DD460)
#define MIHOYO_SDK_HOYOCHANNELHELPER_GENERATEREQUESTID_OFFSET UNITYSDK_OFFSET(0x1C9DD300)
#define MIHOYO_SDK_HOYOCHANNELHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9E1B80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelHelper_TypeDefinitionIndex = 37568;

	class HoYoChannelHelper : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_s_requestIdLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelHelper_TypeDefinitionIndex)->GetStaticField(0x2A190);
		}
		static ::System::Int64* StaticGet_s_requestIdCounter()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelHelper_TypeDefinitionIndex)->GetStaticField(0x89E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELHELPER__CCTOR_OFFSET))();
		}

		static ::System::String* GenerateRequestId(::System::String* prefix)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELHELPER_GENERATEREQUESTID_OFFSET))(prefix);
		}

		static ::System::String* ExtractRequestId(::System::String* jsonResponse)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELHELPER_EXTRACTREQUESTID_OFFSET))(jsonResponse);
		}
	};
}
