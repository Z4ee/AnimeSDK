#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class AnimatorZoneMuteEntityAidAttackSwitchType; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13996250)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13996260)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x13996700)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x13996A00)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x139969C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneMuteEntityAidAttackSwitchType_AnimatorZoneMuteEntityAidAttackSwitchType_UnityGeneratedFormatter_TypeDefinitionIndex = 76706;

	class AnimatorZoneMuteEntityAidAttackSwitchType_AnimatorZoneMuteEntityAidAttackSwitchType_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneMuteEntityAidAttackSwitchType*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneMuteEntityAidAttackSwitchType_AnimatorZoneMuteEntityAidAttackSwitchType_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41800);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AidAttackType>*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::AidAttackType>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneMuteEntityAidAttackSwitchType_AnimatorZoneMuteEntityAidAttackSwitchType_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41808);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneMuteEntityAidAttackSwitchType_AnimatorZoneMuteEntityAidAttackSwitchType_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41810);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneMuteEntityAidAttackSwitchType_AnimatorZoneMuteEntityAidAttackSwitchType_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41818);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneMuteEntityAidAttackSwitchType_AnimatorZoneMuteEntityAidAttackSwitchType_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41820);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneMuteEntityAidAttackSwitchType*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneMuteEntityAidAttackSwitchType*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneMuteEntityAidAttackSwitchType*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneMuteEntityAidAttackSwitchType*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
