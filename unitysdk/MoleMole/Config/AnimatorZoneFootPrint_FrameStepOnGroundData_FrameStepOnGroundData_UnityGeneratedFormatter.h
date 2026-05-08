#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneFootPrint_FrameStepOnGroundSegment.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneFootPrint_FrameStepOnGroundData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDDATA_FRAMESTEPONGROUNDDATA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x141E2110)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDDATA_FRAMESTEPONGROUNDDATA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x141E2120)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDDATA_FRAMESTEPONGROUNDDATA_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x141E25C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDDATA_FRAMESTEPONGROUNDDATA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x141E28C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDDATA_FRAMESTEPONGROUNDDATA_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x141E2880)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneFootPrint_FrameStepOnGroundData_FrameStepOnGroundData_UnityGeneratedFormatter_TypeDefinitionIndex = 49603;

	class AnimatorZoneFootPrint_FrameStepOnGroundData_FrameStepOnGroundData_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundData*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFootPrint_FrameStepOnGroundData_FrameStepOnGroundData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43150);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundSegment>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundSegment>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFootPrint_FrameStepOnGroundData_FrameStepOnGroundData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43158);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFootPrint_FrameStepOnGroundData_FrameStepOnGroundData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43160);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFootPrint_FrameStepOnGroundData_FrameStepOnGroundData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43168);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDDATA_FRAMESTEPONGROUNDDATA_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDDATA_FRAMESTEPONGROUNDDATA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDDATA_FRAMESTEPONGROUNDDATA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundData*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDDATA_FRAMESTEPONGROUNDDATA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundData*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDDATA_FRAMESTEPONGROUNDDATA_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
