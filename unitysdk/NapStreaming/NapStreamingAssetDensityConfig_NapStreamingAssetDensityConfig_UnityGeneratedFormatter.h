#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapStreaming/SceneDensityInfo.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace NapStreaming { class NapStreamingAssetDensityConfig; }
namespace NapStreaming { class SceneAssetDensityCell; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_NAPSTREAMINGASSETDENSITYCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xEBE12A0)
#define NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_NAPSTREAMINGASSETDENSITYCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xEBE12B0)
#define NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_NAPSTREAMINGASSETDENSITYCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xEBE1610)
#define NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_NAPSTREAMINGASSETDENSITYCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xEBE1860)
#define NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_NAPSTREAMINGASSETDENSITYCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xEBE1820)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingAssetDensityConfig_NapStreamingAssetDensityConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 44775;

	class NapStreamingAssetDensityConfig_NapStreamingAssetDensityConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::NapStreaming::NapStreamingAssetDensityConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::NapStreaming::SceneAssetDensityCell*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::NapStreaming::SceneAssetDensityCell*>**)Il2CppClass::FromTypeDefinitionIndex(NapStreamingAssetDensityConfig_NapStreamingAssetDensityConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3AAC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::NapStreaming::SceneDensityInfo>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::NapStreaming::SceneDensityInfo>*>**)Il2CppClass::FromTypeDefinitionIndex(NapStreamingAssetDensityConfig_NapStreamingAssetDensityConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3AAC8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_NAPSTREAMINGASSETDENSITYCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_NAPSTREAMINGASSETDENSITYCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_NAPSTREAMINGASSETDENSITYCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::NapStreaming::NapStreamingAssetDensityConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::NapStreaming::NapStreamingAssetDensityConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_NAPSTREAMINGASSETDENSITYCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::NapStreaming::NapStreamingAssetDensityConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::NapStreaming::NapStreamingAssetDensityConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_NAPSTREAMINGASSETDENSITYCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
