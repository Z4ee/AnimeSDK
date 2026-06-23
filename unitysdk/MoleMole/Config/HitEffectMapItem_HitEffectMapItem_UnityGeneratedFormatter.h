#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorAirHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorGroundHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"
#include "unitysdk/MoleMole/Config/CharacterAnimatorStateType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class HitEffectMapItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_HITEFFECTMAPITEM_HITEFFECTMAPITEM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17E365B0)
#define MOLEMOLE_CONFIG_HITEFFECTMAPITEM_HITEFFECTMAPITEM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17E365C0)
#define MOLEMOLE_CONFIG_HITEFFECTMAPITEM_HITEFFECTMAPITEM_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x17E36910)
#define MOLEMOLE_CONFIG_HITEFFECTMAPITEM_HITEFFECTMAPITEM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E36B60)
#define MOLEMOLE_CONFIG_HITEFFECTMAPITEM_HITEFFECTMAPITEM_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E36B20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitEffectMapItem_HitEffectMapItem_UnityGeneratedFormatter_TypeDefinitionIndex = 48939;

	class HitEffectMapItem_HitEffectMapItem_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::HitEffectMapItem*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorHitEffect>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorHitEffect>**)Il2CppClass::FromTypeDefinitionIndex(HitEffectMapItem_HitEffectMapItem_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44B50);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CharacterAnimatorStateType>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CharacterAnimatorStateType>**)Il2CppClass::FromTypeDefinitionIndex(HitEffectMapItem_HitEffectMapItem_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44B58);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorAirHitType>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorAirHitType>**)Il2CppClass::FromTypeDefinitionIndex(HitEffectMapItem_HitEffectMapItem_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44B60);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorGroundHitType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorGroundHitType>**)Il2CppClass::FromTypeDefinitionIndex(HitEffectMapItem_HitEffectMapItem_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44B68);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITEFFECTMAPITEM_HITEFFECTMAPITEM_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITEFFECTMAPITEM_HITEFFECTMAPITEM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITEFFECTMAPITEM_HITEFFECTMAPITEM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::HitEffectMapItem*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::HitEffectMapItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITEFFECTMAPITEM_HITEFFECTMAPITEM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::HitEffectMapItem*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::HitEffectMapItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITEFFECTMAPITEM_HITEFFECTMAPITEM_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
