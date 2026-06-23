#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AvatarSteerType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class AnimatorZoneJoyStickDirZone; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_ANIMATORZONEJOYSTICKDIRZONE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10CF22F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_ANIMATORZONEJOYSTICKDIRZONE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10CF2300)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_ANIMATORZONEJOYSTICKDIRZONE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x10CF2AE0)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_ANIMATORZONEJOYSTICKDIRZONE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10CF2FA0)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_ANIMATORZONEJOYSTICKDIRZONE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x10CF2F60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneJoyStickDirZone_AnimatorZoneJoyStickDirZone_UnityGeneratedFormatter_TypeDefinitionIndex = 83672;

	class AnimatorZoneJoyStickDirZone_AnimatorZoneJoyStickDirZone_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneJoyStickDirZone*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::AvatarSteerType>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::AvatarSteerType>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneJoyStickDirZone_AnimatorZoneJoyStickDirZone_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46470);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneJoyStickDirZone_AnimatorZoneJoyStickDirZone_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46478);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneJoyStickDirZone_AnimatorZoneJoyStickDirZone_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46480);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneJoyStickDirZone_AnimatorZoneJoyStickDirZone_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46488);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneJoyStickDirZone_AnimatorZoneJoyStickDirZone_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46490);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneJoyStickDirZone_AnimatorZoneJoyStickDirZone_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46498);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneJoyStickDirZone_AnimatorZoneJoyStickDirZone_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x464A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneJoyStickDirZone_AnimatorZoneJoyStickDirZone_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x464A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_ANIMATORZONEJOYSTICKDIRZONE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_ANIMATORZONEJOYSTICKDIRZONE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_ANIMATORZONEJOYSTICKDIRZONE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneJoyStickDirZone*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneJoyStickDirZone*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_ANIMATORZONEJOYSTICKDIRZONE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneJoyStickDirZone*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneJoyStickDirZone*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_ANIMATORZONEJOYSTICKDIRZONE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
