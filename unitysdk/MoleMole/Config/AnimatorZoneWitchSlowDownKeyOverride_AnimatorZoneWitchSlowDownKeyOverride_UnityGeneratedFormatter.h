#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class AnimatorZoneWitchSlowDownKeyOverride; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xE95DCA0)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xE95DCB0)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xE95E150)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xE95E450)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xE95E410)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneWitchSlowDownKeyOverride_AnimatorZoneWitchSlowDownKeyOverride_UnityGeneratedFormatter_TypeDefinitionIndex = 44442;

	class AnimatorZoneWitchSlowDownKeyOverride_AnimatorZoneWitchSlowDownKeyOverride_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneWitchSlowDownKeyOverride*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneWitchSlowDownKeyOverride_AnimatorZoneWitchSlowDownKeyOverride_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4ADE0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneWitchSlowDownKeyOverride_AnimatorZoneWitchSlowDownKeyOverride_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4ADE8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneWitchSlowDownKeyOverride_AnimatorZoneWitchSlowDownKeyOverride_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4ADF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneWitchSlowDownKeyOverride_AnimatorZoneWitchSlowDownKeyOverride_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4ADF8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneWitchSlowDownKeyOverride_AnimatorZoneWitchSlowDownKeyOverride_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4AE00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneWitchSlowDownKeyOverride*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneWitchSlowDownKeyOverride*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneWitchSlowDownKeyOverride*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneWitchSlowDownKeyOverride*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
