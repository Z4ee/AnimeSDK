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

#define MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_CLASS_3_7E8A046C912204CC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16C32710)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_CLASS_3_7E8A046C912204CC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16C32720)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_CLASS_3_7E8A046C912204CC_WRITE_OFFSET UNITYSDK_OFFSET(0x16C331E0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_CLASS_3_7E8A046C912204CC__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C33850)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_CLASS_3_7E8A046C912204CC__CTOR_OFFSET UNITYSDK_OFFSET(0x16C33810)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetAimIKTarget_Class_3_7E8A046C912204CC_TypeDefinitionIndex = 48455;

	class AnimatorZoneSetAimIKTarget_Class_3_7E8A046C912204CC : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneSetAimIKTarget*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetAimIKTarget_Class_3_7E8A046C912204CC_TypeDefinitionIndex)->GetStaticField(0x48740);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetAimIKTarget_Class_3_7E8A046C912204CC_TypeDefinitionIndex)->GetStaticField(0x48748);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetAimIKTarget_Class_3_7E8A046C912204CC_TypeDefinitionIndex)->GetStaticField(0x48750);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetAimIKTarget_Class_3_7E8A046C912204CC_TypeDefinitionIndex)->GetStaticField(0x48758);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AimIKLockTargetType>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AimIKLockTargetType>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetAimIKTarget_Class_3_7E8A046C912204CC_TypeDefinitionIndex)->GetStaticField(0x48760);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetAimIKTarget_Class_3_7E8A046C912204CC_TypeDefinitionIndex)->GetStaticField(0x48768);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetAimIKTarget_Class_3_7E8A046C912204CC_TypeDefinitionIndex)->GetStaticField(0x48770);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetAimIKTarget_Class_3_7E8A046C912204CC_TypeDefinitionIndex)->GetStaticField(0x48778);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetAimIKTarget_Class_3_7E8A046C912204CC_TypeDefinitionIndex)->GetStaticField(0x48780);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector2>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetAimIKTarget_Class_3_7E8A046C912204CC_TypeDefinitionIndex)->GetStaticField(0x48788);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetAimIKTarget_Class_3_7E8A046C912204CC_TypeDefinitionIndex)->GetStaticField(0x48790);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_CLASS_3_7E8A046C912204CC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_CLASS_3_7E8A046C912204CC__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_CLASS_3_7E8A046C912204CC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneSetAimIKTarget*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetAimIKTarget*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_CLASS_3_7E8A046C912204CC_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneSetAimIKTarget*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetAimIKTarget*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_CLASS_3_7E8A046C912204CC_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
