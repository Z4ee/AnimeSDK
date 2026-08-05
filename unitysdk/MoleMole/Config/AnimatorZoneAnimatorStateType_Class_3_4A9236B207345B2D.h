#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterAnimatorStateType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class AnimatorZoneAnimatorStateType; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEANIMATORSTATETYPE_CLASS_3_4A9236B207345B2D_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B53F560)
#define MOLEMOLE_CONFIG_ANIMATORZONEANIMATORSTATETYPE_CLASS_3_4A9236B207345B2D_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B53F570)
#define MOLEMOLE_CONFIG_ANIMATORZONEANIMATORSTATETYPE_CLASS_3_4A9236B207345B2D_WRITE_OFFSET UNITYSDK_OFFSET(0x1B53F9C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEANIMATORSTATETYPE_CLASS_3_4A9236B207345B2D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B53FC90)
#define MOLEMOLE_CONFIG_ANIMATORZONEANIMATORSTATETYPE_CLASS_3_4A9236B207345B2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1B53FC50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneAnimatorStateType_Class_3_4A9236B207345B2D_TypeDefinitionIndex = 88011;

	class AnimatorZoneAnimatorStateType_Class_3_4A9236B207345B2D : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneAnimatorStateType*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneAnimatorStateType_Class_3_4A9236B207345B2D_TypeDefinitionIndex)->GetStaticField(0x4D360);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneAnimatorStateType_Class_3_4A9236B207345B2D_TypeDefinitionIndex)->GetStaticField(0x4D368);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneAnimatorStateType_Class_3_4A9236B207345B2D_TypeDefinitionIndex)->GetStaticField(0x4D370);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneAnimatorStateType_Class_3_4A9236B207345B2D_TypeDefinitionIndex)->GetStaticField(0x4D378);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CharacterAnimatorStateType>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CharacterAnimatorStateType>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneAnimatorStateType_Class_3_4A9236B207345B2D_TypeDefinitionIndex)->GetStaticField(0x4D380);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEANIMATORSTATETYPE_CLASS_3_4A9236B207345B2D__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEANIMATORSTATETYPE_CLASS_3_4A9236B207345B2D__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEANIMATORSTATETYPE_CLASS_3_4A9236B207345B2D_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneAnimatorStateType*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneAnimatorStateType*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEANIMATORSTATETYPE_CLASS_3_4A9236B207345B2D_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneAnimatorStateType*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneAnimatorStateType*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEANIMATORSTATETYPE_CLASS_3_4A9236B207345B2D_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
