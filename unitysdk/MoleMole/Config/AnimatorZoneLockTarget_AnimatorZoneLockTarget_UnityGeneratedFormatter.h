#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneLockTarget_ForceSpecialCameraLockType.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneLockTarget_SteerDirection.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneLockTarget_TargetType.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneLockTarget_ZoneSteerType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class AnimatorZoneLockTarget; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ANIMATORZONELOCKTARGET_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12B9FF50)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ANIMATORZONELOCKTARGET_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12B9FF60)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ANIMATORZONELOCKTARGET_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x12BA1320)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ANIMATORZONELOCKTARGET_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BA1E50)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ANIMATORZONELOCKTARGET_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x12BA1E10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLockTarget_AnimatorZoneLockTarget_UnityGeneratedFormatter_TypeDefinitionIndex = 45162;

	class AnimatorZoneLockTarget_AnimatorZoneLockTarget_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneLockTarget*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneLockTarget_ZoneSteerType>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneLockTarget_ZoneSteerType>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_AnimatorZoneLockTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33C80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_AnimatorZoneLockTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33C88);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneLockTarget_TargetType>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneLockTarget_TargetType>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_AnimatorZoneLockTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33C90);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneLockTarget_ForceSpecialCameraLockType>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneLockTarget_ForceSpecialCameraLockType>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_AnimatorZoneLockTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33C98);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_AnimatorZoneLockTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33CA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_AnimatorZoneLockTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33CA8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_AnimatorZoneLockTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33CB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_AnimatorZoneLockTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33CB8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_AnimatorZoneLockTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33CC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_AnimatorZoneLockTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33CC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_AnimatorZoneLockTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33CD0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneLockTarget_SteerDirection>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneLockTarget_SteerDirection>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_AnimatorZoneLockTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33CD8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ANIMATORZONELOCKTARGET_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ANIMATORZONELOCKTARGET_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ANIMATORZONELOCKTARGET_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneLockTarget*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneLockTarget*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ANIMATORZONELOCKTARGET_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneLockTarget*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneLockTarget*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ANIMATORZONELOCKTARGET_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
