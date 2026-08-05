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

#define NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_CLASS_3_12401ACCA384457D_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17CC9A60)
#define NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_CLASS_3_12401ACCA384457D_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17CC9A70)
#define NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_CLASS_3_12401ACCA384457D_WRITE_OFFSET UNITYSDK_OFFSET(0x17CC9D80)
#define NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_CLASS_3_12401ACCA384457D__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CC9FA0)
#define NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_CLASS_3_12401ACCA384457D__CTOR_OFFSET UNITYSDK_OFFSET(0x17CC9F60)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingAssetDensityConfig_Class_3_12401ACCA384457D_TypeDefinitionIndex = 41202;

	class NapStreamingAssetDensityConfig_Class_3_12401ACCA384457D : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::NapStreaming::NapStreamingAssetDensityConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::NapStreaming::SceneDensityInfo>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::NapStreaming::SceneDensityInfo>*>**)Il2CppClass::FromTypeDefinitionIndex(NapStreamingAssetDensityConfig_Class_3_12401ACCA384457D_TypeDefinitionIndex)->GetStaticField(0x51C80);
		}
		static ::Sirenix::Serialization::Serializer_1<::NapStreaming::SceneAssetDensityCell*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::NapStreaming::SceneAssetDensityCell*>**)Il2CppClass::FromTypeDefinitionIndex(NapStreamingAssetDensityConfig_Class_3_12401ACCA384457D_TypeDefinitionIndex)->GetStaticField(0x51C88);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_CLASS_3_12401ACCA384457D__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_CLASS_3_12401ACCA384457D__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_CLASS_3_12401ACCA384457D_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::NapStreaming::NapStreamingAssetDensityConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::NapStreaming::NapStreamingAssetDensityConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_CLASS_3_12401ACCA384457D_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::NapStreaming::NapStreamingAssetDensityConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NapStreaming::NapStreamingAssetDensityConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGASSETDENSITYCONFIG_CLASS_3_12401ACCA384457D_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
