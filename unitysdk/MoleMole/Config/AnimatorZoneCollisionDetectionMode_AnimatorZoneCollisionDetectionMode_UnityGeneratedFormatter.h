#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/CollisionDetectionMode.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class AnimatorZoneCollisionDetectionMode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_ANIMATORZONECOLLISIONDETECTIONMODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x139931F0)
#define MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_ANIMATORZONECOLLISIONDETECTIONMODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13993200)
#define MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_ANIMATORZONECOLLISIONDETECTIONMODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x13993750)
#define MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_ANIMATORZONECOLLISIONDETECTIONMODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x13993AA0)
#define MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_ANIMATORZONECOLLISIONDETECTIONMODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x13993A60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneCollisionDetectionMode_AnimatorZoneCollisionDetectionMode_UnityGeneratedFormatter_TypeDefinitionIndex = 77629;

	class AnimatorZoneCollisionDetectionMode_AnimatorZoneCollisionDetectionMode_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneCollisionDetectionMode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneCollisionDetectionMode_AnimatorZoneCollisionDetectionMode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41740);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneCollisionDetectionMode_AnimatorZoneCollisionDetectionMode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41748);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneCollisionDetectionMode_AnimatorZoneCollisionDetectionMode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41750);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneCollisionDetectionMode_AnimatorZoneCollisionDetectionMode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41758);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::CollisionDetectionMode>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::CollisionDetectionMode>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneCollisionDetectionMode_AnimatorZoneCollisionDetectionMode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41760);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_ANIMATORZONECOLLISIONDETECTIONMODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_ANIMATORZONECOLLISIONDETECTIONMODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_ANIMATORZONECOLLISIONDETECTIONMODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneCollisionDetectionMode*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneCollisionDetectionMode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_ANIMATORZONECOLLISIONDETECTIONMODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneCollisionDetectionMode*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneCollisionDetectionMode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_ANIMATORZONECOLLISIONDETECTIONMODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
