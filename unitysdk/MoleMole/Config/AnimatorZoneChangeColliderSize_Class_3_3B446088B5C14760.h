#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneChangeColliderSize_CapsuleDirection.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneChangeColliderSize_ColliderType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class AnimatorZoneChangeColliderSize; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_CLASS_3_3B446088B5C14760_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BD47A70)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_CLASS_3_3B446088B5C14760_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD47A80)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_CLASS_3_3B446088B5C14760_WRITE_OFFSET UNITYSDK_OFFSET(0x1BD485E0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_CLASS_3_3B446088B5C14760__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD48CA0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_CLASS_3_3B446088B5C14760__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD48C60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneChangeColliderSize_Class_3_3B446088B5C14760_TypeDefinitionIndex = 81540;

	class AnimatorZoneChangeColliderSize_Class_3_3B446088B5C14760 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneChangeColliderSize*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneChangeColliderSize_Class_3_3B446088B5C14760_TypeDefinitionIndex)->GetStaticField(0x50AE0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneChangeColliderSize_Class_3_3B446088B5C14760_TypeDefinitionIndex)->GetStaticField(0x50AE8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneChangeColliderSize_Class_3_3B446088B5C14760_TypeDefinitionIndex)->GetStaticField(0x50AF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneChangeColliderSize_CapsuleDirection>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneChangeColliderSize_CapsuleDirection>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneChangeColliderSize_Class_3_3B446088B5C14760_TypeDefinitionIndex)->GetStaticField(0x50AF8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneChangeColliderSize_Class_3_3B446088B5C14760_TypeDefinitionIndex)->GetStaticField(0x50B00);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneChangeColliderSize_Class_3_3B446088B5C14760_TypeDefinitionIndex)->GetStaticField(0x50B08);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneChangeColliderSize_Class_3_3B446088B5C14760_TypeDefinitionIndex)->GetStaticField(0x50B10);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneChangeColliderSize_Class_3_3B446088B5C14760_TypeDefinitionIndex)->GetStaticField(0x50B18);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneChangeColliderSize_Class_3_3B446088B5C14760_TypeDefinitionIndex)->GetStaticField(0x50B20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_CLASS_3_3B446088B5C14760__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_CLASS_3_3B446088B5C14760__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_CLASS_3_3B446088B5C14760_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneChangeColliderSize*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneChangeColliderSize*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_CLASS_3_3B446088B5C14760_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneChangeColliderSize*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneChangeColliderSize*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_CLASS_3_3B446088B5C14760_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
