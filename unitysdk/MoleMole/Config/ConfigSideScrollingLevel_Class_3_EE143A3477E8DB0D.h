#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/SideScrollingHeatKillMonsterType.h"
#include "unitysdk/MoleMole/Battle/SideScrollingScoreGetType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class ConfigSideScrollingCamera; }
namespace MoleMole::Config { class ConfigSideScrollingLevel; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CLASS_3_EE143A3477E8DB0D_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B914970)
#define MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CLASS_3_EE143A3477E8DB0D_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B914980)
#define MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CLASS_3_EE143A3477E8DB0D_WRITE_OFFSET UNITYSDK_OFFSET(0x1B914C90)
#define MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CLASS_3_EE143A3477E8DB0D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B914EB0)
#define MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CLASS_3_EE143A3477E8DB0D__CTOR_OFFSET UNITYSDK_OFFSET(0x1B914E70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSideScrollingLevel_Class_3_EE143A3477E8DB0D_TypeDefinitionIndex = 49373;

	class ConfigSideScrollingLevel_Class_3_EE143A3477E8DB0D : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSideScrollingLevel*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::SideScrollingScoreGetType, ::System::Single>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::SideScrollingScoreGetType, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSideScrollingLevel_Class_3_EE143A3477E8DB0D_TypeDefinitionIndex)->GetStaticField(0x39CA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSideScrollingLevel_Class_3_EE143A3477E8DB0D_TypeDefinitionIndex)->GetStaticField(0x39CA8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::SideScrollingHeatKillMonsterType, ::System::Int32>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::SideScrollingHeatKillMonsterType, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSideScrollingLevel_Class_3_EE143A3477E8DB0D_TypeDefinitionIndex)->GetStaticField(0x39CB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSideScrollingCamera*>*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSideScrollingCamera*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSideScrollingLevel_Class_3_EE143A3477E8DB0D_TypeDefinitionIndex)->GetStaticField(0x39CB8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CLASS_3_EE143A3477E8DB0D__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CLASS_3_EE143A3477E8DB0D__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CLASS_3_EE143A3477E8DB0D_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSideScrollingLevel*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSideScrollingLevel*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CLASS_3_EE143A3477E8DB0D_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigSideScrollingLevel*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSideScrollingLevel*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CLASS_3_EE143A3477E8DB0D_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
