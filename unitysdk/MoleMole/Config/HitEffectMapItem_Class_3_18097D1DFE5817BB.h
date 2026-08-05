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

#define MOLEMOLE_CONFIG_HITEFFECTMAPITEM_CLASS_3_18097D1DFE5817BB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B4E5190)
#define MOLEMOLE_CONFIG_HITEFFECTMAPITEM_CLASS_3_18097D1DFE5817BB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B4E51A0)
#define MOLEMOLE_CONFIG_HITEFFECTMAPITEM_CLASS_3_18097D1DFE5817BB_WRITE_OFFSET UNITYSDK_OFFSET(0x1B4E54B0)
#define MOLEMOLE_CONFIG_HITEFFECTMAPITEM_CLASS_3_18097D1DFE5817BB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4E56C0)
#define MOLEMOLE_CONFIG_HITEFFECTMAPITEM_CLASS_3_18097D1DFE5817BB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E5680)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitEffectMapItem_Class_3_18097D1DFE5817BB_TypeDefinitionIndex = 72300;

	class HitEffectMapItem_Class_3_18097D1DFE5817BB : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::HitEffectMapItem*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorGroundHitType>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorGroundHitType>**)Il2CppClass::FromTypeDefinitionIndex(HitEffectMapItem_Class_3_18097D1DFE5817BB_TypeDefinitionIndex)->GetStaticField(0x4E6E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorHitEffect>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorHitEffect>**)Il2CppClass::FromTypeDefinitionIndex(HitEffectMapItem_Class_3_18097D1DFE5817BB_TypeDefinitionIndex)->GetStaticField(0x4E6E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CharacterAnimatorStateType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CharacterAnimatorStateType>**)Il2CppClass::FromTypeDefinitionIndex(HitEffectMapItem_Class_3_18097D1DFE5817BB_TypeDefinitionIndex)->GetStaticField(0x4E6F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorAirHitType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorAirHitType>**)Il2CppClass::FromTypeDefinitionIndex(HitEffectMapItem_Class_3_18097D1DFE5817BB_TypeDefinitionIndex)->GetStaticField(0x4E6F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITEFFECTMAPITEM_CLASS_3_18097D1DFE5817BB__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITEFFECTMAPITEM_CLASS_3_18097D1DFE5817BB__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITEFFECTMAPITEM_CLASS_3_18097D1DFE5817BB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::HitEffectMapItem*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::HitEffectMapItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITEFFECTMAPITEM_CLASS_3_18097D1DFE5817BB_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::HitEffectMapItem*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::HitEffectMapItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITEFFECTMAPITEM_CLASS_3_18097D1DFE5817BB_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
