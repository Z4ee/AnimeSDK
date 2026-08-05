#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESettingPlatform.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class SystemSettingEntryBase; }
namespace MoleMole::Config { class ConfigSoundSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDSETTING_CLASS_3_3E9534895E124295_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B7F9B70)
#define MOLEMOLE_CONFIG_CONFIGSOUNDSETTING_CLASS_3_3E9534895E124295_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B7F9B80)
#define MOLEMOLE_CONFIG_CONFIGSOUNDSETTING_CLASS_3_3E9534895E124295_WRITE_OFFSET UNITYSDK_OFFSET(0x1B7F9E90)
#define MOLEMOLE_CONFIG_CONFIGSOUNDSETTING_CLASS_3_3E9534895E124295__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7FA0B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDSETTING_CLASS_3_3E9534895E124295__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7FA070)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundSetting_Class_3_3E9534895E124295_TypeDefinitionIndex = 68192;

	class ConfigSoundSetting_Class_3_3E9534895E124295 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Int32>>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Int32>>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundSetting_Class_3_3E9534895E124295_TypeDefinitionIndex)->GetStaticField(0x4A590);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundSetting_Class_3_3E9534895E124295_TypeDefinitionIndex)->GetStaticField(0x4A598);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ESettingPlatform, ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ESettingPlatform, ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundSetting_Class_3_3E9534895E124295_TypeDefinitionIndex)->GetStaticField(0x4A5A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDSETTING_CLASS_3_3E9534895E124295__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDSETTING_CLASS_3_3E9534895E124295__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDSETTING_CLASS_3_3E9534895E124295_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundSetting*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDSETTING_CLASS_3_3E9534895E124295_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundSetting*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDSETTING_CLASS_3_3E9534895E124295_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
