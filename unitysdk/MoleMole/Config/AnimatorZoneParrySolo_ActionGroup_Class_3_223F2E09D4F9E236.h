#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneParrySolo_RotateType.h"
#include "unitysdk/MoleMole/Config/HitDataType.h"
#include "unitysdk/MoleMole/Config/HitStrengthType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole::Config { class AnimatorZoneParrySolo_ActionGroup; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_CLASS_3_223F2E09D4F9E236_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14362030)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_CLASS_3_223F2E09D4F9E236_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14362040)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_CLASS_3_223F2E09D4F9E236_WRITE_OFFSET UNITYSDK_OFFSET(0x14362350)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_CLASS_3_223F2E09D4F9E236__CCTOR_OFFSET UNITYSDK_OFFSET(0x14362560)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_CLASS_3_223F2E09D4F9E236__CTOR_OFFSET UNITYSDK_OFFSET(0x14362520)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneParrySolo_ActionGroup_Class_3_223F2E09D4F9E236_TypeDefinitionIndex = 88116;

	class AnimatorZoneParrySolo_ActionGroup_Class_3_223F2E09D4F9E236 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneParrySolo_ActionGroup*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::MoleMole::Config::HitStrengthType>>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::MoleMole::Config::HitStrengthType>>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneParrySolo_ActionGroup_Class_3_223F2E09D4F9E236_TypeDefinitionIndex)->GetStaticField(0x36350);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneParrySolo_RotateType>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneParrySolo_RotateType>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneParrySolo_ActionGroup_Class_3_223F2E09D4F9E236_TypeDefinitionIndex)->GetStaticField(0x36358);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneParrySolo_ActionGroup_Class_3_223F2E09D4F9E236_TypeDefinitionIndex)->GetStaticField(0x36360);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::MoleMole::Config::HitDataType>>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::MoleMole::Config::HitDataType>>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneParrySolo_ActionGroup_Class_3_223F2E09D4F9E236_TypeDefinitionIndex)->GetStaticField(0x36368);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_CLASS_3_223F2E09D4F9E236__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_CLASS_3_223F2E09D4F9E236__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_CLASS_3_223F2E09D4F9E236_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneParrySolo_ActionGroup*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneParrySolo_ActionGroup*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_CLASS_3_223F2E09D4F9E236_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneParrySolo_ActionGroup*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneParrySolo_ActionGroup*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_CLASS_3_223F2E09D4F9E236_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
