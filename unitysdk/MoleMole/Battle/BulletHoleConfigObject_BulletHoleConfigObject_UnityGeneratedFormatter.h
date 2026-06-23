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

#define MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_BULLETHOLECONFIGOBJECT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1358ACD0)
#define MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_BULLETHOLECONFIGOBJECT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1358ACE0)
#define MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_BULLETHOLECONFIGOBJECT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1358B1A0)
#define MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_BULLETHOLECONFIGOBJECT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1358B4B0)
#define MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_BULLETHOLECONFIGOBJECT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1358B470)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int BulletHoleConfigObject_BulletHoleConfigObject_UnityGeneratedFormatter_TypeDefinitionIndex = 46674;

	class BulletHoleConfigObject_BulletHoleConfigObject_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Battle::BulletHoleConfigObject*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::DebugColor>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::DebugColor>**)Il2CppClass::FromTypeDefinitionIndex(BulletHoleConfigObject_BulletHoleConfigObject_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49760);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::EffectTimeSegmentConfig*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::EffectTimeSegmentConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(BulletHoleConfigObject_BulletHoleConfigObject_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49768);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::BulletHoleUpdateStrategy>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::BulletHoleUpdateStrategy>**)Il2CppClass::FromTypeDefinitionIndex(BulletHoleConfigObject_BulletHoleConfigObject_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49770);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::BulletDamageDecalType>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::BulletDamageDecalType>**)Il2CppClass::FromTypeDefinitionIndex(BulletHoleConfigObject_BulletHoleConfigObject_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49778);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BulletHoleConfigObject_BulletHoleConfigObject_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49780);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::RaycastHitWallEffectConfig*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::RaycastHitWallEffectConfig*>**)Il2CppClass::FromTypeDefinitionIndex(BulletHoleConfigObject_BulletHoleConfigObject_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49788);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_BULLETHOLECONFIGOBJECT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_BULLETHOLECONFIGOBJECT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_BULLETHOLECONFIGOBJECT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Battle::BulletHoleConfigObject*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::BulletHoleConfigObject*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_BULLETHOLECONFIGOBJECT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Battle::BulletHoleConfigObject*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::BulletHoleConfigObject*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_BULLETHOLECONFIGOBJECT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
