#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigMultiplayer; }
namespace MoleMole::Config { class ConfigMultiplayer_GameplayTagSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGMULTIPLAYER_CLASS_3_B4B17AC4E49C5ED0_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B7ED940)
#define MOLEMOLE_CONFIG_CONFIGMULTIPLAYER_CLASS_3_B4B17AC4E49C5ED0_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B7ED950)
#define MOLEMOLE_CONFIG_CONFIGMULTIPLAYER_CLASS_3_B4B17AC4E49C5ED0_WRITE_OFFSET UNITYSDK_OFFSET(0x1B7EDD10)
#define MOLEMOLE_CONFIG_CONFIGMULTIPLAYER_CLASS_3_B4B17AC4E49C5ED0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7EDF90)
#define MOLEMOLE_CONFIG_CONFIGMULTIPLAYER_CLASS_3_B4B17AC4E49C5ED0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7EDF50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMultiplayer_Class_3_B4B17AC4E49C5ED0_TypeDefinitionIndex = 61661;

	class ConfigMultiplayer_Class_3_B4B17AC4E49C5ED0 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigMultiplayer*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMultiplayer_Class_3_B4B17AC4E49C5ED0_TypeDefinitionIndex)->GetStaticField(0x4A560);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigMultiplayer_GameplayTagSetting*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigMultiplayer_GameplayTagSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMultiplayer_Class_3_B4B17AC4E49C5ED0_TypeDefinitionIndex)->GetStaticField(0x4A568);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMULTIPLAYER_CLASS_3_B4B17AC4E49C5ED0__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMULTIPLAYER_CLASS_3_B4B17AC4E49C5ED0__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMULTIPLAYER_CLASS_3_B4B17AC4E49C5ED0_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigMultiplayer*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigMultiplayer*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMULTIPLAYER_CLASS_3_B4B17AC4E49C5ED0_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigMultiplayer*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMultiplayer*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMULTIPLAYER_CLASS_3_B4B17AC4E49C5ED0_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
