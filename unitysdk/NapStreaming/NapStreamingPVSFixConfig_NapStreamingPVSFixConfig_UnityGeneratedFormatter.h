#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapStreaming/PVSUnloadData.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace NapStreaming { class NapStreamingPVSFixConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_NAPSTREAMINGPVSFIXCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xEA6B050)
#define NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_NAPSTREAMINGPVSFIXCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xEA6B060)
#define NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_NAPSTREAMINGPVSFIXCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xEA6B240)
#define NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_NAPSTREAMINGPVSFIXCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xEA6B3E0)
#define NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_NAPSTREAMINGPVSFIXCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xEA6B3A0)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingPVSFixConfig_NapStreamingPVSFixConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 63144;

	class NapStreamingPVSFixConfig_NapStreamingPVSFixConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::NapStreaming::NapStreamingPVSFixConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Bounds>*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Bounds>*>*>**)Il2CppClass::FromTypeDefinitionIndex(NapStreamingPVSFixConfig_NapStreamingPVSFixConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3AFF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::NapStreaming::PVSUnloadData>*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::NapStreaming::PVSUnloadData>*>*>**)Il2CppClass::FromTypeDefinitionIndex(NapStreamingPVSFixConfig_NapStreamingPVSFixConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3AFF8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_NAPSTREAMINGPVSFIXCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_NAPSTREAMINGPVSFIXCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_NAPSTREAMINGPVSFIXCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::NapStreaming::NapStreamingPVSFixConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::NapStreaming::NapStreamingPVSFixConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_NAPSTREAMINGPVSFIXCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::NapStreaming::NapStreamingPVSFixConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::NapStreaming::NapStreamingPVSFixConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_NAPSTREAMINGPVSFIXCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
