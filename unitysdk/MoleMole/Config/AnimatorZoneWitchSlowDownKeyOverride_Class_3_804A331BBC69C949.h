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

#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_CLASS_3_804A331BBC69C949_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14857530)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_CLASS_3_804A331BBC69C949_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14857540)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_CLASS_3_804A331BBC69C949_WRITE_OFFSET UNITYSDK_OFFSET(0x14857990)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_CLASS_3_804A331BBC69C949__CCTOR_OFFSET UNITYSDK_OFFSET(0x14857C60)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_CLASS_3_804A331BBC69C949__CTOR_OFFSET UNITYSDK_OFFSET(0x14857C20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneWitchSlowDownKeyOverride_Class_3_804A331BBC69C949_TypeDefinitionIndex = 72164;

	class AnimatorZoneWitchSlowDownKeyOverride_Class_3_804A331BBC69C949 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneWitchSlowDownKeyOverride*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneWitchSlowDownKeyOverride_Class_3_804A331BBC69C949_TypeDefinitionIndex)->GetStaticField(0x42260);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneWitchSlowDownKeyOverride_Class_3_804A331BBC69C949_TypeDefinitionIndex)->GetStaticField(0x42268);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneWitchSlowDownKeyOverride_Class_3_804A331BBC69C949_TypeDefinitionIndex)->GetStaticField(0x42270);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneWitchSlowDownKeyOverride_Class_3_804A331BBC69C949_TypeDefinitionIndex)->GetStaticField(0x42278);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneWitchSlowDownKeyOverride_Class_3_804A331BBC69C949_TypeDefinitionIndex)->GetStaticField(0x42280);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_CLASS_3_804A331BBC69C949__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_CLASS_3_804A331BBC69C949__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_CLASS_3_804A331BBC69C949_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneWitchSlowDownKeyOverride*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneWitchSlowDownKeyOverride*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_CLASS_3_804A331BBC69C949_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneWitchSlowDownKeyOverride*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneWitchSlowDownKeyOverride*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_CLASS_3_804A331BBC69C949_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
