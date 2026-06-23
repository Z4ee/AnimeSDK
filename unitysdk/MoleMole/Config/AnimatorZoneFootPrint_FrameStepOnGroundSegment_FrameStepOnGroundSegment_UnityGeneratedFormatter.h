#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneFootPrint_FrameStepOnGroundSegment.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDSEGMENT_FRAMESTEPONGROUNDSEGMENT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17D3D6C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDSEGMENT_FRAMESTEPONGROUNDSEGMENT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17D3D6D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDSEGMENT_FRAMESTEPONGROUNDSEGMENT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x17D3D9F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDSEGMENT_FRAMESTEPONGROUNDSEGMENT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D3DC40)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDSEGMENT_FRAMESTEPONGROUNDSEGMENT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D3DBE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneFootPrint_FrameStepOnGroundSegment_FrameStepOnGroundSegment_UnityGeneratedFormatter_TypeDefinitionIndex = 75816;

	class AnimatorZoneFootPrint_FrameStepOnGroundSegment_FrameStepOnGroundSegment_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundSegment>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFootPrint_FrameStepOnGroundSegment_FrameStepOnGroundSegment_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3E730);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFootPrint_FrameStepOnGroundSegment_FrameStepOnGroundSegment_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3E738);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFootPrint_FrameStepOnGroundSegment_FrameStepOnGroundSegment_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3E740);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDSEGMENT_FRAMESTEPONGROUNDSEGMENT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDSEGMENT_FRAMESTEPONGROUNDSEGMENT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDSEGMENT_FRAMESTEPONGROUNDSEGMENT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundSegment& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundSegment&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDSEGMENT_FRAMESTEPONGROUNDSEGMENT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundSegment& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundSegment&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDSEGMENT_FRAMESTEPONGROUNDSEGMENT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
