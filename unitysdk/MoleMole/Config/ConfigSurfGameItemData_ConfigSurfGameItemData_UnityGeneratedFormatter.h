#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/SurfGameItemDataEntry.h"
#include "unitysdk/MoleMole/Config/SurfGameTriggerDataEntry.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSurfGameItemData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_CONFIGSURFGAMEITEMDATA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x162BDBA0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_CONFIGSURFGAMEITEMDATA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x162BDBB0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_CONFIGSURFGAMEITEMDATA_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x162BDD90)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_CONFIGSURFGAMEITEMDATA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x162BDF30)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_CONFIGSURFGAMEITEMDATA_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x162BDEF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemData_ConfigSurfGameItemData_UnityGeneratedFormatter_TypeDefinitionIndex = 51408;

	class ConfigSurfGameItemData_ConfigSurfGameItemData_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSurfGameItemData*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::SurfGameItemDataEntry>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::SurfGameItemDataEntry>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSurfGameItemData_ConfigSurfGameItemData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44B20);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::SurfGameTriggerDataEntry>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::SurfGameTriggerDataEntry>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSurfGameItemData_ConfigSurfGameItemData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44B28);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_CONFIGSURFGAMEITEMDATA_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_CONFIGSURFGAMEITEMDATA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_CONFIGSURFGAMEITEMDATA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSurfGameItemData*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSurfGameItemData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_CONFIGSURFGAMEITEMDATA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigSurfGameItemData*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSurfGameItemData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_CONFIGSURFGAMEITEMDATA_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
