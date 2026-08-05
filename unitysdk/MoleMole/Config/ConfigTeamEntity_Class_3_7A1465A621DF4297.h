#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/FeverBeingHitType.h"
#include "unitysdk/MoleMole/Config/FeverModifyType.h"
#include "unitysdk/MoleMole/Config/FeverSoundType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigFeverLevel; }
namespace MoleMole::Config { class ConfigFeverMode; }
namespace MoleMole::Config { class ConfigTeamComboSetting; }
namespace MoleMole::Config { class ConfigTeamEntity; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGTEAMENTITY_CLASS_3_7A1465A621DF4297_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16C53E60)
#define MOLEMOLE_CONFIG_CONFIGTEAMENTITY_CLASS_3_7A1465A621DF4297_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16C53E70)
#define MOLEMOLE_CONFIG_CONFIGTEAMENTITY_CLASS_3_7A1465A621DF4297_WRITE_OFFSET UNITYSDK_OFFSET(0x16C54420)
#define MOLEMOLE_CONFIG_CONFIGTEAMENTITY_CLASS_3_7A1465A621DF4297__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C547B0)
#define MOLEMOLE_CONFIG_CONFIGTEAMENTITY_CLASS_3_7A1465A621DF4297__CTOR_OFFSET UNITYSDK_OFFSET(0x16C54770)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTeamEntity_Class_3_7A1465A621DF4297_TypeDefinitionIndex = 85293;

	class ConfigTeamEntity_Class_3_7A1465A621DF4297 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigTeamEntity*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigFeverMode*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigFeverMode*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTeamEntity_Class_3_7A1465A621DF4297_TypeDefinitionIndex)->GetStaticField(0x48920);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTeamEntity_Class_3_7A1465A621DF4297_TypeDefinitionIndex)->GetStaticField(0x48928);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverSoundType, ::System::Int32>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverSoundType, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTeamEntity_Class_3_7A1465A621DF4297_TypeDefinitionIndex)->GetStaticField(0x48930);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigFeverLevel*>*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigFeverLevel*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTeamEntity_Class_3_7A1465A621DF4297_TypeDefinitionIndex)->GetStaticField(0x48938);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigTeamComboSetting*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigTeamComboSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTeamEntity_Class_3_7A1465A621DF4297_TypeDefinitionIndex)->GetStaticField(0x48940);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverModifyType, ::System::Single>*>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverModifyType, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTeamEntity_Class_3_7A1465A621DF4297_TypeDefinitionIndex)->GetStaticField(0x48948);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTeamEntity_Class_3_7A1465A621DF4297_TypeDefinitionIndex)->GetStaticField(0x48950);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverBeingHitType, ::System::Single>*>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverBeingHitType, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTeamEntity_Class_3_7A1465A621DF4297_TypeDefinitionIndex)->GetStaticField(0x48958);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTEAMENTITY_CLASS_3_7A1465A621DF4297__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTEAMENTITY_CLASS_3_7A1465A621DF4297__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTEAMENTITY_CLASS_3_7A1465A621DF4297_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigTeamEntity*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigTeamEntity*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTEAMENTITY_CLASS_3_7A1465A621DF4297_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigTeamEntity*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTeamEntity*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTEAMENTITY_CLASS_3_7A1465A621DF4297_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
