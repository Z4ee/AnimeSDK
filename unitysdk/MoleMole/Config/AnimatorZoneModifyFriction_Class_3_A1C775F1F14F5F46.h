#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneModifyFriction_ColliderType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/PhysicMaterialCombine.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class AnimatorZoneModifyFriction; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION_CLASS_3_A1C775F1F14F5F46_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1728E2A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION_CLASS_3_A1C775F1F14F5F46_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1728E2B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION_CLASS_3_A1C775F1F14F5F46_WRITE_OFFSET UNITYSDK_OFFSET(0x1728EA30)
#define MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION_CLASS_3_A1C775F1F14F5F46__CCTOR_OFFSET UNITYSDK_OFFSET(0x1728EEC0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION_CLASS_3_A1C775F1F14F5F46__CTOR_OFFSET UNITYSDK_OFFSET(0x1728EE80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneModifyFriction_Class_3_A1C775F1F14F5F46_TypeDefinitionIndex = 59000;

	class AnimatorZoneModifyFriction_Class_3_A1C775F1F14F5F46 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneModifyFriction*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneModifyFriction_Class_3_A1C775F1F14F5F46_TypeDefinitionIndex)->GetStaticField(0x3F470);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneModifyFriction_Class_3_A1C775F1F14F5F46_TypeDefinitionIndex)->GetStaticField(0x3F478);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneModifyFriction_ColliderType>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneModifyFriction_ColliderType>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneModifyFriction_Class_3_A1C775F1F14F5F46_TypeDefinitionIndex)->GetStaticField(0x3F480);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneModifyFriction_Class_3_A1C775F1F14F5F46_TypeDefinitionIndex)->GetStaticField(0x3F488);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneModifyFriction_Class_3_A1C775F1F14F5F46_TypeDefinitionIndex)->GetStaticField(0x3F490);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneModifyFriction_Class_3_A1C775F1F14F5F46_TypeDefinitionIndex)->GetStaticField(0x3F498);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneModifyFriction_Class_3_A1C775F1F14F5F46_TypeDefinitionIndex)->GetStaticField(0x3F4A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::PhysicMaterialCombine>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::PhysicMaterialCombine>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneModifyFriction_Class_3_A1C775F1F14F5F46_TypeDefinitionIndex)->GetStaticField(0x3F4A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION_CLASS_3_A1C775F1F14F5F46__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION_CLASS_3_A1C775F1F14F5F46__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION_CLASS_3_A1C775F1F14F5F46_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneModifyFriction*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneModifyFriction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION_CLASS_3_A1C775F1F14F5F46_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneModifyFriction*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneModifyFriction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION_CLASS_3_A1C775F1F14F5F46_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
