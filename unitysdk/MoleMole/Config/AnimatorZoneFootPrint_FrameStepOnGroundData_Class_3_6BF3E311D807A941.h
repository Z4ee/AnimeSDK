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

#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDDATA_CLASS_3_6BF3E311D807A941_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1435C5C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDDATA_CLASS_3_6BF3E311D807A941_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1435C5D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDDATA_CLASS_3_6BF3E311D807A941_WRITE_OFFSET UNITYSDK_OFFSET(0x1435CA20)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDDATA_CLASS_3_6BF3E311D807A941__CCTOR_OFFSET UNITYSDK_OFFSET(0x1435CCF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDDATA_CLASS_3_6BF3E311D807A941__CTOR_OFFSET UNITYSDK_OFFSET(0x1435CCB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneFootPrint_FrameStepOnGroundData_Class_3_6BF3E311D807A941_TypeDefinitionIndex = 90787;

	class AnimatorZoneFootPrint_FrameStepOnGroundData_Class_3_6BF3E311D807A941 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundData*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFootPrint_FrameStepOnGroundData_Class_3_6BF3E311D807A941_TypeDefinitionIndex)->GetStaticField(0x36330);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFootPrint_FrameStepOnGroundData_Class_3_6BF3E311D807A941_TypeDefinitionIndex)->GetStaticField(0x36338);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFootPrint_FrameStepOnGroundData_Class_3_6BF3E311D807A941_TypeDefinitionIndex)->GetStaticField(0x36340);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundSegment>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundSegment>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFootPrint_FrameStepOnGroundData_Class_3_6BF3E311D807A941_TypeDefinitionIndex)->GetStaticField(0x36348);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDDATA_CLASS_3_6BF3E311D807A941__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDDATA_CLASS_3_6BF3E311D807A941__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDDATA_CLASS_3_6BF3E311D807A941_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundData*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDDATA_CLASS_3_6BF3E311D807A941_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundData*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FRAMESTEPONGROUNDDATA_CLASS_3_6BF3E311D807A941_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
