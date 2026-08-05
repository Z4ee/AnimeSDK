#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class AnimatorZoneOverrideCameraDither; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHER_CLASS_3_E0785F84A538CFFD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x150EF550)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHER_CLASS_3_E0785F84A538CFFD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x150EF560)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHER_CLASS_3_E0785F84A538CFFD_WRITE_OFFSET UNITYSDK_OFFSET(0x150EFA50)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHER_CLASS_3_E0785F84A538CFFD__CCTOR_OFFSET UNITYSDK_OFFSET(0x150EFD70)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHER_CLASS_3_E0785F84A538CFFD__CTOR_OFFSET UNITYSDK_OFFSET(0x150EFD30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneOverrideCameraDither_Class_3_E0785F84A538CFFD_TypeDefinitionIndex = 76481;

	class AnimatorZoneOverrideCameraDither_Class_3_E0785F84A538CFFD : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneOverrideCameraDither*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector2>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneOverrideCameraDither_Class_3_E0785F84A538CFFD_TypeDefinitionIndex)->GetStaticField(0x39A80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneOverrideCameraDither_Class_3_E0785F84A538CFFD_TypeDefinitionIndex)->GetStaticField(0x39A88);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneOverrideCameraDither_Class_3_E0785F84A538CFFD_TypeDefinitionIndex)->GetStaticField(0x39A90);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneOverrideCameraDither_Class_3_E0785F84A538CFFD_TypeDefinitionIndex)->GetStaticField(0x39A98);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneOverrideCameraDither_Class_3_E0785F84A538CFFD_TypeDefinitionIndex)->GetStaticField(0x39AA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHER_CLASS_3_E0785F84A538CFFD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHER_CLASS_3_E0785F84A538CFFD__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHER_CLASS_3_E0785F84A538CFFD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneOverrideCameraDither*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneOverrideCameraDither*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHER_CLASS_3_E0785F84A538CFFD_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneOverrideCameraDither*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneOverrideCameraDither*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHER_CLASS_3_E0785F84A538CFFD_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
