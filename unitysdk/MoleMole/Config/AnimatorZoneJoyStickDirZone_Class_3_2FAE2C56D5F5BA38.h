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

#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_CLASS_3_2FAE2C56D5F5BA38_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x177C7330)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_CLASS_3_2FAE2C56D5F5BA38_READMEMBER_OFFSET UNITYSDK_OFFSET(0x177C7340)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_CLASS_3_2FAE2C56D5F5BA38_WRITE_OFFSET UNITYSDK_OFFSET(0x177C7AC0)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_CLASS_3_2FAE2C56D5F5BA38__CCTOR_OFFSET UNITYSDK_OFFSET(0x177C7F50)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_CLASS_3_2FAE2C56D5F5BA38__CTOR_OFFSET UNITYSDK_OFFSET(0x177C7F10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneJoyStickDirZone_Class_3_2FAE2C56D5F5BA38_TypeDefinitionIndex = 65350;

	class AnimatorZoneJoyStickDirZone_Class_3_2FAE2C56D5F5BA38 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneJoyStickDirZone*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneJoyStickDirZone_Class_3_2FAE2C56D5F5BA38_TypeDefinitionIndex)->GetStaticField(0x44950);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneJoyStickDirZone_Class_3_2FAE2C56D5F5BA38_TypeDefinitionIndex)->GetStaticField(0x44958);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::AvatarSteerType>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::AvatarSteerType>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneJoyStickDirZone_Class_3_2FAE2C56D5F5BA38_TypeDefinitionIndex)->GetStaticField(0x44960);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneJoyStickDirZone_Class_3_2FAE2C56D5F5BA38_TypeDefinitionIndex)->GetStaticField(0x44968);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneJoyStickDirZone_Class_3_2FAE2C56D5F5BA38_TypeDefinitionIndex)->GetStaticField(0x44970);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneJoyStickDirZone_Class_3_2FAE2C56D5F5BA38_TypeDefinitionIndex)->GetStaticField(0x44978);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneJoyStickDirZone_Class_3_2FAE2C56D5F5BA38_TypeDefinitionIndex)->GetStaticField(0x44980);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneJoyStickDirZone_Class_3_2FAE2C56D5F5BA38_TypeDefinitionIndex)->GetStaticField(0x44988);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_CLASS_3_2FAE2C56D5F5BA38__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_CLASS_3_2FAE2C56D5F5BA38__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_CLASS_3_2FAE2C56D5F5BA38_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneJoyStickDirZone*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneJoyStickDirZone*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_CLASS_3_2FAE2C56D5F5BA38_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneJoyStickDirZone*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneJoyStickDirZone*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_CLASS_3_2FAE2C56D5F5BA38_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
