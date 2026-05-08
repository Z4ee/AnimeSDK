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

#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_ACTIONGROUP_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x122F5D90)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_ACTIONGROUP_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x122F5DA0)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_ACTIONGROUP_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x122F60F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_ACTIONGROUP_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x122F6340)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_ACTIONGROUP_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x122F6300)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneParrySolo_ActionGroup_ActionGroup_UnityGeneratedFormatter_TypeDefinitionIndex = 71631;

	class AnimatorZoneParrySolo_ActionGroup_ActionGroup_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneParrySolo_ActionGroup*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneParrySolo_RotateType>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneParrySolo_RotateType>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneParrySolo_ActionGroup_ActionGroup_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C230);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::MoleMole::Config::HitStrengthType>>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::MoleMole::Config::HitStrengthType>>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneParrySolo_ActionGroup_ActionGroup_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C238);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneParrySolo_ActionGroup_ActionGroup_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C240);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::MoleMole::Config::HitDataType>>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::MoleMole::Config::HitDataType>>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneParrySolo_ActionGroup_ActionGroup_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C248);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_ACTIONGROUP_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_ACTIONGROUP_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_ACTIONGROUP_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneParrySolo_ActionGroup*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneParrySolo_ActionGroup*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_ACTIONGROUP_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneParrySolo_ActionGroup*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneParrySolo_ActionGroup*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP_ACTIONGROUP_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
