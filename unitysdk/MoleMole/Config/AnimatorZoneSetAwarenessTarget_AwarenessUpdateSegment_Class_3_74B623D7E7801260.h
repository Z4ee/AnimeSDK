#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_CLASS_3_74B623D7E7801260_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11466480)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_CLASS_3_74B623D7E7801260_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11466490)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_CLASS_3_74B623D7E7801260_WRITE_OFFSET UNITYSDK_OFFSET(0x11466630)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_CLASS_3_74B623D7E7801260__CCTOR_OFFSET UNITYSDK_OFFSET(0x11466790)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_CLASS_3_74B623D7E7801260__CTOR_OFFSET UNITYSDK_OFFSET(0x11466750)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment_Class_3_74B623D7E7801260_TypeDefinitionIndex = 58573;

	class AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment_Class_3_74B623D7E7801260 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment_Class_3_74B623D7E7801260_TypeDefinitionIndex)->GetStaticField(0x46AD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_CLASS_3_74B623D7E7801260__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_CLASS_3_74B623D7E7801260__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_CLASS_3_74B623D7E7801260_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_CLASS_3_74B623D7E7801260_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_CLASS_3_74B623D7E7801260_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
