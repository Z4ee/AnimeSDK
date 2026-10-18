#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_HOYOCHANNELHELPER_EXTRACTREQUESTID_OFFSET UNITYSDK_OFFSET(0xAF82330)
#define MIHOYO_SDK_HOYOCHANNELHELPER_GENERATEREQUESTID_OFFSET UNITYSDK_OFFSET(0xAF82120)
#define MIHOYO_SDK_HOYOCHANNELHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0xAF88650)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelHelper_TypeDefinitionIndex = 46521;

	class HoYoChannelHelper : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_s_requestIdLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelHelper_TypeDefinitionIndex)->GetStaticField(0x20B30);
		}
		static ::System::Int64* StaticGet_s_requestIdCounter()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelHelper_TypeDefinitionIndex)->GetStaticField(0x76E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELHELPER__CCTOR_OFFSET))();
		}

		static ::System::String* GenerateRequestId(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELHELPER_GENERATEREQUESTID_OFFSET))(a1);
		}

		static ::System::String* ExtractRequestId(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELHELPER_EXTRACTREQUESTID_OFFSET))(a1);
		}
	};
}
