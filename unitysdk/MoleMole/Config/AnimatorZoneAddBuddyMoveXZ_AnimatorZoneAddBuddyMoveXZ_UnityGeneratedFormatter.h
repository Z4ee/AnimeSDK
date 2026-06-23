#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class AnimatorZoneAddBuddyMoveXZ; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_ANIMATORZONEADDBUDDYMOVEXZ_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1108EE00)
#define MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_ANIMATORZONEADDBUDDYMOVEXZ_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1108EE10)
#define MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_ANIMATORZONEADDBUDDYMOVEXZ_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1108F2B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_ANIMATORZONEADDBUDDYMOVEXZ_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1108F5B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_ANIMATORZONEADDBUDDYMOVEXZ_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1108F570)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneAddBuddyMoveXZ_AnimatorZoneAddBuddyMoveXZ_UnityGeneratedFormatter_TypeDefinitionIndex = 84397;

	class AnimatorZoneAddBuddyMoveXZ_AnimatorZoneAddBuddyMoveXZ_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneAddBuddyMoveXZ*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneAddBuddyMoveXZ_AnimatorZoneAddBuddyMoveXZ_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48140);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneAddBuddyMoveXZ_AnimatorZoneAddBuddyMoveXZ_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48148);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneAddBuddyMoveXZ_AnimatorZoneAddBuddyMoveXZ_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48150);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneAddBuddyMoveXZ_AnimatorZoneAddBuddyMoveXZ_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48158);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneAddBuddyMoveXZ_AnimatorZoneAddBuddyMoveXZ_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48160);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_ANIMATORZONEADDBUDDYMOVEXZ_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_ANIMATORZONEADDBUDDYMOVEXZ_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_ANIMATORZONEADDBUDDYMOVEXZ_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneAddBuddyMoveXZ*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneAddBuddyMoveXZ*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_ANIMATORZONEADDBUDDYMOVEXZ_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneAddBuddyMoveXZ*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneAddBuddyMoveXZ*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_ANIMATORZONEADDBUDDYMOVEXZ_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
