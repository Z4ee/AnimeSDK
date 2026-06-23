#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimDamperParam.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimFixedParam.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimType.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneRotateBone_LocalAxisType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class AnimatorZoneRotateBone; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ANIMATORZONEROTATEBONE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1928CD00)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ANIMATORZONEROTATEBONE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1928CD10)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ANIMATORZONEROTATEBONE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1928DD60)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ANIMATORZONEROTATEBONE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1928E6F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ANIMATORZONEROTATEBONE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1928E6B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneRotateBone_AnimatorZoneRotateBone_UnityGeneratedFormatter_TypeDefinitionIndex = 41457;

	class AnimatorZoneRotateBone_AnimatorZoneRotateBone_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneRotateBone*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneRotateBone_AnimatorZoneRotateBone_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40C30);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::ProceduralAnimFixedParam>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::ProceduralAnimFixedParam>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneRotateBone_AnimatorZoneRotateBone_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40C38);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneRotateBone_AnimatorZoneRotateBone_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40C40);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneRotateBone_AnimatorZoneRotateBone_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40C48);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneRotateBone_LocalAxisType>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneRotateBone_LocalAxisType>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneRotateBone_AnimatorZoneRotateBone_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40C50);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneRotateBone_AnimatorZoneRotateBone_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40C58);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneRotateBone_AnimatorZoneRotateBone_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40C60);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::ProceduralAnimDamperParam>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::ProceduralAnimDamperParam>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneRotateBone_AnimatorZoneRotateBone_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40C68);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneRotateBone_AnimatorZoneRotateBone_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40C70);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::ProceduralAnimType>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::ProceduralAnimType>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneRotateBone_AnimatorZoneRotateBone_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40C78);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneRotateBone_AnimatorZoneRotateBone_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40C80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneRotateBone_AnimatorZoneRotateBone_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40C88);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ANIMATORZONEROTATEBONE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ANIMATORZONEROTATEBONE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ANIMATORZONEROTATEBONE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneRotateBone*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneRotateBone*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ANIMATORZONEROTATEBONE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneRotateBone*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneRotateBone*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ANIMATORZONEROTATEBONE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
