#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_AWARENESSUPDATESEGMENT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17D41FF0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_AWARENESSUPDATESEGMENT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17D42000)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_AWARENESSUPDATESEGMENT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x17D421E0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_AWARENESSUPDATESEGMENT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D42380)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_AWARENESSUPDATESEGMENT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D42340)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment_AwarenessUpdateSegment_UnityGeneratedFormatter_TypeDefinitionIndex = 74004;

	class AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment_AwarenessUpdateSegment_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment_AwarenessUpdateSegment_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3E7E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_AWARENESSUPDATESEGMENT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_AWARENESSUPDATESEGMENT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_AWARENESSUPDATESEGMENT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_AWARENESSUPDATESEGMENT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_AWARENESSUPDATESEGMENT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
