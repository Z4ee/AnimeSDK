#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoEffectPluginHitWallBullet; }
namespace MoleMole::Battle { class BulletHoleConfigObject; }
namespace MoleMole::Config { class HitWallCameraShakeConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOEFFECTPLUGINHITWALLBULLET_CLASS_3_65B83B801FAB533B_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1384D510)
#define MOLEMOLE_MONOEFFECTPLUGINHITWALLBULLET_CLASS_3_65B83B801FAB533B_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1384D520)
#define MOLEMOLE_MONOEFFECTPLUGINHITWALLBULLET_CLASS_3_65B83B801FAB533B_WRITE_OFFSET UNITYSDK_OFFSET(0x1384D6B0)
#define MOLEMOLE_MONOEFFECTPLUGINHITWALLBULLET_CLASS_3_65B83B801FAB533B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1384D810)
#define MOLEMOLE_MONOEFFECTPLUGINHITWALLBULLET_CLASS_3_65B83B801FAB533B__CTOR_OFFSET UNITYSDK_OFFSET(0x1384D7D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginHitWallBullet_Class_3_65B83B801FAB533B_TypeDefinitionIndex = 60063;

	class MonoEffectPluginHitWallBullet_Class_3_65B83B801FAB533B : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoEffectPluginHitWallBullet*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Battle::BulletHoleConfigObject*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Battle::BulletHoleConfigObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginHitWallBullet_Class_3_65B83B801FAB533B_TypeDefinitionIndex)->GetStaticField(0x3FA20);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitWallCameraShakeConfig*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitWallCameraShakeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginHitWallBullet_Class_3_65B83B801FAB533B_TypeDefinitionIndex)->GetStaticField(0x3FA28);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALLBULLET_CLASS_3_65B83B801FAB533B__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALLBULLET_CLASS_3_65B83B801FAB533B__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALLBULLET_CLASS_3_65B83B801FAB533B_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoEffectPluginHitWallBullet*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoEffectPluginHitWallBullet*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALLBULLET_CLASS_3_65B83B801FAB533B_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MonoEffectPluginHitWallBullet*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginHitWallBullet*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALLBULLET_CLASS_3_65B83B801FAB533B_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
