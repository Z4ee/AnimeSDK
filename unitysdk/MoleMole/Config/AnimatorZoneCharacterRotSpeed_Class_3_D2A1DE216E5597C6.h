#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AvatarSteerType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class AnimatorZoneCharacterRotSpeed; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_CLASS_3_D2A1DE216E5597C6_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BD48DE0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_CLASS_3_D2A1DE216E5597C6_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD48DF0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_CLASS_3_D2A1DE216E5597C6_WRITE_OFFSET UNITYSDK_OFFSET(0x1BD494D0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_CLASS_3_D2A1DE216E5597C6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD49900)
#define MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_CLASS_3_D2A1DE216E5597C6__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD498C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneCharacterRotSpeed_Class_3_D2A1DE216E5597C6_TypeDefinitionIndex = 41944;

	class AnimatorZoneCharacterRotSpeed_Class_3_D2A1DE216E5597C6 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneCharacterRotSpeed*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneCharacterRotSpeed_Class_3_D2A1DE216E5597C6_TypeDefinitionIndex)->GetStaticField(0x50B30);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneCharacterRotSpeed_Class_3_D2A1DE216E5597C6_TypeDefinitionIndex)->GetStaticField(0x50B38);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneCharacterRotSpeed_Class_3_D2A1DE216E5597C6_TypeDefinitionIndex)->GetStaticField(0x50B40);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneCharacterRotSpeed_Class_3_D2A1DE216E5597C6_TypeDefinitionIndex)->GetStaticField(0x50B48);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneCharacterRotSpeed_Class_3_D2A1DE216E5597C6_TypeDefinitionIndex)->GetStaticField(0x50B50);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::AvatarSteerType>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::AvatarSteerType>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneCharacterRotSpeed_Class_3_D2A1DE216E5597C6_TypeDefinitionIndex)->GetStaticField(0x50B58);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneCharacterRotSpeed_Class_3_D2A1DE216E5597C6_TypeDefinitionIndex)->GetStaticField(0x50B60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_CLASS_3_D2A1DE216E5597C6__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_CLASS_3_D2A1DE216E5597C6__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_CLASS_3_D2A1DE216E5597C6_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneCharacterRotSpeed*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneCharacterRotSpeed*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_CLASS_3_D2A1DE216E5597C6_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneCharacterRotSpeed*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneCharacterRotSpeed*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHARACTERROTSPEED_CLASS_3_D2A1DE216E5597C6_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
