#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/BulletHoleUpdateStrategy.h"
#include "unitysdk/MoleMole/Battle/DebugColor.h"
#include "unitysdk/MoleMole/BulletDamageDecalType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Battle { class BulletHoleConfigObject; }
namespace MoleMole::Config { class EffectTimeSegmentConfig; }
namespace MoleMole::Config { class RaycastHitWallEffectConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_CLASS_3_12BA341B64374D41_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12CA15D0)
#define MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_CLASS_3_12BA341B64374D41_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12CA15E0)
#define MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_CLASS_3_12BA341B64374D41_WRITE_OFFSET UNITYSDK_OFFSET(0x12CA1A40)
#define MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_CLASS_3_12BA341B64374D41__CCTOR_OFFSET UNITYSDK_OFFSET(0x12CA1D20)
#define MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_CLASS_3_12BA341B64374D41__CTOR_OFFSET UNITYSDK_OFFSET(0x12CA1CE0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int BulletHoleConfigObject_Class_3_12BA341B64374D41_TypeDefinitionIndex = 66291;

	class BulletHoleConfigObject_Class_3_12BA341B64374D41 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Battle::BulletHoleConfigObject*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::DebugColor>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::DebugColor>**)Il2CppClass::FromTypeDefinitionIndex(BulletHoleConfigObject_Class_3_12BA341B64374D41_TypeDefinitionIndex)->GetStaticField(0x50A10);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::BulletDamageDecalType>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::BulletDamageDecalType>**)Il2CppClass::FromTypeDefinitionIndex(BulletHoleConfigObject_Class_3_12BA341B64374D41_TypeDefinitionIndex)->GetStaticField(0x50A18);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::EffectTimeSegmentConfig*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::EffectTimeSegmentConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(BulletHoleConfigObject_Class_3_12BA341B64374D41_TypeDefinitionIndex)->GetStaticField(0x50A20);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BulletHoleConfigObject_Class_3_12BA341B64374D41_TypeDefinitionIndex)->GetStaticField(0x50A28);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::RaycastHitWallEffectConfig*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::RaycastHitWallEffectConfig*>**)Il2CppClass::FromTypeDefinitionIndex(BulletHoleConfigObject_Class_3_12BA341B64374D41_TypeDefinitionIndex)->GetStaticField(0x50A30);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::BulletHoleUpdateStrategy>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::BulletHoleUpdateStrategy>**)Il2CppClass::FromTypeDefinitionIndex(BulletHoleConfigObject_Class_3_12BA341B64374D41_TypeDefinitionIndex)->GetStaticField(0x50A38);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_CLASS_3_12BA341B64374D41__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_CLASS_3_12BA341B64374D41__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_CLASS_3_12BA341B64374D41_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Battle::BulletHoleConfigObject*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::BulletHoleConfigObject*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_CLASS_3_12BA341B64374D41_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Battle::BulletHoleConfigObject*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::BulletHoleConfigObject*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_CLASS_3_12BA341B64374D41_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
