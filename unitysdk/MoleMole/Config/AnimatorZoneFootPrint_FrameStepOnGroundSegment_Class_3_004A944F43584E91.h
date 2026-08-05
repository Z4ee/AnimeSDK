#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneFootPrint_FrameStepOnGroundSegment.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDSEGMENT_CLASS_3_004A944F43584E91_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BD4A160)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDSEGMENT_CLASS_3_004A944F43584E91_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD4A170)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDSEGMENT_CLASS_3_004A944F43584E91_WRITE_OFFSET UNITYSDK_OFFSET(0x1BD4A450)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDSEGMENT_CLASS_3_004A944F43584E91__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD4A660)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDSEGMENT_CLASS_3_004A944F43584E91__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD4A600)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneFootPrint_FrameStepOnGroundSegment_Class_3_004A944F43584E91_TypeDefinitionIndex = 90785;

	class AnimatorZoneFootPrint_FrameStepOnGroundSegment_Class_3_004A944F43584E91 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundSegment>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFootPrint_FrameStepOnGroundSegment_Class_3_004A944F43584E91_TypeDefinitionIndex)->GetStaticField(0x50B90);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFootPrint_FrameStepOnGroundSegment_Class_3_004A944F43584E91_TypeDefinitionIndex)->GetStaticField(0x50B98);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFootPrint_FrameStepOnGroundSegment_Class_3_004A944F43584E91_TypeDefinitionIndex)->GetStaticField(0x50BA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDSEGMENT_CLASS_3_004A944F43584E91__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDSEGMENT_CLASS_3_004A944F43584E91__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDSEGMENT_CLASS_3_004A944F43584E91_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundSegment& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundSegment&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDSEGMENT_CLASS_3_004A944F43584E91_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundSegment& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundSegment&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDSEGMENT_CLASS_3_004A944F43584E91_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
