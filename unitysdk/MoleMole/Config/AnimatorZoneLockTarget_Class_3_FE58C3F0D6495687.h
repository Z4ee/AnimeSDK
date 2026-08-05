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

#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CLASS_3_FE58C3F0D6495687_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11461010)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CLASS_3_FE58C3F0D6495687_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11461020)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CLASS_3_FE58C3F0D6495687_WRITE_OFFSET UNITYSDK_OFFSET(0x11462320)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CLASS_3_FE58C3F0D6495687__CCTOR_OFFSET UNITYSDK_OFFSET(0x11462E30)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CLASS_3_FE58C3F0D6495687__CTOR_OFFSET UNITYSDK_OFFSET(0x11462DF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLockTarget_Class_3_FE58C3F0D6495687_TypeDefinitionIndex = 72642;

	class AnimatorZoneLockTarget_Class_3_FE58C3F0D6495687 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneLockTarget*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneLockTarget_TargetType>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneLockTarget_TargetType>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_Class_3_FE58C3F0D6495687_TypeDefinitionIndex)->GetStaticField(0x46A30);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneLockTarget_ForceSpecialCameraLockType>** StaticGet_Field_3_13()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneLockTarget_ForceSpecialCameraLockType>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_Class_3_FE58C3F0D6495687_TypeDefinitionIndex)->GetStaticField(0x46A38);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_Class_3_FE58C3F0D6495687_TypeDefinitionIndex)->GetStaticField(0x46A40);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_Class_3_FE58C3F0D6495687_TypeDefinitionIndex)->GetStaticField(0x46A48);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_Class_3_FE58C3F0D6495687_TypeDefinitionIndex)->GetStaticField(0x46A50);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_Class_3_FE58C3F0D6495687_TypeDefinitionIndex)->GetStaticField(0x46A58);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_14()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_Class_3_FE58C3F0D6495687_TypeDefinitionIndex)->GetStaticField(0x46A60);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneLockTarget_SteerDirection>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneLockTarget_SteerDirection>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_Class_3_FE58C3F0D6495687_TypeDefinitionIndex)->GetStaticField(0x46A68);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneLockTarget_ZoneSteerType>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneLockTarget_ZoneSteerType>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_Class_3_FE58C3F0D6495687_TypeDefinitionIndex)->GetStaticField(0x46A70);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_Class_3_FE58C3F0D6495687_TypeDefinitionIndex)->GetStaticField(0x46A78);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_Class_3_FE58C3F0D6495687_TypeDefinitionIndex)->GetStaticField(0x46A80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLockTarget_Class_3_FE58C3F0D6495687_TypeDefinitionIndex)->GetStaticField(0x46A88);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CLASS_3_FE58C3F0D6495687__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CLASS_3_FE58C3F0D6495687__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CLASS_3_FE58C3F0D6495687_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneLockTarget*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneLockTarget*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CLASS_3_FE58C3F0D6495687_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneLockTarget*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneLockTarget*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CLASS_3_FE58C3F0D6495687_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
