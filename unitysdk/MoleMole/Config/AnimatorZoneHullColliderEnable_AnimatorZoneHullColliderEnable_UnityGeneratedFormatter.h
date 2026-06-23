#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ColliderLayerType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class AnimatorZoneHullColliderEnable; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE_ANIMATORZONEHULLCOLLIDERENABLE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13FFC1A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE_ANIMATORZONEHULLCOLLIDERENABLE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13FFC1B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE_ANIMATORZONEHULLCOLLIDERENABLE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x13FFC8F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE_ANIMATORZONEHULLCOLLIDERENABLE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x13FFCD50)
#define MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE_ANIMATORZONEHULLCOLLIDERENABLE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x13FFCD10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneHullColliderEnable_AnimatorZoneHullColliderEnable_UnityGeneratedFormatter_TypeDefinitionIndex = 69638;

	class AnimatorZoneHullColliderEnable_AnimatorZoneHullColliderEnable_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneHullColliderEnable*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneHullColliderEnable_AnimatorZoneHullColliderEnable_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D3C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ColliderLayerType>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ColliderLayerType>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneHullColliderEnable_AnimatorZoneHullColliderEnable_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D3C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneHullColliderEnable_AnimatorZoneHullColliderEnable_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D3D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneHullColliderEnable_AnimatorZoneHullColliderEnable_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D3D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneHullColliderEnable_AnimatorZoneHullColliderEnable_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D3E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneHullColliderEnable_AnimatorZoneHullColliderEnable_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D3E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE_ANIMATORZONEHULLCOLLIDERENABLE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE_ANIMATORZONEHULLCOLLIDERENABLE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE_ANIMATORZONEHULLCOLLIDERENABLE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneHullColliderEnable*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneHullColliderEnable*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE_ANIMATORZONEHULLCOLLIDERENABLE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneHullColliderEnable*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneHullColliderEnable*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE_ANIMATORZONEHULLCOLLIDERENABLE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
