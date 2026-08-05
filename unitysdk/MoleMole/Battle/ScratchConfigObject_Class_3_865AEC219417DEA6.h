#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/DebugColor.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_NormalMethod.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_RayAxis.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_RayMethod.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_ScratchPreferMethod.h"
#include "unitysdk/MoleMole/Config/Vector3Range.h"
#include "unitysdk/MoleMole/WeaponDamageDecalType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class ScratchConfigObject; }
namespace MoleMole::Config { class EffectTimeSegmentConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_CLASS_3_865AEC219417DEA6_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17271560)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_CLASS_3_865AEC219417DEA6_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17271570)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_CLASS_3_865AEC219417DEA6_WRITE_OFFSET UNITYSDK_OFFSET(0x172723C0)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_CLASS_3_865AEC219417DEA6__CCTOR_OFFSET UNITYSDK_OFFSET(0x17272C60)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_CLASS_3_865AEC219417DEA6__CTOR_OFFSET UNITYSDK_OFFSET(0x17272C20)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ScratchConfigObject_Class_3_865AEC219417DEA6_TypeDefinitionIndex = 47458;

	class ScratchConfigObject_Class_3_865AEC219417DEA6 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Battle::ScratchConfigObject*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneHitWallEffect_ScratchPreferMethod>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneHitWallEffect_ScratchPreferMethod>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_Class_3_865AEC219417DEA6_TypeDefinitionIndex)->GetStaticField(0x3F260);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Vector3Range>** StaticGet_Field_3_12()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::Vector3Range>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_Class_3_865AEC219417DEA6_TypeDefinitionIndex)->GetStaticField(0x3F268);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_Class_3_865AEC219417DEA6_TypeDefinitionIndex)->GetStaticField(0x3F270);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_Class_3_865AEC219417DEA6_TypeDefinitionIndex)->GetStaticField(0x3F278);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::DebugColor>** StaticGet_Field_3_19()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::DebugColor>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_Class_3_865AEC219417DEA6_TypeDefinitionIndex)->GetStaticField(0x3F280);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_Class_3_865AEC219417DEA6_TypeDefinitionIndex)->GetStaticField(0x3F288);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneHitWallEffect_NormalMethod>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneHitWallEffect_NormalMethod>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_Class_3_865AEC219417DEA6_TypeDefinitionIndex)->GetStaticField(0x3F290);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneHitWallEffect_RayAxis>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneHitWallEffect_RayAxis>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_Class_3_865AEC219417DEA6_TypeDefinitionIndex)->GetStaticField(0x3F298);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_Class_3_865AEC219417DEA6_TypeDefinitionIndex)->GetStaticField(0x3F2A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneHitWallEffect_RayMethod>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneHitWallEffect_RayMethod>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_Class_3_865AEC219417DEA6_TypeDefinitionIndex)->GetStaticField(0x3F2A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::EffectTimeSegmentConfig*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::EffectTimeSegmentConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_Class_3_865AEC219417DEA6_TypeDefinitionIndex)->GetStaticField(0x3F2B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_Class_3_865AEC219417DEA6_TypeDefinitionIndex)->GetStaticField(0x3F2B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::WeaponDamageDecalType>** StaticGet_Field_3_14()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::WeaponDamageDecalType>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_Class_3_865AEC219417DEA6_TypeDefinitionIndex)->GetStaticField(0x3F2C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_Field_3_13()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ScratchConfigObject_Class_3_865AEC219417DEA6_TypeDefinitionIndex)->GetStaticField(0x3F2C8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_CLASS_3_865AEC219417DEA6__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_CLASS_3_865AEC219417DEA6__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_CLASS_3_865AEC219417DEA6_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Battle::ScratchConfigObject*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::ScratchConfigObject*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_CLASS_3_865AEC219417DEA6_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Battle::ScratchConfigObject*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ScratchConfigObject*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_CLASS_3_865AEC219417DEA6_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
