#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/InLevelPauseLevelTab.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSystemSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSYSTEMSETTING_CLASS_3_C11F5A812B3CC39F_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14875AB0)
#define MOLEMOLE_CONFIG_CONFIGSYSTEMSETTING_CLASS_3_C11F5A812B3CC39F_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14875AC0)
#define MOLEMOLE_CONFIG_CONFIGSYSTEMSETTING_CLASS_3_C11F5A812B3CC39F_WRITE_OFFSET UNITYSDK_OFFSET(0x14875C50)
#define MOLEMOLE_CONFIG_CONFIGSYSTEMSETTING_CLASS_3_C11F5A812B3CC39F__CCTOR_OFFSET UNITYSDK_OFFSET(0x14875DB0)
#define MOLEMOLE_CONFIG_CONFIGSYSTEMSETTING_CLASS_3_C11F5A812B3CC39F__CTOR_OFFSET UNITYSDK_OFFSET(0x14875D70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSystemSetting_Class_3_C11F5A812B3CC39F_TypeDefinitionIndex = 84035;

	class ConfigSystemSetting_Class_3_C11F5A812B3CC39F : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSystemSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSystemSetting_Class_3_C11F5A812B3CC39F_TypeDefinitionIndex)->GetStaticField(0x42460);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ESystemSettingType, ::System::String*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ESystemSettingType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSystemSetting_Class_3_C11F5A812B3CC39F_TypeDefinitionIndex)->GetStaticField(0x42468);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSYSTEMSETTING_CLASS_3_C11F5A812B3CC39F__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSYSTEMSETTING_CLASS_3_C11F5A812B3CC39F__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSYSTEMSETTING_CLASS_3_C11F5A812B3CC39F_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSystemSetting*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSystemSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSYSTEMSETTING_CLASS_3_C11F5A812B3CC39F_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigSystemSetting*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSystemSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSYSTEMSETTING_CLASS_3_C11F5A812B3CC39F_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
