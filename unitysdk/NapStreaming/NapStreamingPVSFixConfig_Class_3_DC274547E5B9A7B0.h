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

#define NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_CLASS_3_DC274547E5B9A7B0_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17FB89C0)
#define NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_CLASS_3_DC274547E5B9A7B0_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17FB89D0)
#define NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_CLASS_3_DC274547E5B9A7B0_WRITE_OFFSET UNITYSDK_OFFSET(0x17FB8B60)
#define NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_CLASS_3_DC274547E5B9A7B0__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FB8CC0)
#define NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_CLASS_3_DC274547E5B9A7B0__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB8C80)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingPVSFixConfig_Class_3_DC274547E5B9A7B0_TypeDefinitionIndex = 41600;

	class NapStreamingPVSFixConfig_Class_3_DC274547E5B9A7B0 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::NapStreaming::NapStreamingPVSFixConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::NapStreaming::PVSUnloadData>*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::NapStreaming::PVSUnloadData>*>*>**)Il2CppClass::FromTypeDefinitionIndex(NapStreamingPVSFixConfig_Class_3_DC274547E5B9A7B0_TypeDefinitionIndex)->GetStaticField(0x4EDD0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Bounds>*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Bounds>*>*>**)Il2CppClass::FromTypeDefinitionIndex(NapStreamingPVSFixConfig_Class_3_DC274547E5B9A7B0_TypeDefinitionIndex)->GetStaticField(0x4EDD8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_CLASS_3_DC274547E5B9A7B0__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_CLASS_3_DC274547E5B9A7B0__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_CLASS_3_DC274547E5B9A7B0_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::NapStreaming::NapStreamingPVSFixConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::NapStreaming::NapStreamingPVSFixConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_CLASS_3_DC274547E5B9A7B0_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::NapStreaming::NapStreamingPVSFixConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NapStreaming::NapStreamingPVSFixConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGPVSFIXCONFIG_CLASS_3_DC274547E5B9A7B0_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
