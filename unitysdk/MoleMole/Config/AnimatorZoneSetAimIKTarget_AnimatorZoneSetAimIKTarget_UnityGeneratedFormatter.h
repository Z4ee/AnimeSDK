#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AimIKLockTargetType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class AnimatorZoneSetAimIKTarget; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_ANIMATORZONESETAIMIKTARGET_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A05BED0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_ANIMATORZONESETAIMIKTARGET_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A05BEE0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_ANIMATORZONESETAIMIKTARGET_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1A05CA20)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_ANIMATORZONESETAIMIKTARGET_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A05D0C0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_ANIMATORZONESETAIMIKTARGET_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05D080)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetAimIKTarget_AnimatorZoneSetAimIKTarget_UnityGeneratedFormatter_TypeDefinitionIndex = 76842;

	class AnimatorZoneSetAimIKTarget_AnimatorZoneSetAimIKTarget_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneSetAimIKTarget*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetAimIKTarget_AnimatorZoneSetAimIKTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x499F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetAimIKTarget_AnimatorZoneSetAimIKTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x499F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector2>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetAimIKTarget_AnimatorZoneSetAimIKTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49A00);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetAimIKTarget_AnimatorZoneSetAimIKTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49A08);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetAimIKTarget_AnimatorZoneSetAimIKTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49A10);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetAimIKTarget_AnimatorZoneSetAimIKTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49A18);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetAimIKTarget_AnimatorZoneSetAimIKTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49A20);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetAimIKTarget_AnimatorZoneSetAimIKTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49A28);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetAimIKTarget_AnimatorZoneSetAimIKTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49A30);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetAimIKTarget_AnimatorZoneSetAimIKTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49A38);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AimIKLockTargetType>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AimIKLockTargetType>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetAimIKTarget_AnimatorZoneSetAimIKTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49A40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_ANIMATORZONESETAIMIKTARGET_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_ANIMATORZONESETAIMIKTARGET_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_ANIMATORZONESETAIMIKTARGET_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneSetAimIKTarget*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetAimIKTarget*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_ANIMATORZONESETAIMIKTARGET_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneSetAimIKTarget*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetAimIKTarget*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_ANIMATORZONESETAIMIKTARGET_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
